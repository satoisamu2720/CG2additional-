//#include "PlayerBullet.h"
//#include "Novice.h"
//#include "Player.h"
//
//void Bullet::Initalize() {//‰Šú‰»ˆ—
//	bullet_.posX = 0;
//	bullet_.posY = 0;
//	bullet_.speedX = 9;
//	bullet_.speedY = 9;
//	bullet_.radius = 20;
//	bullet_.Alive = false;
//}
//void Bullet::Update() {//XVˆ—
//	if (bullet_.Alive == true) {
//		bullet_.posY -= bullet_.speedY;
//	}
//	if (bullet_.posY < 0) {
//		bullet_.Alive = false;
//	}
//}
//
//void Bullet::CheckActive(bool CheckActive) {
//	bullet_.Alive = CheckActive;
//}
//
//
//void Bullet::Draw() {//•`‰æˆ—
//	if (bullet_.Alive == true) {
//		Novice::DrawBox(bullet_.posX - bullet_.radius, bullet_.posY - bullet_.radius, bullet_.radius * 2, bullet_.radius * 2, 0.0, RED, kFillModeSolid);
//	}
//}
//
//void Bullet::SetPosX(int SetX) {
//	bullet_.posX = SetX;
//}
//
//void Bullet::SetPosY(int SetY) {
//	bullet_.posY = SetY;
//}