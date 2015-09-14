using UnityEngine;
using System.Collections;

public class bullet : MonoBehaviour {

	private float mScaleRatio = 0.5f; //每升高1或降低的缩放比例
	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () 
	{

		if (transform.position.z > 5) 	
		{
			Destroy(this);
		}

//		if (transform.position.x > 10 || transform.position.x < -3) 
//		{
//			Destroy(this);
//		}
//
//		if (transform.position.y > 10 || transform.position.y < -3)
//		{
//			Destroy(this);	
//		}
	}


}
