#pragma once

#include "Actor.h"
#include "Animation.h" 
class Enemy : public Actor
{
public:
	Enemy(float x, float y, Game* game);
	~Enemy();
	void draw() override; // Va a sobrescribir
	void update();
	void impacted(); // Recibe impacto y pone animación de morir
	int state;
	float vx = 1;
	float vy = 0;
	Animation* aDying;
	Animation* aMoving;
	Animation* animation; // Referencia a la animación mostrada
};


