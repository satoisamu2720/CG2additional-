#include "Player.h"
#include "Novice.h"

void Player::Initalize() {//‰Šú‰»ˆ—
	
	player_.tratranslation.x;
	player_.tratranslation.y;
	playerattr_.speed.x;
	playerattr_.speed.y;
	playerattr_.radius;

}

void Player::Update(char keys[], char preKeys[]) {//XVˆ—
	//if (keys[DIK_W]) player_.tratranslation.x -= worldtransform_.speed.x;
	//if (keys[DIK_S]) player_.tratranslation.x += worldtransform_.speed.x;
	//if (keys[DIK_A]) player_.tratranslation.y -= worldtransform_.speed.y;
	//if (keys[DIK_D]) player_.tratranslation.y += worldtransform_.speed.y;

	/*if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == 0 && bullet_->.Alive == false) {
		bullet_->BulletAlive(true);
		bullet_->SetPosX(player_.posX);
		bullet_->SetPosY(player_.posY);
	}
	if (bullet_->GetBullet().Alive == true) {
		bullet_->Update();
	}*/
}

void Player::Draw() {//•`‰æˆ—
	Novice::DrawBox(player_.tratranslation.x - playerattr_.radius, player_.tratranslation.y - playerattr_.radius, playerattr_.radius * 2, playerattr_.radius * 2, 0.0, WHITE, kFillModeSolid);
}