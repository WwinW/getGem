using UnityEngine;
using System.Collections;

public class ListenerBehavior : MonoBehaviour {

	private void Start () {
		// Find all the exploders in the scene and add listeners to each
		ExplosiveBehavior[] exploders = FindObjectsOfType<ExplosiveBehavior>();
		foreach(ExplosiveBehavior exploder in exploders)
		{
			AddListener(exploder);
		}
	}

	private void AddListener(ExplosiveBehavior exploder)
	{
		// For the "event" type, + and - operators have been overloaded. "+" adds
		// a method reference to the list of methods to call when the event is invoked.
		// "-" removes the reference from the list.
		exploder.OnUnitExploded += HandleOnUnitExploded;
	}

	private void RemoveListener(ExplosiveBehavior exploder)
	{
		exploder.OnUnitExploded -= HandleOnUnitExploded;
	}

	private void HandleOnUnitExploded (GameObject unit, Vector3 explodedPosition)
	{
		// Do something useful here
		Debug.Log(unit.name + " exploded at: " + explodedPosition);
	}

}