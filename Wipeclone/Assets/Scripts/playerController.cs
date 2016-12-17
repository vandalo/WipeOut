using UnityEngine;
using System.Collections;


public class playerController : MonoBehaviour {

	public Transform gunPoss;
	public GameObject bullet;
	private GameObject ship;
	public float fireRate;
	float lastFireTime = 0;

	void Update(){
		if (Input.GetKeyDown(KeyCode.Space)){
			fireRoket();
		}
	}

	void fireRoket(){
		if (Time.time > lastFireTime + fireRate) {
			MenuMusic.playShootFunction ();
			lastFireTime = Time.time;
			Instantiate (bullet, gunPoss.position, gunPoss.rotation);
		}
	}


}