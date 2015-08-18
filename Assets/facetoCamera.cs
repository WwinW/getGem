using UnityEngine;
using System.Collections;

public class facetoCamera : MonoBehaviour {
	

	// Use this for initialization
	void Start () {
	
		Vector3 v = Camera.main.transform.position - transform.position;  
		v.x = v.z = 0.0f;  
		transform.LookAt(Camera.main.transform.position - v); 
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
