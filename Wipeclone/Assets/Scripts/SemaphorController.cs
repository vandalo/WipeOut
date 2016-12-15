using UnityEngine;
using System.Collections;




public class SemaphorController : MonoBehaviour {
	private float timer = 0;
	public Texture2D semaphor1;
	public Texture2D semaphor2;
	public Texture2D semaphor3;
	public Texture2D semaphor4;
	public GameObject semaphor;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (!GUIManager.firstTimeRender) { 
			timer += Time.deltaTime;
			Renderer render = semaphor.GetComponent<Renderer> ();
			if (timer < 1) {
				render.material.SetTexture ("_MainTex", semaphor1);
			} else if (timer < 2) {
				render.material.SetTexture ("_MainTex", semaphor2);
			} else if (timer < 3) {
				render.material.SetTexture ("_MainTex", semaphor3);
			} else if (timer < 6) {
				render.material.SetTexture ("_MainTex", semaphor4);
				ShipControllerPlayer.playing = true;
				ShipControllerAI.playing = true;
				GUIManager.playing = true;
			} else {
				Destroy (semaphor);
			}
		}
	}
}