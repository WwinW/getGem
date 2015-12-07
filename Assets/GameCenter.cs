using UnityEngine;
using System;
using System.Collections;
using UnityEngine.SocialPlatforms; 
using UnityEngine.SocialPlatforms.GameCenter;

public class GameCenter : MonoBehaviour {

	public string leaderboardName = "color_pop_level";
	public string leaderboardID = "com.weiwei.getgems.color_pop_level";

	// Use this for initialization
	void Start () {


		GameObject.Find ("GameObject").GetComponent<study> ().UpdateRecord += onUpdateRecord;
		GameObject.Find	("GameObject").GetComponent<study> ().openRecord += onOpenRecord;


		#if UNITY_EDITOR
		Debug.Log("Unity Editor Authenticate is cancelled");

		#elif UNITY_IOS
		Social.localUser.Authenticate (ProcessAuthentication);

		#else
		Debug.Log("Any other platform Authenticate is cancelled");

		#endif

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	//这个函数在授权完成后会被调用
	void ProcessAuthentication (bool success) {
		if (success) {
			Debug.Log ("Authenticated, checking achievements");

		Social.LoadScores ("color_pop_level", scores => {

				if (scores.Length > 0) {
					// SHOW THE SCORES RECEIVED
					Debug.Log ("Received " + scores.Length + " scores");
					foreach(IScore score in scores)
					{
						if(study.mBestLevel < score.value)
						{
							study.mBestLevel = score.value;
						}
						
						Debug.Log("Received " + score.value + " scores");
						Debug.Log("Received leaderboardID is" + score.leaderboardID);

					}
				}
				else
					Debug.Log ("No scores have been loaded.");
				

			});

		}
		else
			Debug.Log ("Failed to authenticate");

	}

	void ReportScore (long score, string leaderboardID)
	{

		#if UNITY_EDITOR
		Debug.Log("Unity Editor ReportScore is cancelled");

		#elif UNITY_IOS
		if (Social.localUser.authenticated) {

			Debug.Log("Reporting score" + score + "on leaderboard" + leaderboardID);
			Social.ReportScore(score, "color_pop_level", success => {
				Debug.Log(success ? "Reported score successfully" : "Failed to report score");
			});
		}
		#else
		Debug.Log("Any other platform ReportScore is cancelled");

		#endif
	}

	void OnRecordClick(GameObject button)
	{
		
		ShowLeaderboard ();

	}

	public void ShowLeaderboard()
	{

		#if UNITY_EDITOR
		Debug.Log("Unity Editor ShowLeaderboardUI is cancelled");

		#elif UNITY_IOS
//		if(Social.localUser.authenticated){
//			Social.ShowLeaderboardUI();
//		}
		Social.ShowLeaderboardUI();
		#else
		Debug.Log("Any other platform ShowLeaderboardUI is cancelled");

		#endif
	}

	void onUpdateRecord(object sender, EventArgs e)
	{
		ReportScore (study.mBestLevel, leaderboardName);
		Debug.Log ("color_pop_level update best level");
	}

	void onOpenRecord(object sender, EventArgs e)
	{
		ShowLeaderboard ();
		Debug.Log ("ShowLeaderboard");
	}


}
