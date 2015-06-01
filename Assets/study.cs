using UnityEngine;
using System.Collections;

public class study : MonoBehaviour {

	public cube cubeObject;
	public bullet bulletObject;
//	public GameObject bullet;
	public float speed = 10f;

	public const int maxY = 7;
	public const int maxX = 7;
	public const int invalidValue = -1;

	static public Color color;

	iPhoneTouch startTouch;
	iPhoneTouch endTouch;

	Vector3 initVelocity;

	public class grid
	{
		public Vector3 		pos;
		public cube 		cube; //null is have not, non-null is have cube
	}

	static public Color[] colorArray = 
	{
		Color.blue,
		Color.green,
		Color.cyan,
		Color.red,
		Color.yellow,
	};

	bullet objBullet = null;

//	public grid[] testGrid = {
//		new grid { pos = new Vector3(0, 0, 0), cube = null},
//		new grid { pos = new Vector3(0, 0, 0), cube = null},
//	};


	static public grid[,] gridArray = {
		{
			//[0,0] ~ [0, 7]
			new grid { pos = new Vector3(0.5f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(0.5f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(0.5f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(0.5f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(0.5f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(0.5f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(0.5f, 7.1f, 0), cube = null},
		},
		{
			//[1, 0] ~ [1, 7]
			new grid { pos = new Vector3(1.6f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 7.1f, 0), cube = null},
		},
		{
			//[2, 0] ~ [2, 7]
			new grid { pos = new Vector3(2.7f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 7.1f, 0), cube = null},
		},
		{
			//[3, 0] ~ [3, 7]
			new grid { pos = new Vector3(3.8f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 7.1f, 0), cube = null},
		},
		{
			//[4, 0] ~ [4, 7]
			new grid { pos = new Vector3(4.9f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 7.1f, 0), cube = null},
		},
		{
			//[5, 0] ~ [5, 7]
			new grid { pos = new Vector3(6.0f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 7.1f, 0), cube = null},
		},
		{
			//[6, 0] ~ [6, 7]
			new grid { pos = new Vector3(7.1f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 7.1f, 0), cube = null},
		}
	};


	// Use this for initialization
	void Start () {
	
		int x = 0;
		for (; x < maxX; x++) 
		{
			int y = 0;
			for(; y < maxY; y++)
			{
//				if(y < 3)
//				{
//					cube cubObj = (cube) Instantiate(cubeObject, gridArray[x, y].pos, Quaternion.identity);
//					if(cubObj != null)
//					{
//	//					int index = Random.Range(0, colorArray.Length);
//						int index = Random.Range(0, 1);
//						Renderer render = cubObj.GetComponent<Renderer>();
//						render.material.color = colorArray[index];
//						
//						cubObj.indexX = x;
//						cubObj.indexY = y;
//						gridArray[x, y].cube = cubObj;
//						gridArray[x, y].cube.readyPos = true;
//						Debug.Log("gridArray x is " + x + " gridArray y is " + y + "pos is "+gridArray[x, y].pos);
//					}
//				}
//				else
//				{
//					cube cubObj = (cube) Instantiate(cubeObject, gridArray[x, y].pos, Quaternion.identity);
//					if(cubObj != null)
//					{
//						//					int index = Random.Range(0, colorArray.Length);
//						int index = Random.Range(0, 1);
//						Renderer render = cubObj.GetComponent<Renderer>();
//						render.material.color = colorArray[2];
//						
//						cubObj.indexX = x;
//						cubObj.indexY = y;
//						gridArray[x, y].cube = cubObj;
//						gridArray[x, y].cube.readyPos = true;
//						Debug.Log("gridArray x is " + x + " gridArray y is " + y + "pos is "+gridArray[x, y].pos);
//					}
//				}
				cube cubObj = (cube) Instantiate(cubeObject, gridArray[x, y].pos, Quaternion.identity);
				if(cubObj != null)
				{
//					int index = Random.Range(0, colorArray.Length);
					int index = Random.Range(0, 2);
					Renderer render = cubObj.GetComponent<Renderer>();
					render.material.color = colorArray[index];
					
					cubObj.indexX = x;
					cubObj.indexY = y;
					gridArray[x, y].cube = cubObj;
					gridArray[x, y].cube.readyPos = true;
					Debug.Log("gridArray x is " + x + " gridArray y is " + y + "pos is "+gridArray[x, y].pos);
				}
			}
//			Debug.Log("gridArray x is " + x + " gridArray y is " + y);
		}

		 objBullet = (bullet)Instantiate(bulletObject, new Vector3(3.8f, -2, -2), transform.rotation);
		
		//		int index = Random.Range(0, colorArray.Length);
		int indexBulletColor = Random.Range(0, 2);
		Renderer renderBullet = objBullet.GetComponent<Renderer>();
		renderBullet.material.color = colorArray[indexBulletColor];

	}
	
	// Update is called once per frame
	void Update () {


		int nbTouches = iPhoneInput.touchCount;
		if (nbTouches > 0)
		{
			iPhoneTouch touch = iPhoneInput.GetTouch(0);
			iPhoneTouchPhase phase = touch.phase;
			switch(phase)
			{
			case iPhoneTouchPhase.Began:
//				Debug.Log("New touch detected at position " + touch.position + " , index " + touch.fingerId);
				startTouch = touch;
				break;

			case iPhoneTouchPhase.Ended:
//				Debug.Log("Touch index " + touch.fingerId + " ended at position " + touch.position);
				endTouch = touch;

				//calculate launch power
				Vector2 deltaVector = endTouch.position - startTouch.position;
				float deltaTime = endTouch.timeDelta - startTouch.timeDelta;
//				deltaVector.Normalize();
				deltaVector *= deltaTime;

				initVelocity = new Vector3(deltaVector.x, deltaVector.y, 5.0f);
				Debug.Log("initVelocity is " + initVelocity);
				//fire bullet
				FireBullet ();
				break;
			}
		}
	}

	void FireBullet () 
	{
//		bullet objBullet = (bullet)Instantiate(bulletObject, new Vector3(3.8f, 0, -2), transform.rotation);
//
////		int index = Random.Range(0, colorArray.Length);
//		int index = Random.Range(0, 1);
//		Renderer render = objBullet.GetComponent<Renderer>();
//		render.material.color = colorArray[index];

		if (objBullet != null)
		{
			Rigidbody rigid = objBullet.GetComponent<Rigidbody> ();
			rigid.velocity = initVelocity;
		}
//		Debug.Log("FireBullet");

		objBullet = (bullet)Instantiate(bulletObject, new Vector3(3.8f, -2, -2), transform.rotation);

//		int index = Random.Range(0, colorArray.Length);
		int index = Random.Range(0, 1);
		Renderer render = objBullet.GetComponent<Renderer>();
		render.material.color = colorArray[index];
	}
	
}
