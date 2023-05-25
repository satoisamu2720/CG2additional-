#pragma once
#include "Base.h"
#include "PlayerBullet.h"
class Player
{
private://ƒƒ“ƒo•Ï”
	WorldTransform player_;
	attr playerattr_;
	//Bullet* bullet_;

public://ƒƒ“ƒoŠÖ”
	void Initalize();
	void Update(char keys[], char preKeys[]);
	void Draw();

	
};

