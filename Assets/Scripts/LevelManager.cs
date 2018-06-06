using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour {

	public float timer = 0.0f;

	// Use this for initialization
	void Start () {
		

	}
	
	// Update is called once per frame
	void Update () {
		if (timer > 0) {
			timer -= Time.deltaTime;
			if (timer < 0) {
				LoadNextScene ();
			}
		}
	}

	public void LoadNextScene(){
		int currenIndex = SceneManager.GetActiveScene ().buildIndex;
		SceneManager.LoadScene (currenIndex + 1);

	}

	public void LoadPreviousScene(){
		int currenIndex = SceneManager.GetActiveScene ().buildIndex;
		SceneManager.LoadScene (currenIndex - 1);

	}
}
