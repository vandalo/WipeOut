using UnityEngine;
using System.Collections;

public class NewNewShipController : MonoBehaviour {



	public float speed = 90F;
	public float turnSpeed = 5F;

	public float hoverForce = 65F;
	public float hoverHeight = 3.5F;


	private float powerInput;
	private float turnInput;
	private Rigidbody carRigidbody;

	void Awake () {
	
		carRigidbody = GetComponent<Rigidbody> ();

	}

	void FixedUpdate(){
		
		Ray ray = new Ray (transform.position, -transform.up);
		RaycastHit hit;

		Debug.DrawLine (transform.position, transform.position - (transform.up * hoverHeight), Color.cyan);

		if(Physics.Raycast(ray, out hit, hoverHeight)) {
			float proportionalHeight = (hoverHeight - hit.distance) / hoverHeight;
			Vector3 appliedHoverForce = Vector3.up * proportionalHeight * hoverForce;
			carRigidbody.AddForce (appliedHoverForce, ForceMode.Acceleration);
			print ("hit");
		}

		carRigidbody.AddRelativeForce (0F, 0F, powerInput * speed);
	}


	// Update is called once per frame
	void Update () {
		powerInput = Input.GetAxis ("Vertical");
		turnInput = Input.GetAxis ("Horizontal");

	}
}
