
#pragma once

#include "Layer.h"
#include "Player.h"
#include "Background.h"
#include "Enemy.h"
#include "Projectile.h"
#include <list>
#include "Text.h"
#include "Audio.h" 
class GameLayer : public Layer
{
public:
	GameLayer(Game* game);
	void init() override;
	void processControls() override;
	void update() override;
	void draw() override;
	void keysToControls(SDL_Event event);
	Audio* audioBackground;
	Text* textPoints;
	int points;
	int newEnemyTime = 0;

	//Declaraciones de los objetos del juego
	Actor* backgroundPoints;
	Player* player;//Jugador
	Background* background;//Fondo
	bool controlShoot = false;
	int controlMoveY = 0;
	int controlMoveX = 0;

	list<Enemy*> enemies;
	list<Projectile*> projectiles;
};


