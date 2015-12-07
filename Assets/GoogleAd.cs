using UnityEngine;
using System;
using System.Collections;
using GoogleMobileAds.Api;


public class GoogleAd : MonoBehaviour {


	BannerView bannerView = null;
	InterstitialAd intersititial = null;

	// Use this for initialization
	void Start () {

		GameObject.Find ("GameObject").GetComponent<study> ().requestAdBanner += onRequestAdBanner;
		GameObject.Find ("GameObject").GetComponent<study> ().requestAdInterstitial += onRequestAdInterstitial;
		GameObject.Find ("GameObject").GetComponent<study> ().gameStart += onGameStart;
	
		//初始化条幅广告
		#if UNITY_ANDROID
		string adUnitId = "INSERT_ANDROID_BANNER_AD_UNIT_ID_HERE";
		#elif UNITY_IOS
		string adUnitId = "ca-app-pub-9899656300840160/8214927531";
		#else
		string adUnitId = "unexpected_platform";
		#endif
		//create a SmartBanner at the top of the screen
		bannerView = new BannerView(adUnitId, AdSize.SmartBanner, AdPosition.Bottom);



		//首次请求插页式广告
		RequestInterstitial();

	}


	// Update is called once per frame
	void Update () {

	}

	private void RequestBanner()
	{
		// create an empty ad request
		AdRequest request = new AdRequest.Builder ()
			.AddTestDevice("a522c3c8340193f88bb7db74f9509d5fbb875017") //add Test ipad
			.AddTestDevice("19ae7950fefa875bf456b92eb2e6dc7d71cb42a3")
			.Build();

		//load the banner with the request
		bannerView.LoadAd(request);

		bannerView.Show ();

	}

	private void RequestInterstitial()
	{
		Debug.Log("RequestInterstitial is called");
		//插页式广告
		#if UNITY_ANDROID
		string adUnitId = "INSERT_ANDROID_INTERSTITIAL_AD_UNIT_ID_HERE";
		#elif UNITY_IOS
		string adUnitId = "ca-app-pub-9899656300840160/6319391939";
		#else
		string adUnitId = "unexpected_platform";
		#endif
		//Initialize an IntersititalAd.
		intersititial = new InterstitialAd(adUnitId);
		//Create an empty ad request
		AdRequest request = new AdRequest.Builder()
			.AddTestDevice("a522c3c8340193f88bb7db74f9509d5fbb875017")
			.AddTestDevice("19ae7950fefa875bf456b92eb2e6dc7d71cb42a3")
			.Build();
		//Load the interstitial with the request
		intersititial.LoadAd(request);

		//注册一个插页式广告关闭的事件
		intersititial.AdClosed += onIntersititialAdClose;
		intersititial.AdFailedToLoad += onIntersititialAdFailedToLoad;
	}

	private void OpenInterstitial()
	{
		if (intersititial != null) {
			Debug.Log ("OpenInterstitial is called");
			if (intersititial.IsLoaded ()) {
				Debug.Log ("intersititial is loaded");
				intersititial.Show ();
			}
		}
	}

	void onGameStart(object sender, EventArgs e)
	{
		bannerView.Hide ();
	}

	void onIntersititialAdClose(object sender, EventArgs e)
	{
		Debug.Log("onIntersititialAdClose is called");
		intersititial.Destroy ();
		RequestInterstitial ();
	}

	void onIntersititialAdFailedToLoad(object sender, EventArgs e)
	{
		Debug.Log("onIntersititialAdFailedToLoad is called");
		RequestInterstitial ();
	}
		
	void onRequestAdBanner(object sender, EventArgs e)
	{
		#if UNITY_EDITOR
		Debug.Log("Unity Editor RequestAdBanner is cancelled");

		#elif UNITY_IOS
		RequestBanner ();

		#else
		Debug.Log("Any other platform RequestAdBanner is cancelled");

		#endif
	}

	void onRequestAdInterstitial(object sender, EventArgs e)
	{
		#if UNITY_EDITOR
		Debug.Log("Unity Editor RequestAdBanner is cancelled");

		#elif UNITY_IOS
//		RequestInterstitial ();
		OpenInterstitial();

		#else
		Debug.Log("Any other platform RequestAdBanner is cancelled");

		#endif
	}

	void OnDestroy()
	{
		bannerView.Destroy ();
		intersititial.Destroy ();
	}
}
