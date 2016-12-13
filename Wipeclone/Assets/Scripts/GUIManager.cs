using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GUIManager : MonoBehaviour {
	public int vel = 0;
	public GameObject agent;
	public Text velocityText;
	public Text lapText;
	public Text timeLap_1;
	public Text timeLap_2;
	public Text timeLap_3;
	public Text pause;
	public static bool lapChange = false;
	public Text pressEnter;
	public static bool playing = false;
	public GameObject ship;
	public bool raceFinish = false;
	public Camera cam1;
	public Camera cam2;
	public Texture2D textureBlue;
	public Texture2D textureRed;
	public Texture2D textureGreen;
	public static int lap = 0;
	private float timer = 0;
	private float greenComponent = 255;
	public static bool firstTimeRender = true;
	private int count = 0;
	public GameObject ship1;
	public GameObject ship2;
	public GameObject ship3;
	public GameObject ship4;

	public GameObject enemy1ship1;
	public GameObject enemy1ship2;
	public GameObject enemy1ship3;
	public GameObject enemy1ship4;

	public GameObject enemy2ship1;
	public GameObject enemy2ship2;
	public GameObject enemy2ship3;
	public GameObject enemy2ship4;

	public static int isCorrect = 0;
	private bool paused = false;

	void Start () {
		pause.enabled = false;
		raceFinish = false;
		firstTimeRender = true;
		playing = false;
		lap = 1;
		timer = 0;
		isCorrect = 0;
		velocityText.enabled = false;
		lapText.enabled = false;
		timeLap_1.enabled = false;
		timeLap_2.enabled = false;
		timeLap_3.enabled = false;
		cam1.enabled = true;
		cam2.enabled = false;
		GameObject ship = ship1;
		GameObject enemy1ship = ship1;
		GameObject enemy2ship = ship1;
		int numShip = PlayerPrefs.GetInt ("numShip");
		int color = PlayerPrefs.GetInt ("shipColor");
		Debug.Log (numShip);
		switch (numShip) {
		case 1:
			Destroy (ship2);
			Destroy (ship3);
			Destroy (ship4);
			ship = ship1;

			Destroy (enemy1ship1);
			Destroy (enemy1ship3);
			Destroy (enemy1ship4);
			enemy1ship = enemy1ship2;

			Destroy (enemy2ship1);
			Destroy (enemy2ship2);
			Destroy (enemy2ship4);
			enemy2ship = enemy2ship3;

			break;
		case 2:
			Destroy (ship1);
			Destroy (ship3);
			Destroy (ship4);
			ship = ship2;

			Destroy (enemy1ship1);
			Destroy (enemy1ship2);
			Destroy (enemy1ship4);
			enemy1ship = enemy1ship3;

			Destroy (enemy2ship1);
			Destroy (enemy2ship2);
			Destroy (enemy2ship3);
			enemy2ship = enemy2ship4;
			break;
		case 3:
			Destroy (ship1);
			Destroy (ship2);
			Destroy (ship4);
			ship = ship3;

			Destroy (enemy1ship1);
			Destroy (enemy1ship2);
			Destroy (enemy1ship3);
			enemy1ship = enemy1ship4;

			Destroy (enemy2ship4);
			Destroy (enemy2ship2);
			Destroy (enemy2ship3);
			enemy2ship = enemy2ship1;
			break;
		case 4:
			Destroy (ship1);
			Destroy (ship2);
			Destroy (ship3);
			ship = ship4;

			Destroy (enemy1ship4);
			Destroy (enemy1ship2);
			Destroy (enemy1ship3);
			enemy1ship = enemy1ship1;

			Destroy (enemy2ship4);
			Destroy (enemy2ship1);
			Destroy (enemy2ship3);
			enemy2ship = enemy2ship2;
			break;
		default:
			break;
		}

		Renderer render = ship.GetComponent<Renderer>();
		Renderer render1 = enemy1ship.GetComponent<Renderer>();
		Renderer render2 = enemy2ship.GetComponent<Renderer>();

		int rand = Random.Range(1, 2);
		switch (color) {
		case 1:
			render.material.SetTexture ("_MainTex", textureRed);
			switch(rand){
				case 1:
					render1.material.SetTexture ("_MainTex", textureGreen);
					render2.material.SetTexture ("_MainTex", textureBlue);
					break;
				case 2:
					render2.material.SetTexture ("_MainTex", textureGreen);
					render1.material.SetTexture ("_MainTex", textureBlue);
					break;
				default:
					render1.material.SetTexture ("_MainTex", textureGreen);
					render2.material.SetTexture ("_MainTex", textureBlue);
					break;
			}
			break;
		case 2:
			render.material.SetTexture("_MainTex",textureGreen);
			switch(rand){
			case 1:
				render1.material.SetTexture ("_MainTex", textureRed);
				render2.material.SetTexture ("_MainTex", textureBlue);
				break;
			case 2:
				render2.material.SetTexture ("_MainTex", textureRed);
				render1.material.SetTexture ("_MainTex", textureBlue);
				break;
			default:
				render1.material.SetTexture ("_MainTex", textureRed);
				render2.material.SetTexture ("_MainTex", textureBlue);
				break;
			}
			break;
		case 3:
			render.material.SetTexture("_MainTex",textureBlue);
			switch(rand){
			case 1:
				render1.material.SetTexture ("_MainTex", textureGreen);
				render2.material.SetTexture ("_MainTex", textureRed);
				break;
			case 2:
				render2.material.SetTexture ("_MainTex", textureGreen);
				render1.material.SetTexture ("_MainTex", textureRed);
				break;
			default:
				render1.material.SetTexture ("_MainTex", textureGreen);
				render2.material.SetTexture ("_MainTex", textureRed);
				break;
			}
			break;
		default:
			break;
		}
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown(KeyCode.P) && !firstTimeRender){
			if (!paused) {
				pause.enabled = true;
				paused = true;
				NewNewShipController.pause(true);
			} else {
				pause.enabled = false;
				paused = false;
				NewNewShipController.pause(false);
			}
		}
		if (firstTimeRender) {
			if (count % 10 == 0) {
				if (pressEnter.enabled)
					pressEnter.enabled = false;
				else
					pressEnter.enabled = true;
			}
			count++;
		}
		if (!paused) {
			if (Input.GetKeyDown (KeyCode.Return) && firstTimeRender) {
				cam1.enabled = false;
				cam2.enabled = true;
				velocityText.enabled = true;
				lapText.enabled = true;
				timeLap_1.enabled = true;
				timeLap_2.enabled = true;
				timeLap_3.enabled = true;
				Renderer aux = agent.GetComponent<Renderer> ();
				aux.enabled = false;
				firstTimeRender = false;
				pressEnter.enabled = false;
			}
			if (playing) {
				Rigidbody rb = ship.GetComponent<Rigidbody> ();
				vel = (int)rb.velocity.magnitude;
				greenComponent = (float)((255.0f - vel) / 255.0f);
				velocityText.color = new Color (180.0f, greenComponent, 0.0f);
				velocityText.text = "" + (int)(vel*2.5f);

				lapText.text = "Lap " + lap + "/3";
				timeLap_1.text = msToTime ();
				if (lapChange) {
					timer = 0;
					if (lap == 2) {
						timeLap_2.text = timeLap_1.text;
						timeLap_1.text = "00:00:00";
					} else if (lap == 3) {	
						timeLap_3.text = timeLap_2.text;
						timeLap_2.text = timeLap_1.text;
						timeLap_1.text = "00:00:00";
					}
					lapChange = false;
				}
			}
		}
		if (raceFinish) {
			velocityText.enabled = false;
			cam1.enabled = true;
			cam2.enabled = false;
			Renderer aux = agent.GetComponent<Renderer> ();
			aux.enabled = true;
			if (count % 3 == 0) {
				if (pressEnter.enabled)
					pressEnter.enabled = false;
				else
					pressEnter.enabled = true;
			}
			count++;
			if (Input.GetKeyDown (KeyCode.Return)) {
				SceneManager.LoadScene("Map2", LoadSceneMode.Single);
			}
		}

		//When you have finished 3 lap
		if (lap > 3 || Input.GetKeyDown (KeyCode.Space)) {
			raceFinish = true;
			playing = false;
		}
	}


	public static void colisionShip(Collider collider){
		if(collider.gameObject.tag == "sortida"){
			if(isCorrect == 1){
				lap++;
				lapChange = true;
			}
			isCorrect = 0;
		}
		if(collider.gameObject.tag == "control"){
			if(isCorrect == 0)
				isCorrect = -1;
		}
		if(collider.gameObject.tag == "arrivada"){
			if(isCorrect == 0)
				isCorrect = 1;
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