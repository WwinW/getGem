using UnityEngine;
using System.Collections;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

		//键值对的形式保存iTween所用到的参数
		Hashtable args = new Hashtable();

		//设置iTween的类型，iTween的类型有很多种，EaseType中有定义
		args.Add("easeType", iTween.EaseType.easeInOutExpo);

		//移动的速度
		args.Add("speed", 10f);

		//移动的整体时间，如果与speed共存那么优先speed
		args.Add("time", 1f);

		//这个处理颜色
		args.Add("NamedValueColor", "_SpecColor");

		//延迟执行时间
		args.Add("delay", 0.1f);

		//移动过程中面朝的一点
		args.Add("looktarget", Vector3.zero);

		//循环的类型 none loop pingPang(一般 循环 来回）
		args.Add("loopType", "pingPang");

		//处理移动过程中的事件
		//开始发生移动时调用AnimationStart方法，5.0表示它的参数
		args.Add("onstart", "AnimationStart");
		args.Add("onstartparams", 5.0f);

		//设置接受方法的对象， 默认是自己接受，这里也可以改成别的对象接受，
		//那么就得在接收对象得脚本中实现AnimationStart的方法
		args.Add("onstarttarget", gameObject);

		//移动结束时调用，参数一样
		args.Add("oncomplete", "AnimationEnd");
		args.Add("oncompleteparams", "end");
		args.Add("oncompletetarget", gameObject);

		//移动中调用
		args.Add("onupdate", "AnimationUpdate");
		args.Add("onupdatetarget", gameObject);
		args.Add("onupdateparam", true);

		args.Add("x", 5);
		args.Add("y", 5);
		args.Add("z", 1);

		//最终让对象开始移动
		iTween.MoveTo(gameObject, args);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void AnimationUpdate(bool f)
	{
		Debug.Log("update : " + f);
	}

	void AnimationStart(float f)
	{
		Debug.Log("start : " + f);
	}

	void AnimationEnd(string f)
	{
		Debug.Log("end : " + f);
	}
}

