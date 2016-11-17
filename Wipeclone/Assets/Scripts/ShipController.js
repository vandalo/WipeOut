#pragma strict


public var speed : float = 5;
public var torque: float = 5;
public var maxVel: int = 255;
public var rotationPoint: Transform;
public var maxAngularVelocity: float;
public var fire: ParticleSystem;
public static var lap: int = 1;
var projectile : Transform;
var bulletSpeed : float = 20;


//Lap controler parameters
private var is_correct: int = -1;

function Start () {


}

function FixedUpdate() {
	var rb = GetComponent.<Rigidbody>();
	var turn = Input.GetAxis("Horizontal");

	rb.AddTorque(rotationPoint.up * torque * turn);

	rb.maxAngularVelocity = maxAngularVelocity;
	var accel = Input.GetAxis("Vertical");

	if(Input.GetAxis("Vertical") > 0) fire.Play();
	else fire.Stop();

	if(rb.velocity.magnitude < maxVel)
		rb.AddRelativeForce(0,accel*speed,0);
}

 function Update () {
     // Put this in your update function
     /*if (Input.GetButtonDown("Fire1")) {
 
     // Instantiate the projectile at the position and rotation of this transform
     var clone : Transform;
     clone = Instantiate(projectile, transform.position, transform.rotation);
 
     // Add force to the cloned object in the object's forward direction
     clone.rigidbody.AddForce(clone.transform.forward * shootForce);*/
     }

function OnTriggerEnter( object : Collider){
	var rb = GetComponent.<Rigidbody>();
	if(object.gameObject.tag == "sortida"){
		if(is_correct == 1){
		  lap++;
		  is_correct = 0;
		}
		else if(is_correct == 0) is_correct = -1;
		else if(is_correct == -1)is_correct = 0;
	}
	if(object.gameObject.tag == "arrivada"){
		if(is_correct == 0)is_correct = 1;
	}
}