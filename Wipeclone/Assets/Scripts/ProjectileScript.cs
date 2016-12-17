using UnityEngine;
using System.Collections;


public class ProjectileScript : MonoBehaviour {

	private Rigidbody myRB;
	public float missileStartForce;

	// Use this for initialization
	void Awake () {
		myRB = GetComponent<Rigidbody> ();
		myRB.AddRelativeForce(Vector3.forward*50);
	}

	// Update is called once per frame
	void Update () {

	}
		
	void OnTriggerEnter(Collider other) {
		if (other.tag == "Ship") {
			Rigidbody rb = other.gameObject.GetComponent<Rigidbody> ();
			rb.velocity = new Vector3 (0f, 0f, 0f);
			Destroy (myRB);
		}
	}

}