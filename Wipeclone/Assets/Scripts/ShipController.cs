using UnityEngine;
using System.Collections;

public class ShipController : MonoBehaviour
{



	public float speed = 100F;
	public float turnSpeed = 3F;
	public float forwardRotationRegen = 2F;
	public float hoverForce = 65F;
	public float hoverHeight = 1F;
	public float groundedHeight = 6F;
	public float rotationInterpolation = 4f;
	public float powerInput;
	public float turnInput;

	private Rigidbody carRigidbody;
	private float turboInput = 0f;

	void Awake ()
	{
	
		carRigidbody = GetComponent<Rigidbody> ();
	}

	void FixedUpdate ()
	{
		if (powerInput > 0)
			MenuMusic.playAudioAcceleration ();

		Ray ray = new Ray (transform.position, -transform.up);
		RaycastHit hit;

		Debug.DrawLine (transform.position, transform.position - (transform.up * groundedHeight), Color.red);
		Debug.DrawLine (transform.position, transform.position - (transform.up * hoverHeight), Color.cyan);


		if (Physics.Raycast (ray, out hit, hoverHeight)) {
			float proportionalHeight = (hoverHeight - hit.distance) / hoverHeight;
			Vector3 appliedHoverForce = Vector3.up * proportionalHeight * hoverForce;
			carRigidbody.AddForce (appliedHoverForce, ForceMode.Acceleration);
		} 
		if (Physics.Raycast (ray, out hit, groundedHeight)) {
			carRigidbody.AddRelativeForce (0F, 0F, powerInput * speed + turboInput * speed);
			Quaternion wantedRotation = Quaternion.FromToRotation(transform.up, hit.normal) * transform.rotation;
			Quaternion actualRotation = transform.rotation;
			transform.rotation = Quaternion.Lerp (actualRotation, wantedRotation, Time.deltaTime * rotationInterpolation);
		}

		//carRigidbody.AddRelativeForce (0F, 0F, turboInput * speed);

		//transform.Rotate (Vector3.up, turnInput * turnSpeed * Time.deltaTime);

		float xRotation = transform.rotation.x;
		if (xRotation > 0) {
			transform.Rotate (transform.forward, forwardRotationRegen * Time.deltaTime);
		} else if (xRotation < 0) {
			transform.Rotate (transform.forward, -forwardRotationRegen * Time.deltaTime);
		}
		carRigidbody.AddTorque (transform.up * turnInput * turnSpeed, ForceMode.Acceleration);
		//transform.Rotate (Vector3.forward, -turnInput * forwardRotationRegen * Time.deltaTime);
		
	}


	void OnTriggerEnter(Collider other){
		if (other.tag == "turbo") {
			turboInput = 1.5f;
			print ("TURBO ON!");
		} 
	}

	void OnTriggerExit(Collider other){
		if (other.tag == "turbo") {
			turboInput = 0f;
			print ("TURBO OFF!");
		}
	}
}
