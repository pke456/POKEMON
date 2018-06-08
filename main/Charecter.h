#pragma once
#include "practicePlayer.h"
#include "practiceMap.h"
#include "NPC.h"
#include"Units.h"


class Charecter
{
public:
	practicePlayer		player;
	practiceMap			map;
	NPC					npc;
	RECT				rc;
	Units*				_unit;
	Unit*				unit;

	Charecter();
	~Charecter();

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(HDC hdc);
	virtual void collision(void);
};

