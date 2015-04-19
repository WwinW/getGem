using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class Create : MonoBehaviour {
	public GameObject[] Cubes;
	public Ray myRay;
	public RaycastHit Hit;
    Vector3 Position1;
	Vector3 Position2;
	GameObject Cube1;
	GameObject Cube2;
	int Click;
	bool Checked;
	bool GamerOver;
	private Vector3 Direction; 
	private int RowSames = 1;
    private int ColumSames = 1;
	private int Score;
	private int Grade;
	private float GameTime=100f;
	public GameObject[,] myGameObject=new GameObject[9,9];	
	void Start () 
	{	
	  Creatground();
	  Check();
	}
	void Update () 
	{
		if(GamerOver==false)
		{
	  	myRay =GetComponent<Camera>().ScreenPointToRay(Input.mousePosition);
	    if(Physics.Raycast(myRay, out Hit))
		{
			if(Input.GetMouseButtonDown(0))
			{
				Click++;
				Move();
			}
		}
		if(Click==2)
		{
			Click=0;
		}
		GameTime-=Time.deltaTime;
		}
	}
	void OnGUI()
	{
		GUI.Button(new Rect(0,0,100,25),"GameTime:"+GameTime);
		GUI.Button(new Rect(110,0,100,25),"Score:"+Score);
		if(GameTime<0)
		{
			GamerOver=true;
			GUI.Button(new Rect(Screen.width/2-50,Screen.height/2-25,100,50),"GAME OVER");
		}
	}
	void Move()
	{
		if(Click==1)
		{
			if(Input.GetMouseButtonDown(0)&&Click==1)
			{ 
				
				Position1=Hit.collider.transform.position;
				Cube1=Hit.collider.gameObject;
			}
		}
		if(Click==2)
		{
			if(Input.GetMouseButtonDown(0)&&Click==2)
			{ 
				
				Position2=Hit.collider.transform.position;
				Cube2=Hit.collider.gameObject;
			}
		}
		if(Click==2&&Vector3.Distance(Position1,Position2)==1)
		{ 
			Click=0;
			GameObject GameObjecttemp1= myGameObject[(int)Position1.x,(int)Position1.y];
			GameObject GameObjecttemp2= myGameObject[(int)Position2.x,(int)Position2.y];
			myGameObject[(int)Position1.x,(int)Position1.y]=GameObjecttemp2;
			myGameObject[(int)Position2.x,(int)Position2.y]=GameObjecttemp1;
			CheckData();
			if(Checked==true)
			{
			iTween.MoveTo(Cube1,iTween.Hash("position",Position2,"time",1f));
			iTween.MoveTo(Cube2,iTween.Hash("position",Position1,"time",1f,"oncomplete","Check","oncompletetarget",gameObject));
			}else
			{
			myGameObject[(int)Position1.x,(int)Position1.y]=GameObjecttemp1;
			myGameObject[(int)Position2.x,(int)Position2.y]=GameObjecttemp2;
			}
		}
			
	}
	void Creatground() 
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				int temp=Random.Range(0,8);
				GameObject myCube= Instantiate(Cubes[temp],new Vector3(i,j,0),Quaternion.identity)as GameObject;
				myGameObject[i,j]=myCube;

			
			}
		}
    }
	void CheckData()
	{
		Checked=false;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (j == 0)
				{
                    RowSames = 1;
				} else
                {
                    if (myGameObject[i, j - 1].name == myGameObject[i, j].name)
					{ 
						RowSames++;
					}else
					{
						if(RowSames>=3)
						{
							Checked=true;
						}
						 RowSames = 1;
					}
                }
                if (j==8&&RowSames >= 3)
                {
					Checked=true;
				}
		        if (j == 0)
				{
		            ColumSames = 1;
				} else
		        {
		            if (myGameObject[j - 1, i].name == myGameObject[j, i].name)
					{ 
						ColumSames++;
					}else
					{
						if(ColumSames>=3)
						{
							Checked=true;
						}
						 ColumSames = 1;
					}
					if(j==8&&ColumSames>=3)
					{
						Checked=true;
					}
				}
			}
		}
		RowSames = 1;
        ColumSames = 1;
	}
    void Check()
    {   

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (j == 0)
				{
                    RowSames = 1;
				} else
                {
                    if (myGameObject[i, j - 1].name == myGameObject[i, j].name)
					{ 
						RowSames++;
					}
                    else
                    {
                        if (RowSames >= 3)
                        {
							int a=0;
							GameTime+=RowSames;
							Score+=10*RowSames;
							List<GameObject> myCubetemp=new List<GameObject>();
                            for (int n = 0; n < RowSames; n++)
							{ 
								int temp=Random.Range(0,8);
								GameObject myCube= Instantiate(Cubes[temp],myGameObject[i,j-RowSames+n].transform.position+new Vector3(0,9-j+RowSames,0),Quaternion.identity)as GameObject;
								myCubetemp.Add(myCube);
								Destroy(myGameObject[i,j-RowSames+n]);
							}
                            for (int n = 0; n <9-j+RowSames; n++)
							{ 
								if(j+n>8)
								{
								    myGameObject[i,j-RowSames+n]=myCubetemp[a];
									a++;
								}else
								{
									myGameObject[i,j-RowSames+n]=myGameObject[i,j+n];
								}
								iTween.MoveTo(myGameObject[i,j-RowSames+n],iTween.Hash("position",new Vector3(i,j-RowSames+n,0),"time",1f,"oncomplete","Check","oncompletetarget",gameObject));
							}
                        }
                        RowSames = 1;
                    }
                    if (j==8&&RowSames >= 3)
                    {
							GameTime+=RowSames;
							Score+=10*RowSames;
       				        List<GameObject> myCubetemp=new List<GameObject>();
                            for (int n = 1; n <=RowSames; n++)
							{ 
								int temp=Random.Range(0,8);
								GameObject myCube= Instantiate(Cubes[temp],myGameObject[i,j-RowSames+n].transform.position+new Vector3(0,9-j+RowSames,0),Quaternion.identity)as GameObject;
								myCubetemp.Add(myCube);
								Destroy(myGameObject[i,j-RowSames+n]);
								myGameObject[i,j-RowSames+n]=myCubetemp[n-1];
								iTween.MoveTo(myGameObject[i,j-RowSames+n],iTween.Hash("position",new Vector3(i,j-RowSames+n,0),"time",1f,"oncomplete","Check","oncompletetarget",gameObject));
							}
					}
                }
                if (j == 0)
				{
                    ColumSames = 1;
				} else
                {
                    if (myGameObject[j - 1, i].name == myGameObject[j, i].name)
					{ 
						ColumSames++;
					}
                    else
                    {
                        if (ColumSames >= 3)
                        {
							GameTime+=ColumSames;
							Score+=10*ColumSames;
							int a=0;
							List<GameObject> myCubetemp=new List<GameObject>();
                            for (int n = 1; n <= ColumSames; n++)
							{ 
								int temp=Random.Range(0,8);
								GameObject myCube= Instantiate(Cubes[temp],myGameObject[j-ColumSames+n-1,i].transform.position+new Vector3(0,9-i,0),Quaternion.identity)as GameObject;
								myCubetemp.Add(myCube);
								Destroy(myGameObject[j-ColumSames+n-1,i]);
							}
                            for (int n = 1; n <= ColumSames; n++)
							{ 
								for(int m=0;m<9-i;m++)
								{
									if(i+m==8)
									{
										myGameObject[j-ColumSames+n-1,i+m]=myCubetemp[a];
										a++;
									}else
									{
										myGameObject[j-ColumSames+n-1,i+m]=myGameObject[j-ColumSames+n-1,i+m+1];
									}
							        iTween.MoveTo(myGameObject[j-ColumSames+n-1,i+m],iTween.Hash("position",new Vector3(j-ColumSames+n-1,i+m,0),"time",1f,"oncomplete","Check","oncompletetarget",gameObject));
								} 
							}
                        }
                       ColumSames = 1;
                    }
					if(j==8&&ColumSames>=3)
					{
						GameTime+=ColumSames;
						Score+=10*ColumSames;
						int a=0;
					    List<GameObject> myCubetemp=new List<GameObject>();
                        for (int n = 1; n <=ColumSames; n++)
						{ 
							int temp=Random.Range(0,8);
							GameObject myCube= Instantiate(Cubes[temp],myGameObject[j-ColumSames+n,i].transform.position+new Vector3(0,9-i,0),Quaternion.identity)as GameObject;
							myCubetemp.Add(myCube);
							Destroy(myGameObject[j-ColumSames+n,i]);
						}
                        for (int n = 1; n <= ColumSames; n++)
						{ 
							for(int m=0;m<9-i;m++)
							{
								if(i+m==8)
								{
									myGameObject[j-ColumSames+n,i+m]=myCubetemp[a];
									a++;
								}else
								{
									myGameObject[j-ColumSames+n,i+m]=myGameObject[j-ColumSames+n,i+m+1];
								}
						        iTween.MoveTo(myGameObject[j-ColumSames+n,i+m],iTween.Hash("position",new Vector3(j-ColumSames+n,i+m,0),"time",1f,"oncomplete","Check","oncompletetarget",gameObject));
							} 
						}
					}
                }

            }
        }

		RowSames = 1;
        ColumSames = 1;
    }
}
