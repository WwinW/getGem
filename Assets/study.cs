using UnityEngine;
using System.Collections;
using System.IO;

public class study : MonoBehaviour {
	
	public cube cubeObject;
	public bullet bulletObject;
	public GameObject labelfab;
//	public GameObject bullet;
	public float speed = 10f;

	public const int maxY = 9;
	public const int maxX = 9;
	public const int invalidValue = -1;

	static public Color color;

	iPhoneTouch startTouch;
	iPhoneTouch endTouch;

	Vector3 initVelocity;

	float generateY = 10.4f;
	float intervalPos = 1.1f; 
	private const int invalidIndex = -1;

	int rangeMax = 3;
	int recordIndexX;
	int recordIndexY;


	int DestroyCubeScore = 0;//消除cube获得的分数
	int DestroyCubeCount = 0;//消除cube的数量

	float cubeMoveTime = 1.5f;

	bullet objBullet = null;

	bool IsOneStep 		= false;	//是否1级进阶的标志
	bool IsSecondStep 	= false;	//是否2级进阶的标志
	bool IsThreeStep 	= false;	//是否3级进阶的标志
	bool IsFouthStep	= false;	//是否4级进阶的标志
	bool IsFifthStep 	= false;	//是否5级进阶的标志

	const int mOneMultiValue  	= 1; 		//一级的消除倍数
	const int mSecondMultiValue = 2;		//二级的消除倍数
	const int mThreeMultiValue 	= 3;		//三级的消除倍数
	const int mFouthMultiValue 	= 3;		//四级的消除倍数
	const int mFifthMultiValue 	= 5;		//五级的消除倍数

	int mOneLevelCount 		= 0;	//进阶一级需要的消除数量
	int mSecondLevelCount 	= 0;	//进阶二级需要的消除数量
	int mThreeLevelCount 	= 0;	//进阶三级需要的消除刷量
	int mFouthLevelCount 	= 0;	//进阶四级需要的消除数量
	int mFifthLevelCount 	= 0;	//进阶五级需要的消除数量

	UILabel 		ScoreLabel = null; 
	UIProgressBar 	ProgressBar = null;

	float MaxTime = 30.0f; //总的消耗时间
	float DeltaTime = 0;

//	FileStream fs;
//	StreamWriter sw;

//	int colorCubeCount = 0;
	int indexDestory = 0;

	int mAdvanceBaseCount = 0; //进阶基数, 游戏初始化的时候的赋值，随机一个数字，按照10:5:3:3:2的进阶比例来计算每个进阶指数需要消耗的数量

	public int mInitAdvanceBaseCount = 100;
	public int mInitDeltaCount = 20;

	bool mbGameing = true;	//游戏是否正在继续

	int DestroyCountOnce = 0; //一次消除cube的数量

	float mBaseTime = 0.1f;   //基础补偿时间

	GameObject mEndPanel; //结束窗口
	GameObject mBackGroud; //背景图

	// 碰撞处理需要的变量 start
	static public bool 		mIsHaveCollision = false; 	//是否有同色的cube和bullet发生了碰撞
	static public int 		mCollisionIndexX = invalidIndex	;	//发生碰撞的cube的X位置
	static public int 		mCollisionIndexY = invalidIndex;	//发生碰撞的cube的Y位置
	static public Color		mCollosionBulletColor; //发生膨胀的bullet的颜色
	// 碰撞处理需要的变量 end


	public class grid
	{
		public Vector3 		pos;
		public cube 		cube; //null is have not, non-null is have cube
		public GameObject	labelObj;
	}

