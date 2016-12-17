using UnityEngine;
using System.Collections;


public class BulletProjectileScript : MonoBehaviour {

	private Rigidbody myRB;
	public float missileStartForce;

	// Use this for initialization
	void Start () {
		myRB = GetComponent<Rigidbody> ();
		myRB.AddRelativeForce(Vector3.forward*50);
	}
		
	void OnTriggerEnter(Collider other) {
		if (other.tag == "Ship") {
			Destroy (gameObject);
		}
	}

}