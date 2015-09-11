using UnityEngine;
using System.Collections;

public class NewBehaviourScript : MonoBehaviour {


	public delegate int MathMagic (int value1,int value2);

	public int Addition (int value1, int value2)
	{
		return value1 + value2;
	}

	public int Substraction(int value1, int value2)
	{
		return value1 - value2;
	}


	// Use this for initialization
	void Start () {

		MathMagic method1 = Addition;
		MathMagic method2 = Substraction;

		Debug.Log (method1 (1, 5));
		Debug.Log (method2 (1, 5));
	}
	
	// Update is called once per frame
	void Update () {
	
	}


}
