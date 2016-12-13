using UnityEngine;
using System.Collections;

public class NewNewShipController : MonoBehaviour {



	public float speed = 90F;
	public float turnSpeed = 5F;

	public float forwardRotationRegen = 2F;
	public static bool paused = false;
	public float hoverForce = 65F;
	public float hoverHeight = 3.5F;

	public static Vector3 velKeeper;
	private float powerInput;
	private float turnInput;
	private static Rigidbody carRigidbody;
	public static bool playing = false;
	public static int lap = 1;


	void Awake () {
	
		carRigidbody = GetComponent<Rigidbody> ();
	}

	void FixedUpdate(){
		playing = true;
		if (!paused) {
			if (playing) {
				Ray ray = new Ray (transform.position, -transform.up);
				RaycastHit hit;

				Debug.DrawLine (transform.position, transform.position - (transform.up * hoverHeight), Color.cyan);

				if (Physics.Raycast (ray, out hit, hoverHeight)) {
					float proportionalHeight = (hoverHeight - hit.distance) / hoverHeight;
					Vector3 appliedHoverForce = Vector3.up * proportionalHeight * hoverForce;
					carRigidbody.AddForce (appliedHoverForce, ForceMode.Acceleration);
					print ("hit");
				}

				carRigidbody.AddRelativeForce (0F, 0F, powerInput * speed);

				transform.Rotate (Vector3.up, turnInput * turnSpeed * Time.deltaTime);
				print (transform.rotation.x);
				float xRotation = transform.rotation.x;
				if (xRotation > 0) {
					transform.Rotate (Vector3.forward, forwardRotationRegen * Time.deltaTime);
				} else if (xRotation < 0) {
					transform.Rotate (Vector3.forward, -forwardRotationRegen * Time.deltaTime);
				}
				//transform.Rotate (Vector3.forward, -turnInput * forwardRotationRegen * Time.deltaTime);
				carRigidbody.AddTorque (Vector3.up * turnInput * turnSpeed);
			}
		}
	}


	// Update is called once per frame
	void Update () {
		powerInput = Input.GetAxis ("Vertical");
		turnInput = Input.GetAxis ("Horizontal");

	}


	void OnTriggerEnter(Collider collider){	
		
	}

	public static void pause(bool pause){
		paused = pause;
		if (pause) {
			velKeeper = carRigidbody.velocity;
			carRigidbody.velocity = new Vector3(0f,0f,0f);
		} else {
			carRigidbody.velocity = velKeeper;
		}
	}
	/*
	void OnTriggerEnter(Collider collider){	
		if(collider.gameObject.tag == "sortida"){
			if(is_correct == 1){
				lap++;
			}
			is_correct = 0;
		}
		if(collider.gameObject.tag == "control"){
			if(is_correct == 0)
				is_correct = -1;
		}
		if(collider.gameObject.tag == "arrivada"){
			if(is_correct == 0)
				is_correct = 1;
		}
		if(collider.gameObject.tag == "turbo"){
			var rb = GetComponent<Rigidbody>();
			rb.AddRelativeForce(0,turboSpeed,0);
		}

	}
	*/
}
