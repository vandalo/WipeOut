using UnityEngine;
using System.Collections;

public class BulletControllerAI : MonoBehaviour {


	BulletShooter bulletShooter;
	void Start(){
		bulletShooter = GetComponentInParent<BulletShooter> ();
	}


	void OnTriggerEnter(Collider other){
		if (other.tag == "Ship") {
			print ("Found a SHIP!");
			bulletShooter.fireRoket ();
		}
	}
}
