
#pragma once

#include "Layer.h"
#include "Player.h"
#include "Background.h"
#include "Enemy.h"
#include "Projectile.h"
#include <list>
#include "Text.h"
#include "Audio.h" 
#include "Tile.h"
#include "Pad.h"
#include <fstream> // Leer ficheros
#include <sstream> // Leer líneas / String
#include "Space.h" // importar
class GameLayer : public Layer
{
public:
	GameLayer(Game* game);
	void init() override;
	void processControls() override;
	void update() override;
	void draw() override;
	void keysToControls(SDL_Event event);
	void mouseToControls(SDL_Event event); // USO DE MOUSE
	void gamePadToControls(SDL_Event event); // USO DE GAMEPAD
	void loadMap(string name);
	void loadMapObject(char character, float x, float y);
	void calculateScroll();
	Actor* message;
	bool pause;

	// Elementos de interfaz
	SDL_GameController* gamePad;
	Pad* pad;

	Actor* buttonJump;
	Actor* buttonShoot;
	Tile* cup; // Elemento de final de nivel
	Space* space;
	float scrollX;
	int mapWidth;
	list<Tile*> tiles;
	Audio* audioBackground;
	Text* textPoints;
	int points;
	int newEnemyTime = 0;

	//Declaraciones de los objetos del juego
	Actor* backgroundPoints;
	Player* player;//Jugador
	Background* background;//Fondo
	bool controlShoot = false;
	bool controlContinue = false;
	int controlMoveY = 0;
	int controlMoveX = 0;

	list<Enemy*> enemies;
	list<Projectile*> projectiles;
};


