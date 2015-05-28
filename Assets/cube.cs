using UnityEngine;
using System.Collections;

public class cube : MonoBehaviour {

	public cube CubeDefine;

	private const int invalidIndex = -1;

	public float generateY = 8.2f;
	public float intervalPos = 1.1f; 
	public int indexX = invalidIndex;
	public int indexY = invalidIndex;
	private bool ready = false;

	public bool readyPos
	{ 
		get 
		{
			return ready;	
		}
				
		set 
		{
			ready = value;
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
		int blankCount = 0;
		if (readyPos == false)
		{
			return;
		}

		for (; x < study.maxX; x++) 
		{
			y = 0;
			blankCount = 0;
			for(; y < study.maxY; y++)
			{
				
				if( null == study.gridArray[x, y].cube)
				{
					cube objectCube = findCube(x, y);
					//				Debug.Log("findCube x:" + indexX + " y:" + y);

					if(objectCube != null)
					{
						int originY = objectCube.indexY;
						//old cube
						study.gridArray[x, y].cube = objectCube;
						
						study.gridArray[objectCube.indexX, objectCube.indexY].cube = null;

						study.gridArray[x, y].cube.setIndex(x, y);
						study.gridArray[x, y].cube.readyPos = false;
						
						Hashtable args = new Hashtable();
//						args.Add("time",1f*(originY - y));
						args.Add("time", 1.5f);
//						args.Add("speed",5f);
						args.Add("oncomplete", "AnimationEnd");
						args.Add("x",study.gridArray[x, y].pos.x);
						args.Add("y",study.gridArray[x, y].pos.y);
						args.Add("z",study.gridArray[x, y].pos.z);

						iTween.MoveTo(study.gridArray[x, y].cube.gameObject, args);
						
						Debug.Log("move cube indexX is "+indexX+" indexY is "+y);
					}
					else
					{
						//new cube
						blankCount++;
						Vector3 vec3 = new Vector3(study.gridArray[x, y].pos.x, generateY+(intervalPos*blankCount), 0);
						cube newCube = (cube)Instantiate(CubeDefine, vec3, transform.rotation);

						study.gridArray[x, y].cube = newCube;

						study.gridArray[x, y].cube.setIndex(x, y);
						
						Debug.Log("create new cube indexX is "+indexX+" indexY is "+y);
						
						Hashtable args = new Hashtable();
						//args.Add("time",1f* (generateY - y));
						args.Add("time",1.5f);
//						args.Add("speed",5f);
						args.Add("oncomplete", "AnimationEnd");
						args.Add("x",study.gridArray[x, y].pos.x);
						args.Add("y",study.gridArray[x, y].pos.y);
						args.Add("z",study.gridArray[x, y].pos.z);
						iTween.MoveTo(study.gridArray[x, y].cube.gameObject, args);
					}
				}
			}		
		}

//		for(; y < study.maxY; y++)
//		{
//			
//			if( null == study.gridArray[indexX, y].cube)
//			{
//				cube objectCube = findCube(indexX, y);
//				//				Debug.Log("findCube x:" + indexX + " y:" + y);
//				if(objectCube != null)
//				{
//					//old cube
//					study.gridArray[indexX, y].cube = objectCube;
//					
//					study.gridArray[objectCube.indexX, objectCube.indexY].cube = null;
//					
//					study.gridArray[indexX, y].cube.setIndex(indexX, y);
//					study.gridArray[indexX, y].cube.readyPos = false;
//					
//					Hashtable args = new Hashtable();
//					args.Add("time",1f);
//					args.Add("oncomplete", "AnimationEnd");
//					args.Add("x",study.gridArray[indexX, y].pos.x);
//					args.Add("y",study.gridArray[indexX, y].pos.y);
//					args.Add("z",study.gridArray[indexX, y].pos.z);
//					
//					iTween.MoveTo(study.gridArray[indexX, y].cube.gameObject, args);
//					
//					Debug.Log("move cube indexX is "+indexX+" indexY is "+y);
//				}
//				else
//				{
//					//new cube
//					Vector3 vec3 = new Vector3(study.gridArray[indexX, y].pos.x, generateY, 0);
//					cube newCube = (cube)Instantiate(CubeDefine, vec3, transform.rotation);
//					
//					study.gridArray[indexX, y].cube = newCube;
//					
//					study.gridArray[indexX, y].cube.setIndex(indexX, y);
//					
//					Debug.Log("create new cube indexX is "+indexX+" indexY is "+y);
//					
//					Hashtable args = new Hashtable();
//					args.Add("time",1f);
//					args.Add("oncomplete", "AnimationEnd");
//					args.Add("x",study.gridArray[indexX, y].pos.x);
//					args.Add("y",study.gridArray[indexX, y].pos.y);
//					args.Add("z",study.gridArray[indexX, y].pos.z);
//					iTween.MoveTo(study.gridArray[indexX, y].cube.gameObject, args);
//				}
//			}
//		}		
	}


	void upFindCube2()
	{
		
		int x = indexX;
		int y = indexY;
		int blankCount = 0;

		for(; y < study.maxY; y++)
		{
			
			if( null == study.gridArray[x, y].cube)
			{
				cube objectCube = findCube(x, y);
				//				Debug.Log("findCube x:" + indexX + " y:" + y);
				
				if(objectCube != null)
				{
//					iTween.Stop(objectCube.gameObject);

					int originY = objectCube.indexY;
					//old cube
					study.gridArray[x, y].cube = objectCube;
					
					study.gridArray[objectCube.indexX, objectCube.indexY].cube = null;
					
					study.gridArray[x, y].cube.setIndex(x, y);
					study.gridArray[x, y].cube.readyPos = false;
					
					Hashtable args = new Hashtable();
					//						args.Add("time",1f*(originY - y));
					args.Add("time", 1.5f);
					//						args.Add("speed",5f);
					args.Add("oncomplete", "AnimationEnd");
					args.Add("x",study.gridArray[x, y].pos.x);
					args.Add("y",study.gridArray[x, y].pos.y);
					args.Add("z",study.gridArray[x, y].pos.z);

					iTween.MoveTo(study.gridArray[x, y].cube.gameObject, args);

					Debug.Log("move cube indexX is "+indexX+" indexY is "+y);
				}
				else
				{
					//new cube
					blankCount++; 
					Vector3 vec3 = new Vector3(study.gridArray[x, y].pos.x, generateY+(intervalPos*blankCount), 0);
					cube newCube = (cube)Instantiate(CubeDefine, vec3, transform.rotation);
					
					study.gridArray[x, y].cube = newCube;
					
					study.gridArray[x, y].cube.setIndex(x, y);
					
					Debug.Log("create new cube indexX is "+indexX+" indexY is "+y);
					
					Hashtable args = new Hashtable();
					//args.Add("time",1f* (generateY - y));
					args.Add("time",1.5f);
					//						args.Add("speed",5f);
					args.Add("oncomplete", "AnimationEnd");
					args.Add("x",study.gridArray[x, y].pos.x);
					args.Add("y",study.gridArray[x, y].pos.y);
					args.Add("z",study.gridArray[x, y].pos.z);
					iTween.MoveTo(study.gridArray[x, y].cube.gameObject, args);
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

	
	void findSameColorCube(int x, int y, Color bulletColor)
	{
		Debug.Log("visit cube index x is:"+x+" y is:"+y);
		if (x < 0 || x >= study.maxX) 
		{
			return;
		}
		if (y < 0 || y >= study.maxY) 
		{
			return;
		}

		if (null == study.gridArray [x, y].cube) 
		{
			return;
		}

		cube currentCube = study.gridArray[x, y].cube;

		if (currentCube.readyPos == false)
		{
//			Destroy (currentCube);
			return;
		} 
		else
		{
			Renderer render = currentCube.GetComponent<Renderer>();
			if(render.material.color == bulletColor)
			{
				study.gridArray[x,y].cube = null;

				iTween.Stop(currentCube.gameObject);
				//destroy this cube
				Destroy(currentCube.gameObject);
				Debug.Log("Destroy cube index x is:"+x+" y is:"+y);
				
				// [x-1, y]
				findSameColorCube(x-1, y, bulletColor);
				
				// [x+1, y]
				findSameColorCube(x+1, y, bulletColor);
				
				// [x, y-1]
				findSameColorCube(x, y-1, bulletColor);
				
				//[x, y+1]
				findSameColorCube(x, y+1, bulletColor);
				


				
			}
				
		}



	}

	// Use this for initialization
	void Start () {
	
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter(Collision otherObj) 
	{
		if (otherObj.gameObject.tag == "bullet") 
		{
			//collision is bullet, destroy bullet
			Renderer bulletRender = otherObj.gameObject.GetComponent<Renderer>();

			Renderer cubeRender = gameObject.GetComponent<Renderer>();
			if(bulletRender.material.color == cubeRender.material.color)
			{
				if(readyPos == true)
				{
					findSameColorCube(indexX, indexY, bulletRender.material.color);
					
					Debug.Log("current indexX is " +indexX + " indexY is "+indexY);

//					iTween.Stop(study.gridArray[indexX, indexY].cube.gameObject);

					study.gridArray[indexX, indexY].cube = null;
					
					upFindCube();
					
					Destroy(gameObject);
				}
				else
				{
//					iTween.Stop(study.gridArray[indexX, indexY].cube.gameObject);

//					iTween.Stop();
					study.gridArray[indexX, indexY].cube = null;
					
					upFindCube2();
					
					Destroy(gameObject);
				}

			}
			else
			{
				cubeRender.material.color = bulletRender.material.color;
			}

			Destroy(otherObj.gameObject);



		}
	}
}
