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
		//创建出来的位置 Z轴0， 到Z轴5的时候就销毁，在这个阶段，要逐渐缩小
		//从1缩小到0.3， 缩小的总值是0.7
		//transform.position.z == -1
		//初始位置是-2
		//初始位置缩放是1，找到一个比例，按照行进过程进行缩放。总行程是7，-1-（-2） = 1 1-（-2）= 3 0 - （-2）= 2 5-（-2）=7

		//初始位置是z = 0
		//如果向上怎么放大，
//		float deltaZ = transform.position.z - study.mBulletInitPos.z;
//		float totalZ = 5 - study.mBulletInitPos.z;
//		float scale = deltaZ/totalZ;
		
//		transform.localScale = new Vector3((1-0.7f*scale), (1-0.7f*scale), (1-0.7f*scale));
//		transform.localScale *= (1-0.7f*scale);
//		Debug.Log("bullet scale is " + (1-0.7f*scale));

		//study.mBulletInitPos.z 初始化位置
		//transform.position.z 当前的位置

//		float deltaZ = study.mBulletInitPos.z - transform.position.z;
//		float deltaScale = 1 - deltaZ * mScaleRatio;
//		transform.localScale = new Vector3 (1.0f, 1.0f, 1.0f);
//		transform.localScale *= deltaScale;
//		Debug.Log ("z value is "+ transform.position.z + " deltaZ value is "+ deltaZ 
//			+ " scale ratio is " + deltaScale + " scale is " + transform.localScale);

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
