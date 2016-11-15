#pragma strict

public var vel: int = 0;
public var velocityText: UI.Text;
public var lapText: UI.Text;
public var timeLap_1: UI.Text;
public var timeLap_2: UI.Text;
public var timeLap_3: UI.Text;
public var ship: GameObject;
public var screen: Screen;
private var uiMargin: int = 30;
private var separation: int = 20;

var greenComponent: float = 255;



function Start () {

}

function Update () {

	//Velocity text
	var rb = ship.GetComponent.<Rigidbody>();
	vel = rb.velocity.magnitude;
	greenComponent = (255.0 - vel)/255.0;
	velocityText.color = Color(180,greenComponent,0);
	velocityText.fontSize = screen.height * 0.2;
	velocityText.text = ""+vel;

	//Lap text
	lapText.fontSize = screen.height * 0.05;
	lapText.transform.position = Vector3 ( uiMargin, screen.height - uiMargin, 0);
	lapText.text = "Lap 1/3";
	//lapText.text = ""+Time.time;

	//Time per lap
	timeLap_1.fontSize = screen.height * 0.075;
	timeLap_1.transform.position = Vector3 ( uiMargin,  screen.height - uiMargin - screen.height * 0.05 - separation, 0);
	timeLap_1.text = msToTime();

	timeLap_2.fontSize = screen.height * 0.05;
	timeLap_2.transform.position = Vector3 ( uiMargin,  screen.height - uiMargin - screen.height * 0.05 
														- screen.height * 0.075, 0);

	timeLap_3.fontSize = screen.height * 0.05;
	timeLap_3.transform.position = Vector3 ( uiMargin,  screen.height - uiMargin - (screen.height * 0.05 * 2) 
														- screen.height * 0.075, 0);

}

function msToTime() {
	var timer = Time.time;
	var milliseconds = Mathf.Round((timer*1000)%100);
	var seconds = parseInt(timer%60);
	var minutes = parseInt(timer/60);
	var res = "";

	if(minutes < 10) res = "0" + minutes + ":";
	else res = minutes + ":";

	if(seconds < 10) res += "0" + seconds + ":";
	else res += seconds + ":";

	if(milliseconds < 10) res += "0" + milliseconds;
	else res += milliseconds;

    return res;
}