using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GUIManager : MonoBehaviour {
	public int vel = 0;
	public GameObject agent;
	public Text velocityText;
	public Text lapText;
	public Text timeLap_1;
	public Text timeLap_2;
	public Text timeLap_3;
	public Text pressEnter;
	public static bool playing = false;
	public GameObject ship;
	public Camera cam1;
	public Camera cam2;
	private float timer = 0;
	private float greenComponent = 255;
	public static bool firstTimeRender = true;
	private int count = 0;

	void Start () {
		velocityText.enabled = false;
		lapText.enabled = false;
		timeLap_1.enabled = false;
		timeLap_2.enabled = false;
		timeLap_3.enabled = false;
		cam1.enabled = true;
		cam2.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (firstTimeRender) {
			if (count % 3 == 0) {
				if (pressEnter.enabled)
					pressEnter.enabled = false;
				else
					pressEnter.enabled = true;
			}
			count++;
		}
		if (Input.GetKeyDown (KeyCode.Return) && firstTimeRender) {
			cam1.enabled = false;
			cam2.enabled = true;
			velocityText.enabled = true;
			lapText.enabled = true;
			timeLap_1.enabled = true;
			timeLap_2.enabled = true;
			timeLap_3.enabled = true;
			Destroy (agent);
			firstTimeRender = false;
			pressEnter.enabled = false;
		}
		if(playing){
			//Velocity text
			Rigidbody rb = ship.GetComponent<Rigidbody>();
			vel = (int)rb.velocity.magnitude;
			greenComponent = (float)((255.0f - vel)/255.0f);
			velocityText.color = new Color(180.0f,greenComponent,0.0f);
			velocityText.text = ""+vel;

			lapText.text = "Lap " + "1" + "/3";
			timeLap_1.text = msToTime();
		}
	}

	string msToTime() {
		timer += Time.deltaTime;
		float milliseconds = Mathf.Round((timer*1000)%100);
		float seconds = (int)(timer%60);
		float minutes = (int)(timer/60);
		string res = "";

		if(minutes < 10) res = "0" + minutes + ":";
		else res = minutes + ":";

		if(seconds < 10) res += "0" + seconds + ":";
		else res += seconds + ":";

		if(milliseconds < 10) res += "0" + milliseconds;
		else res += milliseconds;

		return res;
	}
}