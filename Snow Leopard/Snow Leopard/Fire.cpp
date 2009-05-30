#include "Fire.h"
#include "point.h"
#include "GameObject.h"
#include "worldstate.h"
#include <ClanLib/core.h>
#include <ClanLib/display.h>
#include <ClanLib/gl.h>
#include <ClanLib/application.h>
#include "Ship.h"

using namespace SL;
using namespace SL::Behaviors;
using namespace BehaviorTree;

void Fire::init(void* agent)
{
};

Fire::Fire()
{
}
BEHAVIOR_STATUS Fire::execute(void* agent)
{
	Ship* ship = (Ship*) agent;
	ship->fire();
	
	return BT_SUCCESS;
}