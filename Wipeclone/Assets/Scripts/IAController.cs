using UnityEngine;
using System.Collections;


public class IAController : MonoBehaviour {

	public Transform gunPoss;
	public GameObject bullet;
	private GameObject ship;
	public float fireRate;
	float lastFireTime = 0;

	void Update(){
		//if (Input.GetKeyDown(KeyCode.E)){
			//fireRoket();
		//}
	}

	void fireRoket(){
		if (Time.time > lastFireTime + fireRate) {
			lastFireTime = Time.time;
			Instantiate (bullet, gunPoss.position, gunPoss.rotation);
		}
	}
}