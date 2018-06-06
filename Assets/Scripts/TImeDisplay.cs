using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TImeDisplay : MonoBehaviour {

	Text text; 
	LevelManager timer;

	// Use this for initialization
	void Start () {
		timer = FindObjectOfType<LevelManager> ();
		text = GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (timer.timer > 0) {
			text.text = "Timer: " + timer.timer;
		}
	}
}
