using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ShipSelect : MonoBehaviour {

	public GameObject ship1;
	public GameObject ship2;
	public GameObject ship3;
	public GameObject ship4;
	public Slider velocity;
	public Slider acceleration;
	public Slider torque;
	public Button blue;
	public Button red;
	public Button green;
	public Button start;
	public Button yellow;
	public Texture2D textureBlue;
	public Texture2D textureGreen;
	public Texture2D textureRed;
	public Texture2D textureYellow;

	public int pointerShip = 1;
	private int movment = 0;
	private bool finishIn = true;
	private bool finishOut = true;

	private float velocityShip1 = 0.8f;
	private float accelerationShip1 = 0.7f;
	private float torqueShip1 = 0.7f;

	private float velocityShip2 = 0.7f;
	private float accelerationShip2 = 1f;
	private float torqueShip2 = 0.5f;

	private float velocityShip3 = 0.7f;
	private float accelerationShip3 = 0.5f;
	private float torqueShip3 = 1f;

	private float velocityShip4 = 1f;
	private float accelerationShip4 = 0.7f;
	private float torqueShip4 = 0.5f;

	private float incrementSlider = 0.05f;

	void Start () {
		blue.onClick.AddListener(SetTextureBlue);
		red.onClick.AddListener(SetTextureRed);
		green.onClick.AddListener(SetTextureGreen);
		yellow.onClick.AddListener(SetTextureYellow);
		start.onClick.AddListener(StartGame);
	}

	void Update () {
		Rigidbody shipIn = null;
		Rigidbody shipOut = null;
		switch(pointerShip){
		case 1:
			shipIn = ship2.GetComponent<Rigidbody>();
			shipOut = ship1.GetComponent<Rigidbody>();
			break;
		case 2:
			shipIn = ship3.GetComponent<Rigidbody>();
			shipOut = ship2.GetComponent<Rigidbody>();
			break;
		case 3:
			shipIn = ship4.GetComponent<Rigidbody>();
			shipOut = ship3.GetComponent<Rigidbody>();
			break;
		case 4:
			shipIn = ship1.GetComponent<Rigidbody>();
			shipOut = ship4.GetComponent<Rigidbody>();
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
				shipIn.velocity = new Vector3(20,0,0);
				shipOut.velocity = new Vector3(20,0,0);
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
		if(shipIn.position.x > -6f && shipIn.position.x < -0.5f){
			shipIn.position = new Vector3(-3.46f, shipIn.position.y, shipIn.position.z);

			shipIn.velocity = new Vector3(0,0,0);
			finishIn = true;
			if(finishOut){
				if(movment == 1)
					pointerShip++;
				else
					pointerShip--;
			}
		}
		if(shipOut.position.x > 8.0f || shipOut.position.x < -15.0f){
			shipOut.velocity = new Vector3(0,0,0);
			finishOut = true;
			//shipOut.position.x = -15;
			shipOut.position = new Vector3(-15f, shipOut.position.y, shipOut.position.z);
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

	void SetTextureBlue(){
		Renderer render = ship1.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureBlue);
		render = ship2.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureBlue);
		render = ship3.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureBlue);
		render = ship4.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureBlue);
		PlayerPrefs.SetInt("shipColor", 3);
	}

	void SetTextureGreen(){
		Renderer render = ship1.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureGreen);
		render = ship2.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureGreen);
		render = ship3.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureGreen);
		render = ship4.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureGreen);
		PlayerPrefs.SetInt("shipColor", 2);
	}

	void SetTextureRed(){
		Renderer render = ship1.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureRed);
		render = ship2.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureRed);
		render = ship3.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureRed);
		render = ship4.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureRed);
		PlayerPrefs.SetInt("shipColor", 1);
	}

	void SetTextureYellow(){
		Renderer render = ship1.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureYellow);
		render = ship2.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureYellow);
		render = ship3.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureYellow);
		render = ship4.GetComponent<Renderer>();
		render.material.SetTexture("_MainTex",textureYellow);
		PlayerPrefs.SetInt("shipColor", 4);
	}

	void StartGame(){
		PlayerPrefs.SetInt ("numShip", pointerShip);
		PlayerPrefs.SetInt ("scene", 3);
		SceneManager.LoadScene("Map1", LoadSceneMode.Single);
	}
}









