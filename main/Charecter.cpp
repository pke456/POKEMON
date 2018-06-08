#include "stdafx.h"
#include "Charecter.h"
#include"Units.h"

Charecter::Charecter(){}

Charecter::~Charecter(){}

HRESULT Charecter::init(void)
{
	player.init();
	map.init();
	unit = new Unit;
	_unit = new Units;
	
	
	return S_OK;
}

void Charecter::release(void)
{
}

void Charecter::update(void)
{
	player.update();
	map.update();
	collision();
}

void Charecter::render(HDC hdc)
{
	player.render(hdc);
	map.render(hdc);
	Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
}

void Charecter::collision(void)
{
	RECT temp;
	
	for (int i = 0; i < 2; ++i)
	{
		if (IntersectRect(&temp, &map.npc[i].info.npcRC, &player.player.moveRC))
		{
			map.npc[i].info.isTalk = true;
			map.thisNpc = i;
		}
		else { map.npc[i].info.isTalk = false; }

		if (isCollisionReaction(map.npc[i].info.npcRC, player.player.playerRC))
		{
			if (player.player.playerRC.right == map.npc[i].info.npcRC.left)	{map.npc[i].info.Rotate = 3;}
			if (player.player.playerRC.left == map.npc[i].info.npcRC.right)	{map.npc[i].info.Rotate = 2;}
			if (player.player.playerRC.top == map.npc[i].info.npcRC.bottom)	{map.npc[i].info.Rotate = 0;}
			if (player.player.playerRC.bottom == map.npc[i].info.npcRC.top)	{map.npc[i].info.Rotate = 1;}
		}
	}
}