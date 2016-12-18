#pragma strict

public var row1A: GameObject;
public var row1B: GameObject;
public var row2A: GameObject;
public var row2B: GameObject;
public var row3A: GameObject;
public var row3B: GameObject;
private var elapsedTime: float = 0;

function Start () {

}

function Update () {
	elapsedTime += Time.deltaTime;
	if(elapsedTime > 3) elapsedTime = 0;
	if (elapsedTime < 1){
		row1A.GetComponent.<Renderer>().enabled = true;
		row1B.GetComponent.<Renderer>().enabled = true;
		row2A.GetComponent.<Renderer>().enabled = false;
		row2B.GetComponent.<Renderer>().enabled = false;
		row3A.GetComponent.<Renderer>().enabled = false;
		row3B.GetComponent.<Renderer>().enabled = false;

	}
	else if (elapsedTime < 2){
		row1A.GetComponent.<Renderer>().enabled = false;
		row1B.GetComponent.<Renderer>().enabled = false;
		row2A.GetComponent.<Renderer>().enabled = true;
		row2B.GetComponent.<Renderer>().enabled = true;
		row3A.GetComponent.<Renderer>().enabled = false;
		row3B.GetComponent.<Renderer>().enabled = false;
	}
	else if (elapsedTime < 3){
		row1A.GetComponent.<Renderer>().enabled = false;
		row1B.GetComponent.<Renderer>().enabled = false;
		row2A.GetComponent.<Renderer>().enabled = false;
		row2B.GetComponent.<Renderer>().enabled = false;
		row3A.GetComponent.<Renderer>().enabled = true;
		row3B.GetComponent.<Renderer>().enabled = true;
	}

}