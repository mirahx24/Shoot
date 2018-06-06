﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameOverScore : MonoBehaviour {

	Text text;
	ScoreAbsorber scoreAbsorber;

	// Use this for initialization
	void Start () {
		scoreAbsorber = FindObjectOfType<ScoreAbsorber> ();
		text = GetComponent<Text> ();

	}

	// Update is called once per frame
	void Update () {
		text.text = "Score: " + scoreAbsorber.score;
	}
}
