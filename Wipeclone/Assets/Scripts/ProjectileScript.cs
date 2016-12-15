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

}