#pragma strict


public var speed : float = 5;
public var torque: float = 5;
public var maxVel: int = 10;
public var rotationPoint: Transform;
public var maxAngularVelocity: float;
function Start () {


}

function FixedUpdate() {
	var rb = GetComponent.<Rigidbody>();
	var turn = Input.GetAxis("Horizontal");

	rb.AddTorque(rotationPoint.up * torque * turn);
	//rb.AddTorque(transform.up * torque/10 * turn);
	rb.maxAngularVelocity = maxAngularVelocity;
	var accel = Input.GetAxis("Vertical");
	if(rb.velocity.magnitude < maxVel)
		rb.AddRelativeForce(0,accel*speed,0);
}
