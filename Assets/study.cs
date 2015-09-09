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

	UnityEngine.Touch startTouch;
	UnityEngine.Touch endTouch;

	Vector3 initConstantForce;

	float generateY = 10.4f;
	float intervalPos = 1.1f; 
	private const int invalidIndex = -1;

	//int rangeMax = 3;
	//int recordIndexX;
	//int recordIndexY;


	//int DestroyCubeScore = 0;//消除cube获得的分数
	//int DestroyCubeCount = 0;//消除cube的数量

	float cubeMoveTime = 0.8f;
	float cubeMoveTimeMin = 0.1f;

	bullet objBullet = null;	//未发射的球
	bullet objBulletFired = null; //已发射出去的球

	UILabel 		ScoreLabel = null; 
	UIProgressBar 	ProgressBar = null;
	UILabel 		mDestroyCubeCount = null;
//	UILabel			mDistanceLabel = null;
	GameObject		mShooter = null;

	public float MaxTime = 20.0f; 	//总的消耗时间
	float DeltaTime = 0;			//消耗的时间		

//	FileStream fs;
//	StreamWriter sw;

//	int colorCubeCount = 0;
	int indexDestory = 0;
	int mIndexXDestoryLevelUp = 0; //晋级动画消除行标记
//	int mAdvanceBaseCount = 0; //进阶基数, 游戏初始化的时候的赋值，随机一个数字，按照10:5:3:3:2的进阶比例来计算每个进阶指数需要消耗的数量

	public int mInitAdvanceBaseCount = 100;
	public int mInitDeltaCount = 20;

	bool mbGameing 		= true;		//游戏是否正在继续
	bool mbPlayLevelUp 	= false; 	//游戏是否在播放过场动画
	int DestroyCountOnce 	= 0; 	//一次消除cube的数量
	int DestroyCountAll 	= 0; 	//一关总共的消球数量
//	float mBaseTime = 0.1f;   //基础补偿时间

	GameObject mEndPanel; //结束窗口
	GameObject mBackGroud; //背景图

	// 碰撞处理需要的变量 start
	static public bool 		mIsHaveCollision = false; 	//是否有同色的cube和bullet发生了碰撞
	static public int 		mCollisionIndexX = invalidIndex	;	//发生碰撞的cube的X位置
	static public int 		mCollisionIndexY = invalidIndex;	//发生碰撞的cube的Y位置
	static public Color		mCollosionBulletColor; //发生膨胀的bullet的颜色
	// 碰撞处理需要的变量 end

	int mLevel = 1;		//玩家等级
	public int LevelCount = 30; //每关的要求消球数量

	static public Vector3 mBulletInitPos = new Vector3(4.9f, -2, 0);

//	float mDesignScreenHeight = 960.0f;

