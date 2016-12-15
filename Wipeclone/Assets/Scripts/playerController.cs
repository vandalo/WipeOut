using UnityEngine;
using System.Collections;


public class playerController : MonoBehaviour {

	public Transform gunPoss;
	public GameObject bullet;
	public ParticleSystem left;
	public ParticleSystem right;
	private GameObject ship;
	public float fireRate;
	float lastFireTime = 0;

	void Start(){
		left.Stop ();
		right.Stop ();
	}

	void Update(){
		if (Input.GetKeyDown(KeyCode.Space)){
			fireRoket();
		}
	}

	void OnTriggerEnter(Collider collider) {
		if(collider.gameObject.tag == "rightCollider")
			right.Play ();
	}

	void OnTriggerExit (Collider collider){
		if(collider.gameObject.tag == "rightCollider")
			right.Stop ();
	}

	void fireRoket(){
		if (Time.time > lastFireTime + fireRate) {
			MenuMusic.playShootFunction ();
			lastFireTime = Time.time;
			Instantiate (bullet, gunPoss.position, gunPoss.rotation);
		}
	}


}