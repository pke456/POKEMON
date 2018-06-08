#pragma once
#include "Menu.h"
#include "NPC.h"

class practicePlayer
{
public:
	Menu			menu;
	Player			player;
	NPC				npc;

	practicePlayer();
	~practicePlayer();

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(HDC hdc);
};