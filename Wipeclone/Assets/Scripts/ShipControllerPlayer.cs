using UnityEngine;
using System.Collections;

public class ShipControllerPlayer : MonoBehaviour {

	public static bool playing = false;
	private float powerInput;
	private float turnInput;
	private ShipController controller;

	// Use this for initialization
	void Awake () {
		controller = GetComponent<ShipController> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (playing) {
			controller.powerInput = Input.GetAxis ("Vertical");
			controller.turnInput = Input.GetAxis ("Horizontal");
		} else {
			controller.powerInput = 0;
			controller.turnInput = 0;
		}
	}

	void OnTriggerEnter(Collider other){
		if (other.tag == "turbo") {
			MenuMusic.playTurboFunction ();
		} else {
			GUIManager.colisionShip (other);
		}
	}

}
