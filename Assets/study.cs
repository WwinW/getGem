using UnityEngine;
using System.Collections;

public class study : MonoBehaviour {

	public cube cubeObject;
	public Rigidbody bullet;
//	public GameObject bullet;
	public float speed = 10f;

	public const int maxY = 7;
	public const int maxX = 7;
	public const int invalidValue = -1;

	static public Color color;

	iPhoneTouch startTouch;
	iPhoneTouch endTouch;

	public class grid
	{
		public Vector3 		pos;
		public cube 		cube; //null is have not, non-null is have cube

	}

	static public Color[] colorArray = 
	{
		Color.blue,
		Color.cyan,
		Color.green,
		Color.red,
		Color.yellow,
	};
	
//	public grid[] testGrid = {
//		new grid { pos = new Vector3(0, 0, 0), cube = null},
//		new grid { pos = new Vector3(0, 0, 0), cube = null},
//	};

	static public grid[,] gridArray = {
		{
			//[0,0] ~ [0, 7]
			new grid { pos = new Vector3(0.5f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 0.5f, 0), cube = null},
		},
		{
			//[1, 0] ~ [1, 7]
			new grid { pos = new Vector3(0.5f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 1.6f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 1.6f, 0), cube = null},
		},
		{
			//[2, 0] ~ [2, 7]
			new grid { pos = new Vector3(0.5f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 2.7f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 2.7f, 0), cube = null},
		},
		{
			//[3, 0] ~ [3, 7]
			new grid { pos = new Vector3(0.5f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 3.8f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 3.8f, 0), cube = null},
		},
		{
			//[4, 0] ~ [4, 7]
			new grid { pos = new Vector3(0.5f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 4.9f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 4.9f, 0), cube = null},
		},
		{
			//[5, 0] ~ [5, 7]
			new grid { pos = new Vector3(0.5f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 6.0f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 6.0f, 0), cube = null},
		},
		{
			//[6, 0] ~ [6, 7]
			new grid { pos = new Vector3(0.5f, 7.1f, 0), cube = null},
			new grid { pos = new Vector3(1.6f, 7.1f, 0), cube = null},
			new grid { pos = new Vector3(2.7f, 7.1f, 0), cube = null},
			new grid { pos = new Vector3(3.8f, 7.1f, 0), cube = null},
			new grid { pos = new Vector3(4.9f, 7.1f, 0), cube = null},
			new grid { pos = new Vector3(6.0f, 7.1f, 0), cube = null},
			new grid { pos = new Vector3(7.1f, 7.1f, 0), cube = null},
		}
	};



	// Use this for initialization
	void Start () {
	
		//use prefab demo
//		for (int y = -2; y < 3; y++) {
//			for (int x = -2; x < 3; x++) {
//				cube cubeObj = (cube) Instantiate(cubeObject, new Vector3(x, y, 0), Quaternion.identity);
//				int index = Random.Range(0, colorArray.Length);
//				Renderer render = cubeObj.GetComponent<Renderer>();
//				render.material.color = colorArray[index];
//
//			}
//		}

		int x = 0;
		for (; x < maxX; x++) 
		{
			int y = 0;
			for(; y < maxY; y++)
			{
				cube cubObj = (cube) Instantiate(cubeObject, gridArray[x, y].pos, Quaternion.identity);
				int index = Random.Range(0, colorArray.Length);
				Renderer render = cubObj.GetComponent<Renderer>();
				render.material.color = colorArray[index];

//				Debug.Log("gridArray x is " + x + " gridArray y is " + y);
			}

//			Debug.Log("gridArray x is " + x + " gridArray y is " + y);
		}
	}
	
	// Update is called once per frame
	void Update () {

//		if (Input.GetButtonDown("Fire1")) {
//			FireRocket();
//		}


		int nbTouches = iPhoneInput.touchCount;
		if (nbTouches > 0)
		{
			iPhoneTouch touch = iPhoneInput.GetTouch(0);
			iPhoneTouchPhase phase = touch.phase;
			switch(phase)
			{
			case iPhoneTouchPhase.Began:
				Debug.Log("New touch detected at position " + touch.position + " , index " + touch.fingerId);
				startTouch = touch;
				break;

			case iPhoneTouchPhase.Ended:
				Debug.Log("Touch index " + touch.fingerId + " ended at position " + touch.position);
				endTouch = touch;

				//calculate launch power
				Vector2 deltaVector = endTouch.position - startTouch;

				break;
			}
		}
//		int nbTouches = Input.touchCount;
//
//		Debug.Log("Touches is " + nbTouches	);
//		if(nbTouches > 0)
//		{
//			for (int i = 0; i < nbTouches; i++)
//			{
//				Touch touch = Input.GetTouch(i);
//				
//				TouchPhase phase = touch.phase;
//				
//				switch(phase)
//				{
//				case TouchPhase.Began:
//					print("New touch detected at position " + touch.position + " , index " + touch.fingerId);
//					break;
//				case TouchPhase.Moved:
//					print("Touch index " + touch.fingerId + " has moved by " + touch.deltaPosition);
//					break;
//				case TouchPhase.Stationary:
//					print("Touch index " + touch.fingerId + " is stationary at position " + touch.position);
//					break;
//				case TouchPhase.Ended:
//					print("Touch index " + touch.fingerId + " ended at position " + touch.position);
//					break;
//				case TouchPhase.Canceled:
//					print("Touch index " + touch.fingerId + " cancelled");
//					break;
//				}
//			}
//		}
	}

	void FireRocket () {
		Rigidbody rigid = (Rigidbody)Instantiate(bullet, new Vector3(0, 0, -2), transform.rotation);
//		Rigidbody rigid = rocketClone.GetComponent<Rigidbody> ();
//		Vector3 vec = Vector3 (0, 0, 1);
		rigid.velocity = new Vector3 (0, 0, 1) * speed;
//		rigid.velocity = transform.forward * speed;
		// You can also acccess other components / scripts of the clone
//		rocketClone.GetComponent<MyRocketScript>().DoSomething();

		Debug.Log("FireRocket");
	}


	
}
