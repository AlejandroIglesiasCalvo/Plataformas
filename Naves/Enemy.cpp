#include "Enemy.h"

Enemy::Enemy(float x, float y, Game* game)
	: Actor("res/enemigo.png", x, y, 36, 40, game) {
	int VxRandom = 1 + (rand() % 12);
	vx = VxRandom;

	aMoving = new Animation("res/enemigo_movimiento.png", width, height,
		108, 40, 6, 3,  true, game);
	animation = aMoving;

}

void Enemy::update() {
	// Actualizar la animación
	animation->update();

	vx = (this->vx);
	x = x - vx;
	if (x < 0) {
		x = 480;
	}
}

void Enemy::draw() {
	animation->draw(x, y);
}
