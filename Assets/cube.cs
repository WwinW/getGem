using UnityEngine;
using System.Collections;

public class cube : MonoBehaviour {


	private const int invalidIndex = -1;

	public float generateY = 8.2f;
	public float intervalPos = 1.1f; 
	public int indexX = invalidIndex;
	public int indexY = invalidIndex;
	private bool ready = false;
	private bool isDestroy = false;
	private bool isCheck = false;

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

	public bool IsKilled
	{
		get
		{
			return isDestroy;
		}

		set
		{
			isDestroy = value;
		}
	}

	public bool IsChecked
	{
		get
		{
			return isCheck;
		}

		set
		{
			isCheck = value;
		}
	}

	public void setIndex(int x, int y)
	{
		indexX = x;
		indexY = y;
	}


	void AnimationEnd()
	{
		readyPos = true;
	}

	
	void gotoScorePanelAnimEnd()
	{
		Destroy(gameObject);

		study.sDestroyCubeCount++;
	}

	// Use this for initialization
	void Start () {

//		transform.Rotate (new Vector3(-5, Random.Range (0, 15), 0));
	}
	
	// Update is called once per frame
	void Update () {

		if(transform.position.y > 10.4f)
		{
			//如果在现实区域以外就隐藏
			if(isDestroy == false)
			{
				Renderer render = GetComponent<Renderer>();
				render.enabled = false;
			}
		}
		else
		{
			if(isDestroy == false)
			{
				Renderer render = GetComponent<Renderer>();
				render.enabled = true;
			}
		}
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
//				if(readyPos == true)
				{
					study.mIsHaveCollision = true;
					study.mCollisionIndexX = indexX;
					study.mCollisionIndexY = indexY;
					study.mCollosionBulletColor = bulletRender.material.color;
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
