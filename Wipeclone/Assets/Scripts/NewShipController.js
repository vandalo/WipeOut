#pragma strict


public var speed : float = 5;
public var torque: float = 5;

public var hoverForce : float = 1;
public var hoverHeight : float = 3.5;


var powerInput : float = 0;
var turnInput : float = 0;
var shipRigidBody: Rigidbody;

public var maxVel: int = 255;
public var rotationPoint: Transform;
public var maxAngularVelocity: float;
public var fire: ParticleSystem;
var projectile : Transform;
var bulletSpeed : float = 20;

function Awake () {
	shipRigidBody = GetComponent.<Rigidbody>();


}

function FixedUpdate() {

	if(Physics.Raycast(transform.position, -transform.up, hoverHeight)){
		var proportionalHeight;
	}

	if( powerInput > 0) fire.Play();
	else fire.Stop();


}

 function Update () {

	powerInput = Input.GetAxis("Vertical");
	turnInput = Input.GetAxis("Horizontal");

     // Put this in your update function
     /*if (Input.GetButtonDown("Fire1")) {
 
     // Instantiate the projectile at the position and rotation of this transform
     var clone : Transform;
     clone = Instantiate(projectile, transform.position, transform.rotation);
 
     // Add force to the cloned object in the object's forward direction
     clone.rigidbody.AddForce(clone.transform.forward * shootForce);*/
     }
 