//	float mConstantForceZ = 0;

	Vector3 mScorePanelPos; //cube记分牌在世界坐标中的位置

	static public int sDestroyCubeCount = 0;

	private LineRenderer ropeLineRenderer;	//线段渲染器

	bool 	mBulletPickup = false; //子弹是否为弹弓状态

	Vector3 mBulletFireDirection; 	//子弹飞出去的方向
	float magnitude;

	public class grid
	{
		public Vector3 		pos;
		public cube 		cube; //null is have not, non-null is have cube
		public GameObject	labelObj;
	}

	static public Color[,]  colorArray = 
	{
		{//0
			new Color(235/255.0f, 110/255.0f, 149/255.0f), 
			new Color(113/255.0f, 199/255.0f, 212/255.0f),
			new Color(249/255.0f, 210/255.0f, 220/255.0f),
			new Color(205/255.0f, 136/255.0f, 184/255.0f),
			new Color(0, 179/255.0f, 196/255.0f),
			new Color(255/255.0f, 240/255.0f, 150/255.0f),
			new Color(240/255.0f, 211/255.0f, 0),
		},
		{//1
			new Color(216/255.0f, 34/255.0f, 13/255.0f), 
			new Color(191/255.0f, 221/255.0f, 163/255.0f),
			new Color(255/255.0f, 233/255.0f, 169/255.0f),
			new Color(240/255.0f, 145/255.0f, 146/255.0f),
			new Color(249/255.0f, 209/255.0f, 212/255.0f),
			new Color(209/255.0f, 186/255.0f, 217/255.0f),
			new Color(101/255.0f, 170/255.0f, 221/255.0f),
		},
		{//2
			new Color(233/255.0f, 71/255.0f, 70/255.0f), 
			new Color(244/255.0f, 164/255.0f, 92/255.0f),
			new Color(255/255.0f, 230/255.0f, 135/255.0f),
			new Color(238/255.0f, 120/255.0f, 54/255.0f),
			new Color(159/255.0f, 0, 82/255.0f),
			new Color(233/255.0f, 83/255.0f, 137/255.0f),
			new Color(241/255.0f, 157/255.0f, 180/255.0f),
		},
		{//3
			new Color(159/255.0f, 0, 82/255.0f), 
			new Color(235/255.0f, 97/255.0f, 111/255.0f),
			new Color(252/255.0f, 226/255.0f, 196/255.0f),
			new Color(192/255.0f, 220/255.0f, 151/255.0f),
			new Color(65/255.0f, 178/255.0f, 102/255.0f),
			new Color(237/255.0f, 186/255.0f, 192/255.0f),
			new Color(0, 173/255.0f, 169/255.0f),
		},
		{//4
			new Color(234/255.0f, 97/255.0f, 137/255.0f), 
			new Color(249/255.0f, 193/255.0f, 100/255.0f),
			new Color(254/255.0f, 235/255.0f, 200/255.0f),
			new Color(243/255.0f, 168/255.0f, 187/255.0f),
			new Color(230/255.0f, 28/255.0f, 100/255.0f),
			new Color(234/255.0f, 85/255.0f, 0),
			new Color(102/255.0f, 43/255.0f, 43/255.0f),
		},
		{//5
			new Color(230/255.0f, 28/255.0f, 100/255.0f), 
			new Color(107/255.0f, 200/255.0f, 242/255.0f),
			new Color(255/255.0f, 248/255.0f, 165/255.0f),
			new Color(241/255.0f, 157/255.0f, 180/255.0f),
			new Color(80/255.0f, 100/255.0f, 174/255.0f),
			new Color(204/255.0f, 125/255.0f, 177/255.0f),
			new Color(183/255.0f, 11/255.0f, 99/255.0f),
		},
		{//6
			new Color(0, 160/255.0f, 202/255.0f), 
			new Color(187/255.0f, 170/255.0f, 210/255.0f),
			new Color(212/255.0f, 236/255.0f, 243/255.0f),
			new Color(236/255.0f, 122/255.0f, 172/255.0f),
			new Color(230/255.0f, 28/255.0f, 100/255.0f),
			new Color(228/255.0f, 234/255.0f, 141/255.0f),
			new Color(171/255.0f, 205/255.0f, 3/255.0f),
		},
		{//7
			new Color(235/255.0f, 97/255.0f, 111/255.0f), 
			new Color(245/255.0f, 176/255.0f, 135/255.0f),
			new Color(251/255.0f, 218/255.0f, 200/255.0f),
			new Color(239/255.0f, 133/255.0f, 140/255.0f),
			new Color(214/255.0f, 0, 111/255.0f),
			new Color(253/255.0f, 210/255.0f, 62/255.0f),
			new Color(190/255.0f, 0, 34/255.0f),
		},
		{//8
			new Color(147/255.0f, 209/255.0f, 211/255.0f), 
			new Color(203/255.0f, 227/255.0f, 185/255.0f),
			new Color(235/255.0f, 245/255.0f, 236/255.0f),
			new Color(247/255.0f, 199/255.0f, 205/255.0f),
			new Color(238/255.0f, 134/255.0f, 154/255.0f),
			new Color(123/255.0f, 194/255.0f, 120/255.0f),
			new Color(199/255.0f, 15/255.0f, 100/255.0f),
		},
		{//9
			new Color(217/255.0f, 51/255.0f, 96/255.0f), 
			new Color(239/255.0f, 147/255.0f, 187/255.0f),
			new Color(250/255.0f, 219/255.0f, 217/255.0f),
			new Color(246/255.0f, 174/255.0f, 84/255.0f),
			new Color(227/255.0f, 82/255.0f, 84/255.0f),
			new Color(157/255.0f, 0, 72/255.0f),
			new Color(178/255.0f, 80/255.0f, 26/255.0f),
		},
		{//10
			new Color(203/255.0f, 227/255.0f, 185/255.0f), 
			new Color(244/255.0f, 178/255.0f, 186/255.0f),
			new Color(246/255.0f, 250/255.0f, 237/255.0f),
			new Color(250/255.0f, 219/255.0f, 217/255.0f),
			new Color(238/255.0f, 134/255.0f, 161/255.0f),
			new Color(147/255.0f, 209/255.0f, 211/255.0f),
			new Color(65/255.0f, 178/255.0f, 102/255.0f),
		},
		{//11
			new Color(230/255.0f, 0, 62/255.0f), 
			new Color(241/255.0f, 156/255.0f, 174/255.0f),
			new Color(255/255.0f, 228/255.0f, 96/255.0f),
			new Color(246/255.0f, 172/255.0f, 45/255.0f),
			new Color(234/255.0f, 85/255.0f, 41/255.0f),
			new Color(136/255.0f, 0, 68/255.0f),
			new Color(200/255.0f, 25/255.0f, 60/255.0f),
		},
		{//12
			new Color(214/255.0f, 139/255.0f, 185/255.0f), 
			new Color(216/255.0f, 204/255.0f, 72/255.0f),
			new Color(242/255.0f, 226/255.0f, 238/255.0f),
			new Color(236/255.0f, 177/255.0f, 207/255.0f),
			new Color(124/255.0f, 159/255.0f, 211/255.0f),
			new Color(135/255.0f, 82/255.0f, 157/255.0f),
			new Color(177/255.0f, 164/255.0f, 14/255.0f),
		},
		{//13
			new Color(234/255.0f, 85/255.0f, 41/255.0f), 
			new Color(237/255.0f, 121/255.0f, 134/255.0f),
			new Color(237/255.0f, 241/255.0f, 176/255.0f),
			new Color(136/255.0f, 200/255.0f, 151/255.0f),
			new Color(48/255.0f, 113/255.0f, 184/255.0f),
			new Color(127/255.0f, 199/255.0f, 239/255.0f),
			new Color(255/255.0f, 228/255.0f, 96/255.0f),
		},
		{//14
			new Color(158/255.0f, 79/255.0f, 30/255.0f), 
			new Color(234/255.0f, 85/255.0f, 80/255.0f),
			new Color(255/255.0f, 232/255.0f, 158/255.0f),
			new Color(112/255.0f, 200/255.0f, 218/255.0f),
			new Color(110/255.0f, 96/255.0f, 168/255.0f),
			new Color(238/255.0f, 134/255.0f, 167/255.0f),
			new Color(77/255.0f, 187/255.0f, 170/255.0f),
		},
		{//15
			new Color(158/255.0f, 79/255.0f, 30/255.0f), 
			new Color(186/255.0f, 141/255.0f, 190/255.0f),
			new Color(254/255.0f, 235/255.0f, 200/255.0f),
			new Color(245/255.0f, 175/255.0f, 125/255.0f),
			new Color(125/255.0f, 70/255.0f, 152/255.0f),
			new Color(138/255.0f, 199/255.0f, 130/255.0f),
			new Color(98/255.0f, 94/255.0f, 168/255.0f),
		},
		{//16
			new Color(241/255.0f, 141/255.0f, 0), 
			new Color(243/255.0f, 168/255.0f, 187/255.0f),
			new Color(255/255.0f, 233/255.0f, 169/255.0f),
			new Color(247/255.0f, 185/255.0f, 120/255.0f),
			new Color(232/255.0f, 82/255.0f, 152/255.0f),
			new Color(236/255.0f, 110/255.0f, 116/255.0f),
			new Color(166/255.0f, 44/255.0f, 56/255.0f),
		},
		{//17
			new Color(241/255.0f, 141/255.0f, 0), 
			new Color(149/255.0f, 183/255.0f, 225/255.0f),
			new Color(226/255.0f, 237/255.0f, 186/255.0f),
			new Color(241/255.0f, 158/255.0f, 194/255.0f),
			new Color(73/255.0f, 188/255.0f, 189/255.0f),
			new Color(83/255.0f, 92/255.0f, 168/255.0f),
			new Color(232/255.0f, 68/255.0f, 120/255.0f),
		},
		{//18
			new Color(249/255.0f, 194/255.0f, 111/255.0f), 
			new Color(160/255.0f, 216/255.0f, 239/255.0f),
			new Color(237/255.0f, 241/255.0f, 187/255.0f),
			new Color(244/255.0f, 180/255.0f, 208/255.0f),
			new Color(107/255.0f, 200/255.0f, 242/255.0f),
			new Color(168/255.0f, 209/255.0f, 118/255.0f),
			new Color(126/255.0f, 152/255.0f, 206/255.0f),
		},
		{//19
			new Color(30/255.0f, 184/255.0f, 206/255.0f), 
			new Color(253/255.0f, 208/255.0f, 0),
			new Color(255/255.0f, 238/255.0f, 125/255.0f),
			new Color(238/255.0f, 134/255.0f, 167/255.0f),
			new Color(234/255.0f, 85/255.0f, 20/255.0f),
			new Color(156/255.0f, 95/255.0f, 163/255.0f),
			new Color(183/255.0f, 212/255.0f, 66/255.0f),
		},
		{//20
			new Color(235/255.0f, 97/255.0f, 111/255.0f), 
			new Color(216/255.0f, 204/255.0f, 72/255.0f),
			new Color(237/255.0f, 240/255.0f, 164/255.0f),
			new Color(239/255.0f, 132/255.0f, 92/255.0f),
			new Color(52/255.0f, 137/255.0f, 202/255.0f),
			new Color(141/255.0f, 196/255.0f, 74/255.0f),
			new Color(246/255.0f, 191/255.0f, 215/255.0f),
		},
		{//21
			new Color(219/255.0f, 90/255.0f, 134/255.0f), 
			new Color(216/255.0f, 204/255.0f, 72/255.0f),
			new Color(247/255.0f, 237/255.0f, 161/255.0f),
			new Color(238/255.0f, 134/255.0f, 161/255.0f),
			new Color(133/255.0f, 116/255.0f, 0),
			new Color(95/255.0f, 193/255.0f, 199/255.0f),
			new Color(0, 176/255.0f, 150/255.0f),
		},
		{//22
			new Color(207/255.0f, 220/255.0f, 41/255.0f), 
			new Color(145/255.0f, 210/255.0f, 228/255.0f),
			new Color(256/255.0f, 250/255.0f, 188/255.0f),
			new Color(236/255.0f, 177/255.0f, 207/255.0f),
			new Color(136/255.0f, 171/255.0f, 218/255.0f),
			new Color(185/255.0f, 121/255.0f, 177/255.0f),
			new Color(233/255.0f, 84/255.0f, 113/255.0f),
		},
		{//23
			new Color(166/255.0f, 97/255.0f, 163/255.0f), 
			new Color(228/255.0f, 234/255.0f, 141/255.0f),
			new Color(207/255.0f, 220/255.0f, 41/255.0f),
			new Color(197/255.0f, 154/255.0f, 197/255.0f),
			new Color(127/255.0f, 60/255.0f, 132/255.0f),
			new Color(227/255.0f, 108/255.0f, 165/255.0f),
			new Color(191/255.0f, 48/255.0f, 140/255.0f),
		},
		{//24
			new Color(21/255.0f, 174/255.0f, 103/255.0f), 
			new Color(225/255.0f, 163/255.0f, 199/255.0f),
			new Color(242/255.0f, 226/255.0f, 229/255.0f),
			new Color(180/255.0f, 216/255.0f, 151/255.0f),
			new Color(226/255.0f, 95/255.0f, 158/255.0f),
			new Color(110/255.0f, 96/255.0f, 168/255.0f),
			new Color(141/255.0f, 65/255.0f, 137/255.0f),
		},
		{//25
			new Color(144/255.0f, 102/255.0f, 169/255.0f), 
			new Color(157/255.0f, 201/255.0f, 42/255.0f),
			new Color(231/255.0f, 221/255.0f, 238/255.0f),
			new Color(167/255.0f, 211/255.0f, 151/255.0f),
			new Color(166/255.0f, 116/255.0f, 176/255.0f),
			new Color(251/255.0f, 216/255.0f, 181/255.0f),
			new Color(239/255.0f, 132/255.0f, 101/255.0f),
		},
		{//26
			new Color(0, 128/255.0f, 119/255.0f), 
			new Color(222/255.0f, 114/255.0f, 145/255.0f),
			new Color(240/255.0f, 194/255.0f, 208/255.0f),
			new Color(122/255.0f, 191/255.0f, 197/255.0f),
			new Color(191/255.0f, 13/255.0f, 91/255.0f),
			new Color(183/255.0f, 115/255.0f, 166/255.0f),
			new Color(159/255.0f, 52/255.0f, 127/255.0f),
		},
		{//27
			new Color(0, 123/255.0f, 187/255.0f), 
			new Color(234/255.0f, 97/255.0f, 153/255.0f),
			new Color(211/255.0f, 230/255.0f, 246/255.0f),
			new Color(238/255.0f, 135/255.0f, 180/255.0f),
			new Color(223/255.0f, 16/255.0f, 121/255.0f),
			new Color(238/255.0f, 238/255.0f, 141/255.0f),
			new Color(201/255.0f, 213/255.0f, 0),
		},
		{//28
			new Color(238/255.0f, 134/255.0f, 167/255.0f), 
			new Color(195/255.0f, 226/255.0f, 204/255.0f),
			new Color(224/255.0f, 240/255.0f, 226/255.0f),
			new Color(246/255.0f, 190/255.0f, 200/255.0f),
			new Color(246/255.0f, 172/255.0f, 45/255.0f),
			new Color(234/255.0f, 97/255.0f, 137/255.0f),
			new Color(82/255.0f, 185/255.0f, 141/255.0f),
		},
		{//29
			new Color(236/255.0f, 110/255.0f, 116/255.0f), 
			new Color(254/255.0f, 233/255.0f, 180/255.0f),
			new Color(246/255.0f, 189/255.0f, 184/255.0f),
			new Color(233/255.0f, 83/255.0f, 131/255.0f),
			new Color(216/255.0f, 34/255.0f, 13/255.0f),
			new Color(240/255.0f, 131/255.0f, 31/255.0f),
			new Color(105/255.0f, 14/255.0f, 40/255.0f),
		},

	};


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

	Color getColor()
	{
		int index = 0;
		//获得色彩
		if(mLevel <= 5 )
		{
			//如果等级小于等于5级，就在colorArray[0]中选择颜色
			//一级是三种色彩，2级4种，3级5种，4级6种 5级7种
			if(mLevel == 1)
			{
				index = Random.Range(0, 3);
				return colorArray[0,index];

			}
			else if(mLevel == 2)
			{
				index = Random.Range(0, 4);
				return colorArray[0, index];
			}
			else if(mLevel == 3)
			{
				index = Random.Range(0, 5);
				return colorArray[0, index];
			}
			else if(mLevel == 4)
			{
				index = Random.Range(0, 6);
				return colorArray[0, index];
			}
			else if(mLevel == 5)
			{
				index = Random.Range(0, 7);
				return colorArray[0, index];
			}
			else
			{
				index = Random.Range(0, 3);
				return colorArray[0, index];
			}

		}
		else
		{
			//大于5级，就每级就是一个colorArray[2...]中的一个元素
			//先出5中颜色，当有了消除数后，再从7个颜色中选
			int range = mLevel - 5;
			if(range >= colorArray.Length) range = colorArray.Length - 1;
			if(DestroyCountAll == 0)
			{
				//消球数为0，就从前几种色中选择
				if(mLevel < 10)
				{
					index = Random.Range(0, 4);
					return colorArray[range, index];
				}
				else if(mLevel < 15)
				{
					index = Random.Range(0, 5);
					return colorArray[range, index];
				}
				else if(mLevel < 20)
				{
					index = Random.Range(0, 6);
					return colorArray[range, index];
				}
				else
				{
					index = Random.Range(0, 7);
					return colorArray[range, index];
				}


			}
			else
			{
				//消球数大于0， 就从7色中选择
				index = Random.Range(0, 7);
				return colorArray[range, index];
			}
		}

	}

