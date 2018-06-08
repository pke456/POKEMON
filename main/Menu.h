#pragma once

class Menu
{
public:
	RECT	menuRC;
	int		selectMenu;

public:
	Menu();
	~Menu();

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(HDC hdc);
};