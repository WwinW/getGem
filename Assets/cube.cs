using UnityEngine;
using System.Collections;

public class cube : MonoBehaviour {

	private const int invalidIndex = -1;

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

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
