using UnityEngine;
using System.Collections;

public class BulletDestroyMe : MonoBehaviour {

	public float aliveTime;
	// Use this for initialization
	void Start () {
		Destroy (gameObject, aliveTime);
	}

	// Update is called once per frame
	void Update () {

	}
}