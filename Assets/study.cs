using UnityEngine;
using System.Collections;

public class study : MonoBehaviour {

//	public GameObject cube;
	public Rigidbody bullet;
//	public GameObject bullet;
	public float speed = 10f;

	private const int maxLine = 7;
	private const int maxRow = 7;
	private	const int invalidValue = -1;
	public class grid
	{
		public Vector3 		pos;
		public GameObject 	cube; //null is have not, non-null is have cube

	}
	
//	public grid[] testGrid = {
//		new grid { pos = new Vector3(0, 0, 0), cube = null},
//		new grid { pos = new Vector3(0, 0, 0), cube = null},
//	};

	public grid[,] gridArray = {
		{
			//[0,0] ~ [0, 7]
			new grid { pos = new Vector3(0.5f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 0.5f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 0.5f, 0), cube = null},
		},
		{
			//[1, 0] ~ [1, 7]
			new grid { pos = new Vector3(0.5f, 1.1f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 1.1f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 1.1f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 1.1f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 1.1f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 1.1f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 1.1f, 0), cube = null},
		},
		{
			//[2, 0] ~ [2, 7]
			new grid { pos = new Vector3(0.5f, 2.2f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 2.2f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 2.2f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 2.2f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 2.2f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 2.2f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 2.2f, 0), cube = null},
		},
		{
			//[3, 0] ~ [3, 7]
			new grid { pos = new Vector3(0.5f, 3.3f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 3.3f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 3.3f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 3.3f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 3.3f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 3.3f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 3.3f, 0), cube = null},
		},
		{
			//[4, 0] ~ [4, 7]
			new grid { pos = new Vector3(0.5f, 4.4f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 4.4f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 4.4f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 4.4f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 4.4f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 4.4f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 4.4f, 0), cube = null},
		},
		{
			//[5, 0] ~ [5, 7]
			new grid { pos = new Vector3(0.5f, 5.5f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 5.5f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 5.5f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 5.5f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 5.5f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 5.5f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 5.5f, 0), cube = null},
		},
		{
			//[6, 0] ~ [6, 7]
			new grid { pos = new Vector3(0.5f, 6.6f, 0), cube = null},
			new grid { pos = new Vector3(1.1f, 6.6f, 0), cube = null},
			new grid { pos = new Vector3(2.2f, 6.6f, 0), cube = null},
			new grid { pos = new Vector3(3.3f, 6.6f, 0), cube = null},
			new grid { pos = new Vector3(4.4f, 6.6f, 0), cube = null},
			new grid { pos = new Vector3(5.5f, 6.6f, 0), cube = null},
			new grid { pos = new Vector3(6.6f, 6.6f, 0), cube = null},
		}



	};

	//grid xiang shang bian li
	void upFindCube(grid gridParam)
	{

		//[0,0] start, [0, 7] end
		int line, row; 

		for(row = 0; row < 7; row++)
		{
			for(line = 0; line < 7; line++)
			{
				if(null == gridArray[line, row].cube)
				{
					grid gridTemp = findCube(line, row);
					
					if(gridTemp != null)
					{
						//move
						gridArray[line, row].cube = gridTemp.cube;
						gridTemp.cube = null;

					}
					else
					{
						//create
					}
				}

			}
		}
	}

	grid findCube(int line, int row)
	{
		if (line >= 7 || row >= 7) 
		{
			return null;
		}

		if (null != gridArray[line,row].cube) 
		{
			//have, move
			return gridArray[line,row];

		} 
		else
		{
			//no, go on find
			return findCube(line+1, row);
		}

	}

	void findGridbyCube (GameObject cubeParam, out int lineParam, out int rowParam)
	{
		int line, row; 
		for(row = 0; row < 7; row++)
		{
			for(line = 0; line < 7; line++)
			{
				if(cubeParam == gridArray[line, row].cube)
				{
					lineParam 	= line;
					rowParam 	= row;
					return;

				}
			}
		}
		lineParam 	= invalidValue;
		rowParam 	= invalidValue;
		return;
	}

	//cube fa xian zi ji zhou wei de tongse qiu 
	void findSameColor()
	{
		GameObject currCube;

		int line, row;
		findGridbyCube (currCube, line, row);
		if (line != invalidValue && row != invalidValue) 
		{

		} 
		else 
		{
			//error
		}
	}

	void findSameColorCube(int line, int row)
	{
		if (line < 0 || line >= maxLine) 
		{
			return;
		}
		if (row < 0 || row >= maxRow) 
		{
			return;
		}

		if (null != gridArray [line, row].cube) 
		{
//			Renderer render = gridArray[line, row].cube.GetComponents<Renderer>();
//			int i = render.material.color.r;
//			gridArray[line, row].cube;

		}

	}

	// Use this for initialization
	void Start () {
	
		//use prefab demo
		for (int y = -2; y < 3; y++) {
			for (int x = -2; x < 3; x++) {
				Instantiate(cube, new Vector3(x, y, 0), Quaternion.identity);
			}
		}

	}
	
	// Update is called once per frame
	void Update () {

		if (Input.GetButtonDown("Fire1")) {
			FireRocket();
		}
	
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
