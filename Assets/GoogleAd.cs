using UnityEngine;
using System.Collections;
using GoogleMobileAds.Api;


public class GoogleAd : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void RequestBanner()
	{
		#if UNITY_ANDROID
			
		string adUnitId = "INSERT_ANDROID_BANNER_AD_UNIT_ID_HERE";

		#elif UNITY_IOS

		string adUnitId = "INSERT_IOS_BANNER_AD_UNIT_ID_HERE";

		#else

		string adUnitId = "unexpected_platform";

		#endif

		//create a 320*50 banner at the top of the screen
		BannerView bannerView = new BannerView(adUnitId, AdSize.SmartBanner, AdPosition.Bottom);

		// create an empty ad request
		AdRequest request = new AdRequest.Builder().Build();

		//load the banner with the request
		bannerView.LoadAd(request);

		//eg
		bannerView.Hide ();
		bannerView.Show ();
		bannerView.Destroy ();
	}

	private void RequestInterstitial()
	{
		#if UNITY_ANDROID

		string adUnitId = "INSERT_ANDROID_INTERSTITIAL_AD_UNIT_ID_HERE";

		#elif UNITY_IOS

		string adUnitId = "INSERT_IOS_INTERSTITIAL_AD_UNIT_ID_HERE";
			
		#else

		string adUnitId = "unexpected_platform";

		#endif

		//Initialize an IntersititalAd.
		InterstitialAd intersititial = new InterstitialAd(adUnitId);
		//Create an empty ad request
		AdRequest request = new AdRequest.Builder().Build();
		//Load the interstitial with the request
		intersititial.LoadAd(request);

		//eg
		if (intersititial.IsLoaded ()) {

			intersititial.Show ();
		}

		intersititial.Destroy ();
	}
		
		
}
