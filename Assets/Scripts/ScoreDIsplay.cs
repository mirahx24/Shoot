using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreDIsplay : MonoBehaviour {

	Text text;
	ScoreKeeper scorekeeper;

	// Use this for initialization
	void Start () {
		scorekeeper = FindObjectOfType<ScoreKeeper> ();
		text = GetComponent<Text> ();
			
	}
	
	// Update is called once per frame
	void Update () {
		text.text = "Score: " + scorekeeper.score;
	}
}
