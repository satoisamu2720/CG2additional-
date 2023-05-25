#pragma once
#include "Vector2.h" 

struct Base {
	/*int posX;
	int posY;
	int speedX;
	int speedY;
	int radius;
	bool Alive;*/
};

 struct WorldTransform {
	Vector2 tratranslation = { 640,360 };
	Vector2 rotete = { 0,0 };
	Vector2 scale = { 0,0 };
};

 struct attr {
	//WorldTransform worldtransform;
	Vector2 speed = {5,5};
	float radius = 50;
	bool isAlive = true;
};

//player_->attr.worldtransform.x;
