#pragma strict

public var row1A: GameObject;
public var row1B: GameObject;
public var row2A: GameObject;
public var row2B: GameObject;
public var row3A: GameObject;
public var row3B: GameObject;
public var row4A: GameObject;
public var row4B: GameObject;
public var row5A: GameObject;
public var row5B: GameObject;
public var row6A: GameObject;
public var row6B: GameObject;
private var elapsedTime: float = 0;

function Start () {

}

function Update () {
	elapsedTime = elapsedTime + Time.deltaTime;
	Debug.Log(elapsedTime);
	if(elapsedTime > 1.5) elapsedTime = 0;
	if (elapsedTime < 0.25){
		row1A.GetComponent.<Renderer>().enabled = true;
		row1B.GetComponent.<Renderer>().enabled = true;
		row2A.GetComponent.<Renderer>().enabled = true;
		row2B.GetComponent.<Renderer>().enabled = true;
		row3A.GetComponent.<Renderer>().enabled = true;
		row3B.GetComponent.<Renderer>().enabled = true;
		row4A.GetComponent.<Renderer>().enabled = false;
		row4B.GetComponent.<Renderer>().enabled = false;
		row5A.GetComponent.<Renderer>().enabled = false;
		row5B.GetComponent.<Renderer>().enabled = false;
		row6A.GetComponent.<Renderer>().enabled = true;
		row6B.GetComponent.<Renderer>().enabled = true;
	}
	else if (elapsedTime < 0.5){
		row1A.GetComponent.<Renderer>().enabled = true;
		row1B.GetComponent.<Renderer>().enabled = true;
		row2A.GetComponent.<Renderer>().enabled = true;
		row2B.GetComponent.<Renderer>().enabled = true;
		row3A.GetComponent.<Renderer>().enabled = true;
		row3B.GetComponent.<Renderer>().enabled = true;
		row4A.GetComponent.<Renderer>().enabled = true;
		row4B.GetComponent.<Renderer>().enabled = true;
		row5A.GetComponent.<Renderer>().enabled = false;
		row5B.GetComponent.<Renderer>().enabled = false;
		row6A.GetComponent.<Renderer>().enabled = false;
		row6B.GetComponent.<Renderer>().enabled = false;
	}
	else if (elapsedTime < 0.75){
		row1A.GetComponent.<Renderer>().enabled = false;
		row1B.GetComponent.<Renderer>().enabled = false;
		row2A.GetComponent.<Renderer>().enabled = true;
		row2B.GetComponent.<Renderer>().enabled = true;
		row3A.GetComponent.<Renderer>().enabled = true;
		row3B.GetComponent.<Renderer>().enabled = true;
		row4A.GetComponent.<Renderer>().enabled = true;
		row4B.GetComponent.<Renderer>().enabled = true;
		row5A.GetComponent.<Renderer>().enabled = true;
		row5B.GetComponent.<Renderer>().enabled = true;
		row6A.GetComponent.<Renderer>().enabled = false;
		row6B.GetComponent.<Renderer>().enabled = false;
	}
	else if (elapsedTime < 1){
		row1A.GetComponent.<Renderer>().enabled = false;
		row1B.GetComponent.<Renderer>().enabled = false;
		row2A.GetComponent.<Renderer>().enabled = false;
		row2B.GetComponent.<Renderer>().enabled = false;
		row3A.GetComponent.<Renderer>().enabled = true;
		row3B.GetComponent.<Renderer>().enabled = true;
		row4A.GetComponent.<Renderer>().enabled = true;
		row4B.GetComponent.<Renderer>().enabled = true;
		row5A.GetComponent.<Renderer>().enabled = true;
		row5B.GetComponent.<Renderer>().enabled = true;
		row6A.GetComponent.<Renderer>().enabled = true;
		row6B.GetComponent.<Renderer>().enabled = true;
	}
	else if(elapsedTime < 1.25){
		row1A.GetComponent.<Renderer>().enabled = true;
		row1B.GetComponent.<Renderer>().enabled = true;
		row2A.GetComponent.<Renderer>().enabled = false;
		row2B.GetComponent.<Renderer>().enabled = false;
		row3A.GetComponent.<Renderer>().enabled = false;
		row3B.GetComponent.<Renderer>().enabled = false;
		row4A.GetComponent.<Renderer>().enabled = true;
		row4B.GetComponent.<Renderer>().enabled = true;
		row5A.GetComponent.<Renderer>().enabled = true;
		row5B.GetComponent.<Renderer>().enabled = true;
		row6A.GetComponent.<Renderer>().enabled = true;
		row6B.GetComponent.<Renderer>().enabled = true;
	}
	else if(elapsedTime < 1.5){
		row1A.GetComponent.<Renderer>().enabled = true;
		row1B.GetComponent.<Renderer>().enabled = true;
		row2A.GetComponent.<Renderer>().enabled = true;
		row2B.GetComponent.<Renderer>().enabled = true;
		row3A.GetComponent.<Renderer>().enabled = false;
		row3B.GetComponent.<Renderer>().enabled = false;
		row4A.GetComponent.<Renderer>().enabled = false;
		row4B.GetComponent.<Renderer>().enabled = false;
		row5A.GetComponent.<Renderer>().enabled = true;
		row5B.GetComponent.<Renderer>().enabled = true;
		row6A.GetComponent.<Renderer>().enabled = true;
		row6B.GetComponent.<Renderer>().enabled = true;
	}
}