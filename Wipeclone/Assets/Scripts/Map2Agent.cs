using UnityEngine;
using System.Collections;

public class Map2Agent : MonoBehaviour {

	public Transform target1;
	public Transform target2;
	public Transform target3;
	public Transform target4;
	public Transform target5;
	public Transform target6;
	public Transform target7;
	public Transform target8;
	public Transform target9;
	public Transform target10;
	public Transform target11;
	public Transform target12;
	public Transform target13;
	public Transform target14;
	public Transform target15;
	public Transform target16;
	public Transform target17;
	public Transform target18;
	public Transform target19;
	public Transform target20;
	public Transform target21;
	public Transform target22;
	private Transform target;
	public float speed;

	private float rotationSpeed = 1f;
	private float pathEndThreshold = 40f;
	public int numGoal = 1;
	// Use this for initialization
	void Start () {
		target = target1;

	}
	
	// Update is called once per frame
	void Update () {
		float step = speed * Time.deltaTime;
		float dist = Vector3.Distance(transform.position, target.position);
		if (dist <= pathEndThreshold) {
			numGoal++;
		}
		switch(numGoal){
		case 1:
			target = target1;
			transform.position = Vector3.MoveTowards(transform.position, target.position, step);
			break;
		case 2:
			target = target2;
			transform.position = Vector3.MoveTowards(transform.position, target2.position, step);
			break;
		case 3:
			target = target3;
			transform.position = Vector3.MoveTowards(transform.position, target3.position, step);
			break;
		case 4:
			target = target4;
			transform.position = Vector3.MoveTowards(transform.position, target4.position, step);
			break;
		case 5:
			target = target5;
			transform.position = Vector3.MoveTowards(transform.position, target5.position, step);
			break;
		case 6:
			target = target6;
			transform.position = Vector3.MoveTowards(transform.position, target6.position, step);
			break;
		case 7:
			target = target7;
			transform.position = Vector3.MoveTowards(transform.position, target7.position, step);
			break;
		case 8:
			target = target8;
			transform.position = Vector3.MoveTowards(transform.position, target8.position, step);
			break;
		case 9:
			target = target9;
			transform.position = Vector3.MoveTowards(transform.position, target9.position, step);
			break;
		case 10:
			target = target10;
			transform.position = Vector3.MoveTowards(transform.position, target10.position, step);
			break;
		case 11:
			target = target11;
			transform.position = Vector3.MoveTowards(transform.position, target11.position, step);
			break;
		case 12:
			target = target12;
			transform.position = Vector3.MoveTowards(transform.position, target12.position, step);
			break;
		case 13:
			target = target13;
			transform.position = Vector3.MoveTowards(transform.position, target13.position, step);
			break;
		case 14:
			target = target14;
			transform.position = Vector3.MoveTowards(transform.position, target14.position, step);
			break;
		case 15:
			target = target15;
			transform.position = Vector3.MoveTowards(transform.position, target15.position, step);
			break;
		case 16:
			target = target16;
			transform.position = Vector3.MoveTowards(transform.position, target16.position, step);
			break;
		case 17:
			target = target17;
			transform.position = Vector3.MoveTowards(transform.position, target17.position, step);
			break;
		case 18:
			target = target18;
			transform.position = Vector3.MoveTowards(transform.position, target18.position, step);
			break;
		case 19:
			target = target19;
			transform.position = Vector3.MoveTowards(transform.position, target19.position, step);
			break;
		case 20:
			target = target20;
			transform.position = Vector3.MoveTowards(transform.position, target20.position, step);
			break;
		case 21:
			target = target21;
			transform.position = Vector3.MoveTowards(transform.position, target21.position, step);
			break;
		case 22:
			target = target22;
			transform.position = Vector3.MoveTowards(transform.position, target22.position, step);
			break;
		default:
			target = target1;
			numGoal = 1;
			transform.position = Vector3.MoveTowards(transform.position, target1.position, step);
			break;
		}
		var rotation = Quaternion.LookRotation(target.position - transform.position);
		transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * rotationSpeed);
	}
}
