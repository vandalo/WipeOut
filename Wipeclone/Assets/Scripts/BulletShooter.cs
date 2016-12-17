using UnityEngine;
using System.Collections;


public class BulletShooter : MonoBehaviour {

	public Transform gunPoss;
	public GameObject bullet;
	private GameObject ship;
	public float fireRate;
	float lastFireTime = 0;

	public void fireRoket(){
		print ("fire ROCKET");
		if (Time.time > lastFireTime + fireRate) {
			print ("Fired");
			lastFireTime = Time.time;
			Instantiate (bullet, gunPoss.position, gunPoss.rotation);
		}
	}
}