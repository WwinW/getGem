using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms; 

public class GameCenter : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
		Social.localUser.Authenticate (ProcessAuthentication);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	//这个函数在授权完成后会被调用
	void ProcessAuthentication (bool success) {
		if (success) {
			Debug.Log ("Authenticated, checking achievements");
			//请求成就数据，并设置回调函数
			Social.LoadScores( "Leaderboard01", scores => {
				if(scores.Length > 0)
				{
					Debug.Log ("Got " + scores.Length + "scores");
					string myScores = "Leaderboard:\n";
					foreach(IScore score in scores)
						myScores += "\t" + score.userID + "" + score.formattedValue + "" + score.date + "\n";
							Debug.Log(myScores);
				}
				else
					Debug.Log("No scores loaded");
			});
		}
		else
			Debug.Log ("Failed to authenticate");
	}

	void ReportScore (long score, string leaderboardID)
	{
		Debug.Log("Reporting score" + score + "on leaderboard" + leaderboardID);
		Social.ReportScore(score, leaderboardID, success => {
			Debug.Log(success ? "Reported score successfully" : "Failed to report score");
		});
	}

	public void ShowLeaderboard()
	{
		if(Social.localUser.authenticated){
			Social.ShowLeaderboardUI();
		}
	}

}
