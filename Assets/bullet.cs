using UnityEngine;
using System.Collections;

public class bullet : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
		UIRoot root = GameObject.FindObjectOfType<UIRoot> ();
		if (root != null) 
		{
			float s = (float)root.activeHeight /Screen.height;
			int height = Mathf.CeilToInt(Screen.height * s);
			int width = Mathf.CeilToInt(Screen.width * s);
			Debug.Log("height = " + height);
			Debug.Log("width = " + width);
		}
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (transform.position.z > 5) 
		{
			Destroy(this);
		}

		if (transform.position.x > 10 || transform.position.x < -3) 
		{
			Destroy(this);
		}

		if (transform.position.y > 10 || transform.position.y < -3)
		{
			Destroy(this);	
		}
	}


}
