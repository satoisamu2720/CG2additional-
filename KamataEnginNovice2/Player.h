#pragma once
#include "Base.h"
#include "PlayerBullet.h"
class Player
{
private://メンバ変数
	WorldTransform player_;
	attr playerattr_;
	//Bullet* bullet_;

public://メンバ関数
	void Initalize();
	void Update(char keys[], char preKeys[]);
	void Draw();

	
};

