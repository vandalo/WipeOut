using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Path : MonoBehaviour
{

	public List<Transform> path;
	public Color gizmoColor;
	// Use this for initialization



	void OnDrawGizmos ()
	{	
		path  = new List<Transform> ();
		Transform[] childNodes = GetComponentsInChildren<Transform> ();
		for (int i = 0; i < childNodes.Length; i++) {
			if (childNodes [i] != transform) {
				path.Add (childNodes [i]);
			}
		}


		Gizmos.color = gizmoColor;
		for (int i = 0; i < path.Count; i++) {

			Vector3 currentNode = path [i].position;

			Vector3 previousNode = currentNode;

			if (i > 0) {
				previousNode = path [i - 1].position;
			} else if (path.Count > 0) {
				previousNode = path [path.Count - 1].position;
			}

			Gizmos.DrawLine (previousNode, currentNode);
			Gizmos.DrawSphere (currentNode, 1F);

		
		}
	}
}