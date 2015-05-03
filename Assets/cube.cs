using UnityEngine;
using System.Collections;

public class cube : MonoBehaviour {

	public cube CubeDefine;

	private const int invalidIndex = -1;

	public float generateY = 8.0f;
	public int indexX = invalidIndex;
	public int indexY = invalidIndex;
	
	public bool readyPos 
	{ 
		get 
		{
			return readyPos;	
		}
				
		set 
		{
			readyPos = value;
		}
	}

	public void setIndex(int x, int y)
	{
		indexX = x;
		indexY = y;
	}

	void upFindCube()
	{
		int x = 0;
		int y = 0;

		for (; x < study.maxX; x++) 
		{
			for(; y < study.maxY; y++)
			{
				if( null == study.gridArray[indexX, y].cube)
				{
					cube objectCube = findCube(indexX, y);
					if(objectCube != null)
					{
						//old cube
						study.gridArray[indexX, y].cube = objectCube;
						
						study.gridArray[objectCube.indexX, objectCube.indexY].cube = null;
						
						study.gridArray[indexX, y].cube.setIndex(indexX, y);
						study.gridArray[indexX, y].cube.readyPos = false;
						
						Hashtable args = new Hashtable();
						args.Add("time",1f);
						args.Add("oncomplete", "AnimationEnd");
						args.Add("x",study.gridArray[indexX, y].pos.x);
						args.Add("y",study.gridArray[indexX, y].pos.y);
						args.Add("z",study.gridArray[indexX, y].pos.z);
						
						iTween.MoveTo(study.gridArray[indexX, y].cube.gameObject, args);
						
					}
					else
					{
						//new cube
						Vector3 vec3 = new Vector3(study.gridArray[indexX, y].pos.x, generateY, 0);
						cube newCube = (cube)Instantiate(CubeDefine, vec3, transform.rotation);
						
						study.gridArray[indexX, y].cube = newCube;
						
						study.gridArray[indexX, y].cube.setIndex(indexX, y);
						
						Hashtable args = new Hashtable();
						args.Add("time",1f);
						args.Add("oncomplete", "AnimationEnd");
						args.Add("x",study.gridArray[indexX, y].pos.x);
						args.Add("y",study.gridArray[indexX, y].pos.y);
						args.Add("z",study.gridArray[indexX, y].pos.z);
						iTween.MoveTo(study.gridArray[indexX, y].cube.gameObject, args);
					}
				}
			}				
		}
	}

	void AnimationEnd()
	{
		readyPos = true;
	}

	
	cube findCube(int x, int y)
	{
		if (x >= 7 || y >= 7) 
		{
			return null;
		}
		
		if (null != study.gridArray[x,y].cube) 
		{
			//have, move
			return study.gridArray[x,y].cube;
			
		} 
		else
		{
			//no, go on find
			return findCube(x, y+1);
		}
		
	}
	
//	void findGridbyCube (GameObject cubeParam, out int lineParam, out int rowParam)
//	{
//		int line, row; 
//		for(row = 0; row < 7; row++)
//		{
//			for(line = 0; line < 7; line++)
//			{
//				if(cubeParam == study.gridArray[line, row].cube)
//				{
//					lineParam 	= line;
//					rowParam 	= row;
//					return;
//					
//				}
//			}
//		}
//		lineParam 	= invalidIndex;
//		rowParam 	= invalidIndex;
//		return;
//	}
	
	//cube fa xian zi ji zhou wei de tongse qiu 
//	void findSameColorCube()
//	{
		//		GameObject currCube;
		
		//		int line, row;
		//		findGridbyCube (currCube, line, row);
		//		if (line != invalidValue && row != invalidValue) 
		//		{
		//
		//		} 
		//		else 
		//		{
		//			//error
		//		}
//	}
	
	void findSameColorCube(int x, int y)
	{
		if (x < 0 || y >= study.maxY) 
		{
			return;
		}
		if (x < 0 || y >= study.maxX) 
		{
			return;
		}

		if (null == study.gridArray [x, y].cube) 
		{
			return;
		}

		cube currentCube = study.gridArray[x, y].cube;
		if(currentCube.readyPos == false)
		{
			return;
		}


		Renderer render = currentCube.GetComponent<Renderer>();
		if(render.material.color == study.color)
		{
			study.gridArray[x,y].cube = null;

			// [x-1, y]
			findSameColorCube(x-1, y);

			// [x+1, y]
			findSameColorCube(x+1, y);

			// [x, y-1]
			findSameColorCube(x, y-1);

			//[x, y+1]
			findSameColorCube(x, y+1);

			//destroy this cube
			Destroy(currentCube);

		}
	}

	// Use this for initialization
	void Start () {
	
		study.gridArray[0,0].cube = null;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter(Collision otherObj) 
	{
		if (otherObj.gameObject.tag == "bullet") 
		{
			//collision is bullet, destroy bullet
			Destroy(otherObj.gameObject);

			findSameColorCube(indexX, indexY);

			study.gridArray[indexX, indexY].cube = null;

			upFindCube();

			Destroy(gameObject);

		}
	}
}
