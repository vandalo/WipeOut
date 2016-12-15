using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EndGameManager : MonoBehaviour {

	private float elapsedTime = 0;
	public Text pressEnter;
	public Text timeLap11;
	public Text timeLap12;
	public Text timeLap13;
	public Text timeLap21;
	public Text timeLap22;
	public Text timeLap23;

	// Use this for initialization
	void Start () {
		timeLap11.text = PlayerPrefs.GetString ("time11");
		timeLap12.text = PlayerPrefs.GetString ("time12");
		timeLap13.text = PlayerPrefs.GetString ("time13");

		timeLap21.text = PlayerPrefs.GetString ("time21");
		timeLap22.text = PlayerPrefs.GetString ("time22");
		timeLap23.text = PlayerPrefs.GetString ("time23");
	}
	
	// Update is called once per frame
	void Update () {
		elapsedTime += Time.deltaTime;
		if (elapsedTime > 0.5) {
			if (pressEnter.enabled)
				pressEnter.enabled = false;
			else
				pressEnter.enabled = true;
			elapsedTime = 0;
		}
		if (Input.GetKeyDown (KeyCode.Return)){
			PlayerPrefs.SetInt ("scene", 1);
			SceneManager.LoadScene ("MainMenu", LoadSceneMode.Single);
		}
	}

}
