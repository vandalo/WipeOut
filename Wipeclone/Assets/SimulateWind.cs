using UnityEngine;
using System.Collections;

public class SimulateWind : MonoBehaviour {
    //private Transform transform;
    private Rigidbody rb;
    private float timeElapsed, tElapsedTorque;
    float x, y, z;
    float xMin, xMax, yMin, yMax, zMin, zMax;
	// Use this for initialization
	void Start () {
        //transform = gameObject.GetComponent<Transform>();
        rb = gameObject.GetComponent<Rigidbody>();
        xMin = transform.position.x - 10;
        xMax = transform.position.x + 10;

        yMin = -transform.position.y + 0.1f;
        yMax = transform.position.y + 3;

        zMin = transform.position.z - 10;
        zMax = transform.position.z + 10;
        timeElapsed = 1;
        tElapsedTorque = 1;
    }
	
	// Update is called once per frame
	void Update () {
        timeElapsed += Time.deltaTime;
        tElapsedTorque += Time.deltaTime;
        if (transform.position.y < yMin) rb.AddForce(rb.velocity.x, 25, rb.velocity.z, ForceMode.Acceleration);
        else if (timeElapsed >= 1.5f)
        {
            //Debug.Log("Time Elapsed");
            timeElapsed = 0;
            if (transform.position.x > xMax) x = -50;
            else if (transform.position.x < xMin) x = 50;
            else x = Random.Range(-50, 50);
            //Debug.Log("X value: " + x);

            if (transform.position.y > yMax) y = -20;
            else if (transform.position.y < yMin) y = 20;
            else y = Random.Range(-20, 20);
            //Debug.Log("y value: " + y);

            if (transform.position.z > zMax) z = -50;
            else if (transform.position.z < zMin) z = 50;
            else z = Random.Range(-50, 50);
            //Debug.Log("z value: " + z);
            //Debug.Log("--------");
            //Debug.Log("--------");
            rb.AddForce(x*2, y*2, z*2, ForceMode.Acceleration);
        }
        if (tElapsedTorque >= 2)
        {
            rb.AddTorque(Random.Range(-50, 50), Random.Range(-50, 50), Random.Range(-50, 50), ForceMode.Acceleration);
        }
	}
}
