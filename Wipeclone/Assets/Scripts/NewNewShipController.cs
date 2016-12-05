﻿using UnityEngine;
using System.Collections;

public class NewNewShipController : MonoBehaviour {



	public float speed = 90F;
	public float turnSpeed = 5F;

	public float forwardRotationRegen = 2F;

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

		transform.Rotate (Vector3.up, turnInput * turnSpeed * Time.deltaTime);
		print (transform.rotation.x);
		float xRotation = transform.rotation.x;
		if (xRotation > 0) {
			transform.Rotate (Vector3.forward,  forwardRotationRegen * Time.deltaTime);
		} else if (xRotation < 0) {
			transform.Rotate (Vector3.forward, -forwardRotationRegen * Time.deltaTime);
		}
		transform.Rotate (Vector3.forward, -turnInput * forwardRotationRegen * Time.deltaTime);

	}


	// Update is called once per frame
	void Update () {
		powerInput = Input.GetAxis ("Vertical");
		turnInput = Input.GetAxis ("Horizontal");

	}


	void OnTriggerEnter(Collider collider){	
		
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
