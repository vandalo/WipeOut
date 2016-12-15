#pragma strict

var car : Transform;
var zoomRatio : float = 0.5;
var defaultFOV : float = 6;

private var carRigidBody : Rigidbody;
private var thisCamera : Camera;

function Awake () {
	carRigidBody = car.GetComponent(Rigidbody);
	thisCamera = GetComponent(Camera);
}


function FixedUpdate () {
	var acc = carRigidBody.velocity.magnitude;
	thisCamera.fieldOfView = Mathf.Lerp(defaultFOV, defaultFOV + acc* zoomRatio , Time.deltaTime);

 } 