using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class CellsManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

enum ShapeType
{
	cube = 0,
	bullet = 1,
	gem = 2,

}
enum ColorType
{
	pink = 0,
	yellow,
	blue,
	red,
	green,
}

class Cell
{
	Vector3 Pos;
	GameObject obj;
}

class Cells
{
	Cell[,] mCells = new Cell[10,10];

	void QueryCellInfo()
	{

	}
}

class Cube
{
	Color 	colorState;
	Vector2 index; //cCells x index, y index
	float 	transparentState; 
}

class Bullet
{
	Color 	colorState;

}