//	void RangeColorArray()
//	{
//		int i = 0;
//		for ( i = colorArray.Length - 1; i > 0; i--)
//		{
//			int p = Random.Range(0, i);
//			Color temp = colorArray[p];
//			colorArray[p] = colorArray[i];
//			colorArray[i] = temp;
//		}
//
//		for ( i = RotationArray.Length - 1; i > 0; i--)
//		{
//			int p = Random.Range(0, i);
//			int temp = RotationArray[p];
//			RotationArray[p] = RotationArray[i];
//			RotationArray[i] = temp;
//		}
//	}


	// Use this for initialization
	void Start () {

		GameObject StartButton = GameObject.Find ("Start");
		UIEventListener.Get(StartButton).onClick = OnStartClick;

		mEndPanel 			= GameObject.Find ("EndPanel");
		mBackGroud 			= GameObject.Find ("black_bg"); //背景图
		ScoreLabel 			= GameObject.Find ("ScoreLabel").GetComponent<UILabel>();
		ProgressBar 		= GameObject.Find ("BackgroundProgress").GetComponent<UIProgressBar> ();
		NGUITools.SetActive(ProgressBar.gameObject, false);
		mDestroyCubeCount 	= GameObject.Find ("DestroyCubeCount").GetComponent<UILabel>();
//		mDistanceLabel		= GameObject.Find ("Distance").GetComponent<UILabel>();
		mShooter			= GameObject.Find("Shooter");
		ropeLineRenderer	= GameObject.Find ("Rope").GetComponent<LineRenderer>();
		ropeLineRenderer.material.color = new Color(1,0,0);
		ropeLineRenderer.SetWidth(0.2f, 0.2f);
		ropeLineRenderer.SetVertexCount(3);
			
		GameInit();	//游戏初始化

//		fs = new FileStream ("color_calculate.txt", FileMode.OpenOrCreate);
//		sw = new StreamWriter (fs);

		//计算ScorePanel在world世界中的位置
		Camera worldCamera = NGUITools.FindCameraForLayer(gridArray[4, 4].cube.gameObject.layer);
		Camera guiCamera = NGUITools.FindCameraForLayer(GameObject.Find("Score_cube").gameObject.layer);

		mScorePanelPos = guiCamera.WorldToScreenPoint(GameObject.Find("Score_cube").transform.position);
		mScorePanelPos = worldCamera.ScreenToWorldPoint(mScorePanelPos);
		mScorePanelPos.z = -1;
		Debug.Log("world pos is " + mScorePanelPos);

	}
	
	// Update is called once per frame
	void Update () {

	if(!mbGameing) return;

	mDestroyCubeCount.text = string.Format("{0}/{1}", sDestroyCubeCount, LevelCount);

	if(mbPlayLevelUp) return;

		if(DeltaTime < 0)
		{
			DeltaTime = 0;
		}
		if (DeltaTime > MaxTime)
		{
			DeltaTime = MaxTime;
		}

		DeltaTime = DeltaTime + Time.deltaTime;

//		ProgressBar.value = (MaxTime-DeltaTime)/MaxTime;
//
//		if((ProgressBar.value < 0.0001f) && (DestroyCountAll < LevelCount))
//		{
//			//小于0.1%的时候退出
//			mbGameing = false;
//		}

		if(!mbGameing)
		{
			//游戏结束唤醒结束界面
			NGUITools.SetActive(mEndPanel, true);
			NGUITools.SetActive(mBackGroud, true);
		}

//		mDestroyCubeCount.text = string.Format("{0}/{1}", DestroyCountAll, LevelCount);
		


		int nbTouches = Input.touchCount;
		if (nbTouches > 0)
		{
			UnityEngine.Touch touch = Input.GetTouch(0);
			TouchPhase phase = touch.phase;
			switch(phase)
			{
			case TouchPhase.Began:
//				Debug.Log("New touch detected at position " + touch.position + " , index " + touch.fingerId);

				mBulletPickup = false;
				startTouch = touch;
				//处理弹簧
				Ray ray = Camera.main.ScreenPointToRay(new Vector3(touch.position.x, touch.position.y, 0));//把鼠标的点定义一个射线
//				Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;//光线投射碰撞c
				SphereCollider collider = objBullet.GetComponent<SphereCollider>();
				if (collider.Raycast(ray, out hit, 100.0f))//光线投射 选择小鸟 [distance光线的长度。]
                {
                	//接触点碰到球了
					Debug.Log("collider is touched");
					mBulletPickup = true;
                }

				break;
					
			case TouchPhase.Moved:
				{
					if(mBulletPickup)
					{
						if(objBullet == null)
						{
							Debug.Log("objBullet is null");
							return;
						}
						Vector3 lastKnowPosition = Camera.main.ScreenToWorldPoint(
							new Vector3(touch.position.x, touch.position.y, 0));
						lastKnowPosition.z = objBullet.transform.position.z;
						mBulletFireDirection = mShooter.transform.position - lastKnowPosition;
						mBulletFireDirection.Normalize();
						magnitude = Mathf.Min(Vector3.Distance(mShooter.transform.position, lastKnowPosition), 1.5f);

						objBullet.transform.position = mShooter.transform.position + mBulletFireDirection*(-magnitude);

						ropeLineRenderer.SetPosition(0, new Vector3(3.9f, -2, 0));//弹弓橡皮筋点
						ropeLineRenderer.SetPosition(1, objBullet.transform.position);//小鸟点
						ropeLineRenderer.SetPosition(2, new Vector3(5.9f, -2, 0));//弹弓橡皮筋点

					}
				}
				break;

			case TouchPhase.Ended:
//				Debug.Log("Touch index " + touch.fingerId + " ended at position " + touch.position);
				endTouch = touch;

				if(mBulletPickup)
				{

					initConstantForce = mBulletFireDirection * 500.0f * magnitude;//速度;
					Debug.Log("direction is "+mBulletFireDirection + "magnitude is " + magnitude + 
								"initConstantForce is" + initConstantForce);
					//fire bullet
					FireBullet ();	
				}

//				//calculate launch power
//				Vector2 deltaVector = endTouch.position - startTouch.position;
////				Vector2 temp = deltaVector;
//				float Distance = Vector2.Distance(endTouch.position, startTouch.position);
//				if(Distance < 25) return;
////				float ratio = mDesignScreenHeight / Screen.height;
////				Distance *= ratio;
//				float MaxDis = 350;
//				float MinDis = 50;
//				if(Distance < MinDis) Distance = MinDis;
//				if(Distance > MaxDis) Distance = MaxDis;
//				deltaVector.Normalize();
//
//				//公式
//				//Force = 2s/(t*t);	
//				float s = 2.5f + (Distance-50) * 0.033f;
////				if(s > 12.5) s = 12.5f;
//				if(s > 11) s = 11;
//
//				//0.3是bullet下落的时间
//				mConstantForceZ = ( 2 * s) / (0.62f * 0.62f);
//
//				initConstantForce = new Vector3(deltaVector.x * mConstantForceZ , deltaVector.y * mConstantForceZ, 0);
//				Debug.Log("mConstantForceZ is " + mConstantForceZ);
//				Debug.Log("constant Force is " + initConstantForce);
////				Debug.Log("s is " + s);
////				float t = s/20.0f;
////				mConstantForceZ = (2 * 1.1f) / (t * t); //1.1f是bullet球在
//				
//				//fire bullet
//				FireBullet ();	
				break;
			}
		}

	}

	//游戏初始化函数
	void GameInit()
	{
		//游戏开始
		mbGameing = true;

//		rangeMax = 3;	//色彩范围初始化	 
		//时间变化量
		DeltaTime = 0;
		//一次消除的数量置0
		DestroyCountOnce = 0;
		DestroyCountAll = 0; 	//一关消球的数量
		sDestroyCubeCount = 0;
		mLevel = 1;	//初始化等级
		mIndexXDestoryLevelUp = 0;
		//随机颜色
//		RangeColorArray ();
		
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
//					int index = Random.Range(0, rangeMax);
					Renderer render = cubObj.GetComponent<Renderer>();
					render.material.color = getColor();
//					Debug.Log("color is {0}"+ render.material.color);

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

		//已发射的球初始化
		if(objBulletFired != null)
		{
			DestroyObject(objBulletFired.gameObject);
			objBulletFired = null;
		}

		//初始化UI显示
//		DestroyCubeScore = 0;
//		DestroyCubeCount = 0;

		ScoreLabel.text = string.Format ("Level:{0}", mLevel);
//		mDestroyCubeCount.text = string.Format("{0}/{1}", DestroyCountAll, LevelCount);
		mDestroyCubeCount.text = string.Format("{0}/{1}", sDestroyCubeCount, LevelCount);
		//关闭结束界面
		NGUITools.SetActive(mEndPanel, false);
		NGUITools.SetActive(mBackGroud, false);

		mIsHaveCollision = false; 
		mCollisionIndexX = invalidIndex;
		mCollisionIndexY = invalidIndex;

		initConstantForce = Vector3.zero;
	
	}	


	void FireBullet () 
	{
		Debug.Log("FireBullet is called");
		if (objBullet != null)
		{
			Rigidbody rigid = objBullet.GetComponent<Rigidbody> ();
//			rigid.isKinematic = false;
			//z == 2f 是设定了下落时间为0.5秒，下落1个单位， v=s/t 等于2
//			rigid.velocity = new Vector3(initConstantForce.x,initConstantForce.y,0);
//			rigid.AddForce(initConstantForce);
			
			rigid.velocity = new Vector3(0,30,-1);
			rigid.isKinematic = false;
			rigid.useGravity = true;
//			rigid.AddForce(new Vector3(0,500,-5));
//			ConstantForce constantForce = objBullet.GetComponent<ConstantForce>();
//			constantForce.relativeForce = initConstantForce;

			objBulletFired = objBullet;
			objBullet = null;

			Invoke ("createNewBullet", 0.3f);
		}
	}

	void createNewBullet()
	{
		if (objBullet != null) 
		{
			return;
		}
						
		objBullet = (bullet)Instantiate(bulletObject, mBulletInitPos, transform.rotation);

		Renderer render = objBullet.GetComponent<Renderer>();
		render.material.color = getColor();

		Rigidbody rigid = objBullet.GetComponent<Rigidbody> ();
		rigid.isKinematic = true;
	}

	public void DealCollision(int indexX, int indexY, Color materialColor)
	{

//		recordIndexX = indexX;
//		recordIndexY = indexY;
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
//			Debug.Log("DestroyCountOnce clear");
			dealDestroyCube();



//			iTween.Stop(gameObject);

//			Destroy(gameObject);
		}
	}

	cube findCube(int x, int y, out int finalY)
	{
		if (x >= maxX || y >= maxY) 
		{
			finalY = invalidIndex;
			return null;
		}
		
		if (null != gridArray[x,y].cube) 
		{
			//have, move
			finalY = y;
			return gridArray[x,y].cube;
			
		} 
		else
		{
			//no, go on find
			return findCube(x, y+1, out finalY);
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
		if(gridArray [x, y].cube == null)
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
//			DestroyCubeCount++;
//			Debug.Log("DestroyCubeCount:"+DestroyCubeCount);
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

	//晋级的过场效果播放
	void LevelUpPlay()
	{
//		Debug.Log("mIndexXDestoryLevelUp is "+mIndexXDestoryLevelUp);
		if(mbPlayLevelUp)
		{
			//表现为一层一层的消除cube
			if(mIndexXDestoryLevelUp < 0 || mIndexXDestoryLevelUp >= maxX)
			{
				mbPlayLevelUp = false;
				mIndexXDestoryLevelUp = 0;
				mLevel++;					//晋级等级+1, 要表现一下UI效果
				//如果每关的消球数量大于关卡要求的数量，就晋级
			 	DestroyCountAll		= 0;	//每关的消球数量清零
			 	sDestroyCubeCount 	= 0;
			 	DestroyCountOnce	= 0;	//一次消球的数量清零
				DeltaTime		 	= 0;	//重置倒计时时间
				ScoreLabel.text = string.Format ("Level:{0}", mLevel);

				//转一下等级牌
				iTween.PunchRotation( ScoreLabel.gameObject, iTween.Hash("y", 180, "time", 1.0f));

				Debug.Log("LevelUpPlay's upFindCube is called");
				//替换空缺的cube
				Invoke ("upFindCube", 0.5f);
			}
			else
			{
				for (int x = 0; x < maxX; x++) 
				{
					if(gridArray[x,mIndexXDestoryLevelUp].cube != null)
					{
						Destroy(gridArray[x,mIndexXDestoryLevelUp].cube.gameObject);
						gridArray[x, mIndexXDestoryLevelUp].cube = null;
					}
				}

				mIndexXDestoryLevelUp++;

				Invoke ("LevelUpPlay", 0.1f);
			}
		}

	}


	void caluDestroyScore()
	{
		//要求20秒消除30个球
		//每消除30个就可以进一级
		 if(DestroyCountAll >= LevelCount)
		 {
			mbPlayLevelUp		= true;	//播放升级动画的标志置为true

			Invoke("LevelUIEffect", 1.0f); //cube的飞入动画播完，播放相机震动动画
		 	
		 }
		 else
		 {
	//		Invoke ("upFindCube", 0.2f);
		 }

	}

	void dealDestroyCube()
	{
		if (indexDestory < 0 || indexDestory >= maxX) 
		{
			if(DestroyCountAll < LevelCount)
			{
				Invoke ("upFindCube", 0.5f);
			}
			else
			{
				//计算本次消除的得分
				caluDestroyScore();
			}

		}
		else
		{
			bool isSkip = true;

			for (int y = 0; y < maxY; y++) 
			{
				if(gridArray[indexDestory,y].cube != null)
				{
					if(	gridArray[indexDestory,y].cube.IsKilled )
					{

//						Destroy(gridArray[indexDestory,y].cube.gameObject);
				
						Hashtable args = new Hashtable();
						float dis = Mathf.Abs(mScorePanelPos.y - gridArray[indexDestory, y].cube.transform.position.y);
						float deltaY = dis / 2.0f;

						float offsetX;
						if(indexDestory <= 4)
						{
							offsetX = gridArray[indexDestory, y].cube.transform.position.x - 1;
						}
						else 
						{
							offsetX = gridArray[indexDestory, y].cube.transform.position.x + 1;
						}

						Vector3[] paths = 
						{
							new Vector3(offsetX, gridArray[indexDestory, y].cube.transform.position.y+deltaY, -2),
							mScorePanelPos,
						};

//	
						iTween.ScaleTo(gridArray[indexDestory, y].cube.gameObject,
							iTween.Hash("scale", new Vector3(0.3f, 0.3f, 0.3f), "easetype", iTween.EaseType.easeInSine,
								"time",1.0f));
						iTween.RotateAdd(gridArray[indexDestory, y].cube.gameObject,iTween.Hash("amount", new Vector3(60, 120, 60), "easetype", iTween.EaseType.easeInSine,
							"time",1.0f));
						args.Add("path", paths);
						args.Add("time",1.0f);
						args.Add("easetype", iTween.EaseType.easeInSine);
						args.Add("oncomplete", "gotoScorePanelAnimEnd");
						iTween.MoveTo(gridArray[indexDestory, y].cube.gameObject, args);
					
						gridArray[indexDestory, y].cube = null;

						DestroyCountOnce++;
						DestroyCountAll++;
	//					Debug.Log("DestroyCountOnce:"+DestroyCountOnce);
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
				Invoke ("dealDestroyCube", 0.05f);
			}
		}
	}

	void upFindCube()
	{
		Debug.Log("upFindCube is called");
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
					int final_y;
					cube objectCube = findCube(x, y, out final_y);
//					Debug.Log("final_y is "+ final_y);
					
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
						if(final_y != invalidIndex)
						{
							args.Add("time", cubeMoveTimeMin*(final_y-y));
//							Debug.Log("move time  is "+ (final_y-y));
						}
						else
						{
							args.Add("time", cubeMoveTime);
							Debug.Log("move time  is invalid");
						}
						//						args.Add("speed",5f);
						args.Add("easetype", iTween.EaseType.easeInSine);
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

//						int index = Random.Range(0, rangeMax);
						Renderer render = newCube.GetComponent<Renderer>();
//						render.material.color = colorArray[index];
						render.material.color = getColor();
						render.enabled = false;
//						newCube.transform.Rotate(new Vector3(0, RotationArray[index], 0));

						gridArray[x, y].cube = newCube;
						
						gridArray[x, y].cube.setIndex(x, y);
						
//						Debug.Log("create new cube indexX is "+recordIndexX+" indexY is "+y);
						
						Hashtable args = new Hashtable();
						//args.Add("time",1f* (generateY - y));
						args.Add("time",cubeMoveTimeMin * blankCount);
						//						args.Add("speed",5f);
						args.Add("easetype", iTween.EaseType.easeInSine);
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

			//发生了bullet和cube的碰撞，就把飞出去的球的引用取消掉
			objBulletFired = null;
		}
	}

	void LevelUIEffect()
	{
		Debug.Log("LevelUIEffect is called");

		iTween.ShakePosition(Camera.main.gameObject, iTween.Hash("y", 0.3f, "time", 1.0f));

		Invoke ("LevelUpPlay", 1.0f); //震动相机播完，升级动画
	}
}
