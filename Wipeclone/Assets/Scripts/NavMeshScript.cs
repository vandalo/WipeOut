using UnityEngine;
using System.Collections;

public class NavMeshScript : MonoBehaviour {
	public Transform goal1;
	public Transform goal2;
	public Transform goal3;
	public Transform goal4;
	public Transform goal5;
	public Transform goal6;
	public Transform goal7;
	public Transform goal8;
	public Transform goal9;
	public Transform goal10;
	public float pathEndThreshold = 40.0f;
	private int numGoal = 1;
	// Use this for initialization
	void Start () {
		NavMeshAgent agent = GetComponent<NavMeshAgent>();
		agent.destination = goal1.position;
	}
	
	// Update is called once per frame
	void Update () {
		NavMeshAgent agent = GetComponent<NavMeshAgent>();
		if (agent.remainingDistance <= agent.stoppingDistance + pathEndThreshold) {
			numGoal++;
			switch (numGoal) {
			case 1:
				agent.destination = goal1.position;
				break;
			case 2:
				agent.destination = goal2.position;
				break;
			case 3:
				agent.destination = goal3.position;
				break;
			case 4:
				agent.destination = goal4.position;
				break;
			case 5:
				agent.destination = goal5.position;
				break;
			case 6:
				agent.destination = goal6.position;
				break;
			case 7:
				agent.destination = goal7.position;
				break;
			case 8:
				agent.destination = goal8.position;
				break;
			case 9:
				agent.destination = goal9.position;
				break;
			case 10:
				agent.destination = goal10.position;
				break;
			default:
				agent.destination = goal1.position;
				numGoal = 1;
				break;
			}
		}
	}
}