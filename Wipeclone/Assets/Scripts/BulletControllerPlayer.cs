using UnityEngine;
using System.Collections;


public class BulletControllerPlayer : MonoBehaviour {

	BulletShooter bulletShooter;
	void Start(){
		bulletShooter = GetComponent<BulletShooter> ();
	}



	void Update(){
		if (Input.GetKeyDown(KeyCode.Space)){
			print ("FIREEEE!");
			bulletShooter.fireRoket();
		}
	}



}