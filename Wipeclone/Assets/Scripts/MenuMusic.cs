using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class MenuMusic : MonoBehaviour {

	public AudioSource audioMenu;
	public AudioSource audioRace;
	public AudioSource audioSemaphor;
	public AudioSource audioAccelerationShip;
	public AudioSource audioTurbo;
	public AudioSource audioShoot;

	private static bool playSemaphor = false;
	private static bool playAcceleration = false;
	private static bool playTurbo = false;
	private static bool playShoot = false;
	void Start () 
	{	
		DontDestroyOnLoad (audioMenu);
		DontDestroyOnLoad (audioRace);
		DontDestroyOnLoad (audioSemaphor);
		DontDestroyOnLoad (audioAccelerationShip);
		DontDestroyOnLoad (audioTurbo);
		DontDestroyOnLoad (audioShoot);
		audioRace.Stop ();
		audioMenu.Stop ();
		audioSemaphor.Stop ();
		audioAccelerationShip.Stop ();
	}

	void Update() {
		//Cut song
		if(audioMenu.time > 180f) audioMenu.time = 6f;
		if(audioAccelerationShip.time > 22f) audioMenu.time = 1.8f;

		//Music
		int scene = PlayerPrefs.GetInt ("scene");
		switch(scene){
		case 1:
			if (!audioMenu.isPlaying) {
				audioMenu.timeSamples = 6;
				audioMenu.time = 6f;
				audioMenu.Play ();
			}
			audioRace.Stop ();
			break;
		case 2:
			if (!audioMenu.isPlaying) {
				audioMenu.timeSamples = 6;
				audioMenu.time = 6f;
				audioMenu.Play ();
			}
			audioRace.Stop ();
			break;
		case 3:
			if (audioMenu.isPlaying) {
				audioMenu.Stop ();
			}
			if (!audioRace.isPlaying) {
				audioRace.timeSamples = 7;
				audioRace.time = 7f;
				audioRace.Play ();
			}
			audioMenu.Stop ();
			break;
		default:
			break;

		}

		//Sounds
		if (playSemaphor) {
			playSemaphor = false;
			audioSemaphor.Play ();
		}

		if (playAcceleration) {
			if (!audioAccelerationShip.isPlaying) {
				audioAccelerationShip.Play ();
			} else {
				if (audioAccelerationShip.volume < 0.1)
					audioAccelerationShip.volume = audioAccelerationShip.volume + 0.001f;
			}
		} else {
			audioAccelerationShip.volume = audioAccelerationShip.volume - 0.01f;
			if(audioAccelerationShip.volume < 0) audioAccelerationShip.Stop ();
		}

		if (playTurbo) {
			playTurbo = false;
			if (!audioTurbo.isPlaying) {
				audioTurbo.time = 1f;
				audioTurbo.volume = 1f;
				audioTurbo.Play ();
			}
		}
		if (audioTurbo.time > 1.5f) {
			if (audioTurbo.time > 3)
				audioTurbo.Stop ();
			audioTurbo.volume = audioTurbo.volume - 0.05f;
		}

		if (playShoot) {
			playShoot = false;
			audioShoot.Play ();
		}
	}

	public static void playSemaphorFunction(){
		playSemaphor = true;
	}

	public static void playAudioAcceleration(){
		playAcceleration = true;
	}

	public static void stopAudioAcceleration(){
		playAcceleration = false;
	}

	public static void playTurboFunction(){
		playTurbo = true;
	}

	public static void playShootFunction(){
		playShoot = true;
	}
}