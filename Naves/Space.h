#pragma once

#include "Actor.h"
#include <list>

class Space
{
public:
	Space(float gravity);
	void addDynamicActor(Actor* actor);
	void addStaticActor(Actor* actor);
	void removeDynamicActor(Actor* actor);
	void removeStaticActor(Actor* actor);
	float gravity;
	list<Actor*> dynamicActors;
	list<Actor*> staticActors;
};


