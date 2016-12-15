#pragma strict
import UnityEngine.SceneManagement;

public var playButton: UI.Button;

function Start() {
	playButton.onClick.AddListener(playClick);
	PlayerPrefs.SetInt ("scene", 1);
}

function Update () {

}

function playClick() {
	PlayerPrefs.SetInt ("scene", 2);
	SceneManager.LoadScene("ShipSelect", LoadSceneMode.Single);
}