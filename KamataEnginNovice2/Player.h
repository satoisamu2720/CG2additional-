#pragma once
#include "Base.h"
#include "PlayerBullet.h"
class Player
{
private://�����o�ϐ�
	WorldTransform player_;
	attr playerattr_;
	//Bullet* bullet_;

public://�����o�֐�
	void Initalize();
	void Update(char keys[], char preKeys[]);
	void Draw();

	
};

