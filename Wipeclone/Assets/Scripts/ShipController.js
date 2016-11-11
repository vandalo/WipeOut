#pragma strict


public var speed : int = 5;
public var torque: int = 5;
function Start () {


}

function FixedUpdate() {
	var rb = GetComponent.<Rigidbody>();
	var turn = Input.GetAxis("Horizontal");

	rb.AddTorque(transform.forward * torque * turn);
	rb.AddTorque(transform.up * torque/10 * turn);


//	var up = transform.up + Vector3(turn, turn, 0);

//	rb.MoveRotation(Quaternion.LookRotation(transform.forward, up) );

	var accel = Input.GetAxis("Vertical");
	rb.AddRelativeForce(0,accel*speed,0);
}