	static public Color[]  colorArray = 
	{
		new Color(43/255.0f, 212/255.0f, 20/255.0f),
		new Color(255/255.0f, 218/255.0f, 10/255.0f),
		new Color(244/255.0f, 64/255.0f, 44/255.0f),
		new Color(151/255.0f, 46/255.0f, 232/255.0f),
		new Color(255/255.0f, 88/255.0f, 194/255.0f),
		new Color(254/255.0f, 149/255.0f, 12/255.0f),
		new Color(49/255.0f, 225/255.0f, 202/255.0f),
	};

//	static public int[] RotationArray =
//	{
//		-15,
//		-10,
//		5,
//		0,
//		5,
//		10,
//		15,
//	};
	static public int[] RotationArray =
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	};


	static public grid[,] gridArray = {
		{
			//[0,0] ~ [0, 8]
			new grid { pos = new Vector3(0.5f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(0.5f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[1, 0] ~ [1, 8]
			new grid { pos = new Vector3(1.6f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(1.6f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[2, 0] ~ [2, 7]
			new grid { pos = new Vector3(2.7f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(2.7f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[3, 0] ~ [3, 7]
			new grid { pos = new Vector3(3.8f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(3.8f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[4, 0] ~ [4, 7]
			new grid { pos = new Vector3(4.9f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(4.9f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[5, 0] ~ [5, 7]
			new grid { pos = new Vector3(6.0f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(6.0f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[6, 0] ~ [6, 7]
			new grid { pos = new Vector3(7.1f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(7.1f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[7, 0] ~ [7, 7]
			new grid { pos = new Vector3(8.2f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(8.2f, 9.3f, 0), cube = null, labelObj = null},
		},
		{
			//[8, 0] ~ [8, 8]
			new grid { pos = new Vector3(9.3f, 0.5f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 1.6f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 2.7f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 3.8f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 4.9f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 6.0f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 7.1f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 8.2f, 0), cube = null, labelObj = null},
			new grid { pos = new Vector3(9.3f, 9.3f, 0), cube = null, labelObj = null},
		}
	};

	void RangeColorArray()
	{
		int i = 0;
		for ( i = colorArray.Length - 1; i > 0; i--)
		{
			int p = Random.Range(0, i);
			Color temp = colorArray[p];
			colorArray[p] = colorArray[i];
			colorArray[i] = temp;
		}

		for ( i = RotationArray.Length - 1; i > 0; i--)
		{
			int p = Random.Range(0, i);
			int temp = RotationArray[p];
			RotationArray[p] = RotationArray[i];
			RotationArray[i] = temp;
		}
	}


	// Use this for initialization
	void Start () {

		GameObject StartButton = GameObject.Find ("Start");
		UIEventListener.Get(StartButton).onClick = OnStartClick;

		mEndPanel = GameObject.Find ("EndPanel");
		mBackGroud = GameObject.Find ("black_bg"); //背景图

		GameInit();

//		fs = new FileStream ("color_calculate.txt", FileMode.OpenOrCreate);
//		sw = new StreamWriter (fs);

	}
	
	// Update is called once per frame
	void Update () {

	if(!mbGameing) return;

		if(DeltaTime < 0)
		{
			DeltaTime = 0;
		}
		if (DeltaTime > MaxTime)
		{
			DeltaTime = MaxTime;
		}

		DeltaTime = DeltaTime + Time.deltaTime;
		ProgressBar.value = (MaxTime-DeltaTime)/MaxTime;

		if(ProgressBar.value < 0.0001f)
		{
			//小于0.1%的时候退出
			mbGameing = false;
		}

		if(!mbGameing)
		{
			//游戏结束唤醒结束界面
			NGUITools.SetActive(mEndPanel, true);
			NGUITools.SetActive(mBackGroud, true);
		}

//		if (DestroyCubeCount <  mOneLevelCount ) 
//		{
//			if(IsOneStep == false)
//			{
//				rangeMax  = rangeMax < colorArray.Length ? rangeMax+1 : colorArray.Length;
//				IsOneStep = true;
//			}
//
//		}
//		if (DestroyCubeCount >= mOneLevelCount && DestroyCubeCount < (mOneLevelCount + mSecondLevelCount))
		if (DestroyCubeCount >= (mOneLevelCount + mSecondLevelCount) 
		    && DestroyCubeCount < (mOneLevelCount + mSecondLevelCount + mThreeLevelCount))
		{
			if(IsSecondStep == false)
			{
				rangeMax  = rangeMax < colorArray.Length ? rangeMax+1 : colorArray.Length;
				IsSecondStep = true;
			}
		}
		else if (DestroyCubeCount >= (mOneLevelCount + mSecondLevelCount + mThreeLevelCount) 
		         && DestroyCubeCount < (mOneLevelCount + mSecondLevelCount + mThreeLevelCount + mFouthLevelCount))
		{
			if(IsThreeStep == false)
			{
				rangeMax  = rangeMax < colorArray.Length ? rangeMax+1 : colorArray.Length;
				IsThreeStep = true;
			}
		}
		else if(DestroyCubeCount >= (mOneLevelCount + mSecondLevelCount + mThreeLevelCount + mFouthLevelCount) 
		&& DestroyCubeCount < (mOneLevelCount + mSecondLevelCount + mThreeLevelCount + mFouthLevelCount + mFifthMultiValue))
		{
			if(IsFouthStep == false)
			{
				rangeMax  = rangeMax < colorArray.Length ? rangeMax+1 : colorArray.Length;
				IsFouthStep = true;
			}
		}
		else if(DestroyCubeCount >= (mOneLevelCount + mSecondLevelCount + mThreeLevelCount + mFouthLevelCount + mFifthMultiValue))
		{
			if(IsFifthStep == false)
			{
				rangeMax  = rangeMax < colorArray.Length ? rangeMax+1 : colorArray.Length;
				IsFifthStep = true;
			}
		}


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
				if(deltaTime > 0.3f ) deltaTime = 0.3f;
				if(deltaTime < 0.1f	) deltaTime = 0.1f;
				deltaVector *= deltaTime;

//				if(deltaVector.x < 5) deltaVector.x = 5;
//				if(deltaVector.x > 40) deltaVector.x = 40;
//				if(deltaVector.y < 5) deltaVector.y = 5;
//				if(deltaVector.y > 40) deltaVector.y = 40;
				initVelocity = new Vector3(deltaVector.x, deltaVector.y, 10.0f);
				Debug.Log("initVelocity is " + initVelocity);
				//fire bullet
				FireBullet ();
				break;
			}
		}

		ScoreLabel.text = string.Format ("{0}", DestroyCubeScore);
//		ScoreLabel.text = "hello world";
	}


	//游戏初始化函数
	void GameInit()
	{
		//游戏开始
		mbGameing = true;

		rangeMax = 3; 

		//随机颜色
		RangeColorArray ();

		int x = 0;
		for (; x < maxX; x++) 
		{
			int y = 0;
			for(; y < maxY; y++)
			{

				if(gridArray[x, y].cube != null)
				{
					Destroy(gridArray[x,y].cube.gameObject);
				}
			}
		}

		//初始化cube
		x = 0;
		for (; x < maxX; x++) 
		{
			int y = 0;
			for(; y < maxY; y++)
			{

				cube cubObj = (cube) Instantiate(cubeObject, gridArray[x, y].pos, Quaternion.identity);
				if(cubObj != null)
				{
//					int index = Random.Range(0, colorArray.Length);
					int index = Random.Range(0, rangeMax);
					Renderer render = cubObj.GetComponent<Renderer>();
					render.material.color = colorArray[index];
					
					cubObj.indexX = x;
					cubObj.indexY = y;
					gridArray[x, y].cube = cubObj;
					gridArray[x, y].cube.readyPos = true;

				}
			}
		}

		//初始化bullet
		if(objBullet != null)
		{
			DestroyObject(objBullet.gameObject);
			objBullet = null;
		}

		Invoke ("createNewBullet", 0.1f);
//		objBullet = (bullet)Instantiate(bulletObject, new Vector3(4.9f, -2, -2), transform.rotation);
//		int indexBulletColor = Random.Range(0, rangeMax);
//		Renderer renderBullet = objBullet.GetComponent<Renderer>();
//		renderBullet.material.color = colorArray[indexBulletColor];

		//初始化UI显示
		DestroyCubeScore = 0;
		DestroyCubeCount = 0;
		ScoreLabel = GameObject.Find ("ScoreLabel").GetComponent<UILabel>();
		ScoreLabel.text = string.Format ("{0}", DestroyCubeScore);
		ProgressBar = GameObject.Find ("BackgroundProgress").GetComponent<UIProgressBar> ();

		//初始化进阶基数
		mAdvanceBaseCount = mInitAdvanceBaseCount - Random.Range(-mInitDeltaCount, mInitDeltaCount);
		mOneLevelCount 		= 0;	//进阶一级需要的消除数量
		mSecondLevelCount 	= mAdvanceBaseCount / mOneMultiValue;	//进阶二级需要的消除数量
		mThreeLevelCount 	= mAdvanceBaseCount / mSecondMultiValue;	//进阶三级需要的消除刷量
		mFouthLevelCount 	= mAdvanceBaseCount / mThreeMultiValue;	//进阶四级需要的消除数量
		mFifthLevelCount 	= mAdvanceBaseCount / mFouthLevelCount;	//进阶五级需要的消除数量

		//初始化进阶标志
		IsOneStep 		= true;
		IsSecondStep 	= false;	
		IsThreeStep 	= false;	
		IsFouthStep		= false;	
		IsFifthStep 	= false;	

		//时间变化量
		DeltaTime = 0;

		//一次消除的数量置0
		DestroyCountOnce = 0;



		//关闭结束界面
		NGUITools.SetActive(mEndPanel, false);
		NGUITools.SetActive(mBackGroud, false);

		mIsHaveCollision = false; 
		mCollisionIndexX = invalidIndex;
		mCollisionIndexY = invalidIndex;

		initVelocity = Vector3.zero;

	}	


	void FireBullet () 
	{
		if (objBullet != null)
		{
//			Rigidbody rigid = objBullet.GetComponent<Rigidbody> ();
//			rigid.isKinematic = false;
//			rigid.velocity = initVelocity;
//			rigid.AddForce(initVelocity);
			ConstantForce constantForce = objBullet.GetComponent<ConstantForce>();
			constantForce.relativeForce = initVelocity;
		}

		objBullet = null;
		Invoke ("createNewBullet", 0.5f);

	}

	void createNewBullet()
	{
		if (objBullet != null) 
		{
			return;
		}
						
		objBullet = (bullet)Instantiate(bulletObject, new Vector3(4.9f, -2, -2), transform.rotation);

		int index = Random.Range(0, rangeMax);
		Renderer render = objBullet.GetComponent<Renderer>();
		render.material.color = colorArray[index];
	}

	public void DealCollision(int indexX, int indexY, Color materialColor)
	{

		recordIndexX = indexX;
		recordIndexY = indexY;
		if (gridArray [indexX, indexY].cube == null) 
		{
			return;
		}
		if(gridArray[indexX,indexY].cube.readyPos == true)
		{

//消除数量统计的代码
//			for(int x = 0; x < maxX; ++x)
//			{
//				for(int y = 0; y < maxY; ++y)
//				{
//					gridArray[x, y].cube.IsChecked = false;
//				}
//			}

			findSameColorCube(indexX, indexY, materialColor);
			
//			Debug.Log("current indexX is " +indexX + " indexY is "+indexY);
		
			iTween.Stop(gridArray[indexX, indexY].cube.gameObject);
		
			gridArray[indexX, indexY].cube.IsKilled = true;

			indexDestory = 0;
			DestroyCountOnce = 0;
			dealDestroyCube();



//			iTween.Stop(gameObject);

//			Destroy(gameObject);
		}
	}

	cube findCube(int x, int y)
	{
		if (x >= maxX || y >= maxY) 
		{
			return null;
		}
		
		if (null != gridArray[x,y].cube) 
		{
			//have, move
			return gridArray[x,y].cube;
			
		} 
		else
		{
			//no, go on find
			return findCube(x, y+1);
		}
		
	}


	void findSameColorCube(int x, int y, Color bulletColor)
	{
//		Debug.Log("visit cube index x is:"+x+" y is:"+y);
		if (x < 0 || x >= maxX) 
		{
			return;
		}
		if (y < 0 || y >= maxY) 
		{
			return;
		}
		
		if (gridArray [x, y].cube.IsKilled) 
		{
			return;
		}
		
//		cube currentCube = gridArray[x, y].cube;
		
		//		if (currentCube.readyPos == false)
		//		{
		////			Destroy (currentCube);
		//			return;
		//		} 
		//		else
		//		{
		Renderer render = gridArray[x, y].cube.GetComponent<Renderer>();
		if(render.material.color == bulletColor)
		{
//			gridArray[x,y].cube = null;
			
			iTween.Stop(gridArray[x, y].cube.gameObject);

			//destroy this cube
//			Destroy(currentCube.gameObject);
//			Debug.Log("Destroy cube index x is:"+x+" y is:"+y);
			gridArray[x, y].cube.IsKilled = true;
			//destroy count +1 
			DestroyCubeCount++;

//			DeltaTime -= 0.5f;

			// [x-1, y] 左
			findSameColorCube(x-1, y, bulletColor);

			//[x, y+1] 上
			findSameColorCube(x, y+1, bulletColor);

			// [x+1, y] 右
			findSameColorCube(x+1, y, bulletColor);
			
			// [x, y-1] 下
			findSameColorCube(x, y-1, bulletColor);
			

			
		}
	}

	void caluDestroyScore()
	{
		int currScore = 0;
		float addTime = 0;
		//算出的数值太大，放小10倍
		currScore = (rangeMax * (1+DestroyCountOnce)*(DestroyCountOnce/2))/10;
		addTime = DestroyCountOnce * mBaseTime;

		if(IsFifthStep)
		{
			//已进阶到5级，按五级计算
			currScore *= mFifthMultiValue;

			//时间补偿
			addTime *= mFifthMultiValue;
		}
		else
		{
			if(IsFouthStep)
			{
				//已经进阶到第四级
				currScore *= mFouthMultiValue;

				//时间补偿
				addTime *= mFouthMultiValue;
			}
			else
			{
				if(IsThreeStep)
				{
					//已经进阶到第三级
					currScore *= mThreeMultiValue;

					//时间补偿
					addTime *= mThreeMultiValue;
				}
				else
				{
					if(IsSecondStep)
					{
						//已经进阶到第二级
						currScore *= mSecondMultiValue;

						//时间补偿
						addTime *= mSecondMultiValue;
					}
					else 
					{
						if(IsOneStep)
						{
							//第一级 

						}
					}
				}
			}
		}

		DestroyCubeScore += currScore;

		//计算时间
		DeltaTime -= addTime;
	}

	void dealDestroyCube()
	{
		if (indexDestory < 0 || indexDestory >= maxX) 
		{
			//计算本次消除的得分
			caluDestroyScore();

			Invoke ("upFindCube", 0.2f);
			return;
		}

		bool isSkip = true;

		for (int y = 0; y < maxY; y++) 
		{
			if(gridArray[indexDestory,y].cube != null)
			{
				if(	gridArray[indexDestory,y].cube.IsKilled )
				{
					Destroy(gridArray[indexDestory,y].cube.gameObject);

					DestroyCountOnce++;

					isSkip = false;
				}
			}
			else
			{
//				Debug.Log(" null cube index x is:"+indexDestory+" y is:"+y);
			}

		}

		indexDestory ++;
		if (isSkip) 
		{
			Invoke ("dealDestroyCube", 0);
		}
		else
		{
			Invoke ("dealDestroyCube", 0.1f);
		}

	}

	void upFindCube()
	{
//		Debug.Log("record index X is "+recordIndexX+";record index Y is"+recordIndexY);
		int x = 0;
		int y = 0;
		int blankCount = 0;
//		if (gridArray[recordIndexX,recordIndexY].cube.readyPos == false)
//		{
//			return;
//		}
		
		for (; x < maxX; x++) 
		{
			y = 0;
			blankCount = 0;
			for(; y < maxY; y++)
			{
				
				if( null == gridArray[x, y].cube)
				{
					cube objectCube = findCube(x, y);
					//				Debug.Log("findCube x:" + indexX + " y:" + y);
					
					if(objectCube != null)
					{
//						int originY = objectCube.indexY;
						//old cube
						gridArray[x, y].cube = objectCube;
						
						gridArray[objectCube.indexX, objectCube.indexY].cube = null;
						
						gridArray[x, y].cube.setIndex(x, y);
						gridArray[x, y].cube.readyPos = false;
						
						Hashtable args = new Hashtable();
						//						args.Add("time",1f*(originY - y));
						args.Add("time", cubeMoveTime);
						//						args.Add("speed",5f);
						args.Add("oncomplete", "AnimationEnd");
						args.Add("x",gridArray[x, y].pos.x);
						args.Add("y",gridArray[x, y].pos.y);
						args.Add("z",gridArray[x, y].pos.z);
						
						iTween.MoveTo(gridArray[x, y].cube.gameObject, args);
						
//						Debug.Log("move cube indexX is "+recordIndexX+" indexY is "+y);
					}
					else
					{
						//new cube
						blankCount++;
						Vector3 vec3 = new Vector3(gridArray[x, y].pos.x, generateY+(intervalPos*blankCount), 0);
						cube newCube = (cube)Instantiate(cubeObject, vec3, transform.rotation);

						int index = Random.Range(0, rangeMax);
						Renderer render = newCube.GetComponent<Renderer>();
						render.material.color = colorArray[index];

//						newCube.transform.Rotate(new Vector3(0, RotationArray[index], 0));

						gridArray[x, y].cube = newCube;
						
						gridArray[x, y].cube.setIndex(x, y);
						
//						Debug.Log("create new cube indexX is "+recordIndexX+" indexY is "+y);
						
						Hashtable args = new Hashtable();
						//args.Add("time",1f* (generateY - y));
						args.Add("time",cubeMoveTime);
						//						args.Add("speed",5f);
						args.Add("oncomplete", "AnimationEnd");
						args.Add("x",gridArray[x, y].pos.x);
						args.Add("y",gridArray[x, y].pos.y);
						args.Add("z",gridArray[x, y].pos.z);
						iTween.MoveTo(gridArray[x, y].cube.gameObject, args);
					}
				}
			}		
		}

//		DealCalcSameColor();

		//碰撞消除创建新的cube流程结束点在这
		mIsHaveCollision = false;
		mCollisionIndexX = invalidIndex;
		mCollisionIndexY = invalidIndex;

	}

//	void DealCalcSameColor()
//	{
//		for (int index = 0; index < rangeMax; ++index) 
//		{
//			sw.WriteLine("");
//			sw.WriteLine("color count is ");
//
//			for(int x = 0; x < maxX; ++x)
//			{
//				for(int y = 0; y < maxY; ++y)
//				{
//					colorCubeCount = 0;
//					CalcSameColor(x, y, colorArray[index]);	
//					if(colorCubeCount != 0)
//					{
//						sw.Write("{0}, ", colorCubeCount);
//					}
//					
//				}
//			}
//
//		}
//	}
//
//	void CalcSameColor(int x, int y, Color bulletColor)
//	{
////		Debug.Log("visit cube index x is:"+x+" y is:"+y);
//		if (x < 0 || x >= maxX) 
//		{
//			return;
//		}
//		if (y < 0 || y >= maxY) 
//		{
//			return;
//		}
//		
//		if (gridArray [x, y].cube.IsChecked) 
//		{
//			return;
//		}
//
//		Renderer render = gridArray[x, y].cube.GetComponent<Renderer>();
//		if(render.material.color == bulletColor)
//		{
//			colorCubeCount++;
//			gridArray [x, y].cube.IsChecked = true;
////			sw.Write("({0} {1})", x, y);
//		
//			// [x-1, y]
//			CalcSameColor(x-1, y, bulletColor);
//
//			//[x, y+1]
//			CalcSameColor(x, y+1, bulletColor);
//
//			// [x+1, y]
//			CalcSameColor(x+1, y, bulletColor);
//			
//			// [x, y-1]
//			CalcSameColor(x, y-1, bulletColor);
//
//		}
//
//	}


	void OnApplicationQuit()
	{
//		sw.Close ();
	}

	void OnStartClick(GameObject button)
	{
 		GameInit();
	} 

	void FixedUpdate()
	{
		if(mIsHaveCollision)
		{
			DealCollision(mCollisionIndexX, mCollisionIndexY, mCollosionBulletColor);
		}
	}
}
