using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShipControllerAI : MonoBehaviour {

	public Transform pathTransform;
	public int startingIndex = 0;
	public string waypointTag = "waypoint";
	public static bool playing = false;

	private ShipController shipController;
	private List<Vector3> path;
	public int pathIndex;
	private float slowDown = 1f;
	private GameObject debugSphere;
	// Use this for initialization
	void Awake () {
		shipController = GetComponent<ShipController> ();
		pathIndex = startingIndex;
		Transform[] pathChilds = pathTransform.GetComponentsInChildren<Transform> ();
		path = new List<Vector3> ();
		for (int i = 0; i < pathChilds.Length; i++) {
			if (pathChilds [i] != pathTransform.transform) {
				path.Add (pathChilds [i].position);
			}
		}
		//debugSphere = GameObject.CreatePrimitive (PrimitiveType.Sphere);
		//Destroy (debugSphere.GetComponent<SphereCollider> ());
		//debugSphere.transform.localScale = Vector3.one * 10;
	}
	
	// Update is called once per frame
	void Update () {
		if (!playing)
			return;
		Vector3 directionToWaypoint = transform.InverseTransformPoint(path[pathIndex]).normalized ;



		shipController.powerInput = 0.8f * slowDown;

		if ( directionToWaypoint.x > 0) {
			shipController.turnInput = 1;
		} else if (directionToWaypoint.x < 0) {
			shipController.turnInput = -1;
		}

		//debugSphere.transform.position = path[pathIndex];

		Debug.DrawLine (transform.position, transform.position + directionToWaypoint * 10);
	}

	void OnTriggerEnter(Collider other){
		if (other.tag == waypointTag) {
			pathIndex++;
			print ("We are in a waypoint, index:" + pathIndex);
		} else if (other.tag == "slow") {
			slowDown = 0.4f;
		} else if (other.tag == "low_bound") {
			transform.position = path [pathIndex];
			pathIndex++;
		}
		if (pathIndex == path.Count) {
			pathIndex = 0;
		}
	}

	void OnTriggerExit(Collider other){
		if (other.tag == waypointTag) {
			slowDown = 1f;
		}
	}
}
