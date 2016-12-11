#pragma strict

var car : Transform;
var distance : float = 1;
var height : float = 1.4;

var rotationDamping : float = 3.0;
var heightDamping : float = 2.0;

var zoomRatio : float = 0.5;
var defaultFOV : float = 6;
private var rotationVector : Vector3;

function Start () {

}

function Update () {
	var wantedAngel = car.eulerAngles.y;
	var wantedHeight = car.position.y + height;
	var myAngel = transform.eulerAngles.y;
	var myHeight = transform.position.y;

	myAngel = Mathf.LerpAngle(myAngel, wantedAngel, rotationDamping * Time.deltaTime);
	myHeight = Mathf.Lerp(myHeight, wantedHeight, heightDamping * Time.deltaTime);

	var currentRotation = Quaternion.Euler(0,myAngel, 0);

	transform.position = car.position;
	transform.position.y = myHeight;
	transform.position -= currentRotation * Vector3.forward * distance;

	transform.LookAt(car);

}

function FixedUpdate () {
	var carRigidBody = car.GetComponent(Rigidbody);
	var camera = GetComponent(Camera);
	var acc = carRigidBody.velocity.magnitude;
	camera.fieldOfView = defaultFOV + acc* zoomRatio * Time.deltaTime;

 } 