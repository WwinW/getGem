using UnityEngine;
using System.Collections;

// A delegate should be declared outside of the class since it is its own type
// and you most likely want to use it from elsewhere and not just in this class
public delegate void UnitExploded(GameObject unit, Vector3 explodedPosition);

public class ExplosiveBehavior : MonoBehaviour {

	public event UnitExploded OnUnitExploded;

	public void Explode(GameObject unit, Vector3 position)
	{
		// Check if there are any listeners. This throws an exception if OnUnitExploded is null.
		if(OnUnitExploded != null)
		{
			OnUnitExploded(unit, position);
		}
	}

	private void Update()
	{
		Explode(gameObject, transform.position);
	}

}