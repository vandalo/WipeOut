using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {


	public GameObject ship;
	public float velocityOffset;
	public float interpolation;

	private Vector3 offset;
	private Quaternion rotation;
	private Rigidbody shipRigidBody;

	void Awake (){
		offset = transform.position - ship.transform.position;
		rotation = transform.rotation;
		shipRigidBody = ship.GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
		

		Vector3 desiredPosition = offset + ship.transform.position ;
		transform.position = Vector3.Lerp (transform.position, desiredPosition, interpolation);
	}
}
