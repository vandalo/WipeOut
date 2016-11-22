#pragma strict

public var ship1: GameObject;
public var ship2: GameObject;
public var ship3: GameObject;
public var ship4: GameObject;
public var velocity: UI.Slider;
public var acceleration: UI.Slider;
public var torque: UI.Slider;
public var pointerShip: int = 1;
private var movment: int = 0;
private var finishIn: boolean = true;
private var finishOut: boolean = true;

private var velocityShip1: float = 0.8;
private var accelerationShip1: float = 0.8;
private var torqueShip1: float = 0.8;

private var velocityShip2: float = 0.5;
private var accelerationShip2: float = 0.6;
private var torqueShip2: float = 0.8;

private var velocityShip3: float = 0.2;
private var accelerationShip3: float = 0.2;
private var torqueShip3: float = 0.2;

private var velocityShip4: float = 0.4;
private var accelerationShip4: float = 0.4;
private var torqueShip4: float = 0.4;

private var incrementSlider: float = 0.05;

function Start () {

}

function Update () {
	var shipIn: Rigidbody;
	var shipOut: Rigidbody;
	switch(pointerShip){
	case 1:
		shipIn = ship2.GetComponent.<Rigidbody>();
		shipOut = ship1.GetComponent.<Rigidbody>();
		break;
	case 2:
		shipIn = ship3.GetComponent.<Rigidbody>();
		shipOut = ship2.GetComponent.<Rigidbody>();
		break;
	case 3:
		shipIn = ship4.GetComponent.<Rigidbody>();
		shipOut = ship3.GetComponent.<Rigidbody>();
		break;
	case 4:
		shipIn = ship1.GetComponent.<Rigidbody>();
		shipOut = ship4.GetComponent.<Rigidbody>();
		break;
	default:
		break;
	}
	switch(pointerShip){
		case 1:
			if(velocity.value < velocityShip1-0.1)
				velocity.value += incrementSlider;
			else if(velocity.value > velocityShip1+0.1)
				velocity.value -= incrementSlider;
			if(acceleration.value < accelerationShip1-0.1)
				acceleration.value += incrementSlider;
			else if(acceleration.value > accelerationShip1+0.1)
				acceleration.value -= incrementSlider;
			if(torque.value < torqueShip1-0.1)
				torque.value += incrementSlider;
			else if(torque.value > torqueShip1+0.1)
				torque.value -= incrementSlider;
			break;
		case 2:
			if(velocity.value < velocityShip2-0.1)
				velocity.value += incrementSlider;
			else if(velocity.value > velocityShip2+0.1)
				velocity.value -= incrementSlider;
			if(acceleration.value < accelerationShip2-0.1)
				acceleration.value += incrementSlider;
			else if(acceleration.value > accelerationShip2+0.1)
				acceleration.value -= incrementSlider;
			if(torque.value < torqueShip2-0.1)
				torque.value += incrementSlider;
			else if(torque.value > torqueShip2+0.1)
				torque.value -= incrementSlider;
			break;
		case 3:
			if(velocity.value < velocityShip3-0.1)
				velocity.value += incrementSlider;
			else if(velocity.value > velocityShip3+0.1)
				velocity.value -= incrementSlider;
			if(acceleration.value < accelerationShip3-0.1)
				acceleration.value += incrementSlider;
			else if(acceleration.value > accelerationShip3+0.1)
				acceleration.value -= incrementSlider;
			if(torque.value < torqueShip3-0.1)
				torque.value += incrementSlider;
			else if(torque.value > torqueShip3+0.1)
				torque.value -= incrementSlider;
			break;
		case 4:
			if(velocity.value < velocityShip4-0.1)
				velocity.value += incrementSlider;
			else if(velocity.value > velocityShip4+0.1)
				velocity.value -= incrementSlider;
			if(acceleration.value < accelerationShip4-0.1)
				acceleration.value += incrementSlider;
			else if(acceleration.value > accelerationShip4+0.1)
				acceleration.value -= incrementSlider;
			if(torque.value < torqueShip4-0.1)
				torque.value += incrementSlider;
			else if(torque.value > torqueShip4+0.1)
				torque.value -= incrementSlider;
			break;
		default:
			break;
	}
	if(finishIn && finishOut){
		if (Input.GetKey ("right")){
			shipIn.velocity = Vector3(20,0,0);
			shipOut.velocity = Vector3(20,0,0);
			finishIn = false;
			finishOut = false;
			movment = 1;

		}
		/*if (Input.GetKey ("left")){
			shipIn.position.x = 7;
			shipIn.velocity = Vector3(-20,0,0);
			shipOut.velocity = Vector3(-20,0,0);
			finishIn = false;
			finishOut = false;
			movment = 0;
		}*/
	}
	if(shipIn.position.x > -6 && shipIn.position.x < -0.5){
		shipIn.position.x = -3.46;
		shipIn.velocity = Vector3(0,0,0);
		finishIn = true;
		if(finishOut){
			if(movment == 1)
				pointerShip++;
			else
				pointerShip--;
		}
	}
	if(shipOut.position.x > 8 || shipOut.position.x < -15){
		shipOut.velocity = Vector3(0,0,0);
		finishOut = true;
		shipOut.position.x = -15;
		if(finishIn){
			if(movment == 1)
				pointerShip++;
			else
				pointerShip--;
		}
	}
	if(pointerShip == 5)pointerShip = 1;
	else if(pointerShip == 0)pointerShip = 4;

}