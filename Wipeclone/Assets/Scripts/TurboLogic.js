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
private var elapsedTime: int = 0;

function Start () {

}

function Update () {
	elapsedTime++;
	if(elapsedTime == 6) elapsedTime = 0;
	if (elapsedTime < 1){
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
	else if (elapsedTime < 2){
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
	else if (elapsedTime < 3){
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
	else if (elapsedTime < 4){
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
	else if(elapsedTime < 5){
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
	else if(elapsedTime < 6){
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