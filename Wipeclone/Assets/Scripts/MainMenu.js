#pragma strict
import UnityEngine.SceneManagement;

public var playButton: UI.Button;

function Start() {
	playButton.onClick.AddListener(playClick);
}

function Update () {

}

function playClick() {
	SceneManager.LoadScene("ShipSelect", LoadSceneMode.Single);
}