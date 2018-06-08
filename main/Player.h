#pragma once
#include "Menu.h"

class Player
{
protected:
	Menu	menu;

public:
	RECT	_playerRC;
	bool	LEFT, RIGHT, UP, DOWN;
	bool	menuToggle;

	Player();
	~Player();

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(HDC hdc);
};