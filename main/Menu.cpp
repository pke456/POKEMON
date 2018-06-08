#include "stdafx.h"
#include "Menu.h"

Menu::Menu(){}

Menu::~Menu(){}

HRESULT Menu::init(void)
{
	menuRC = RectMake(WINSIZEX - 200, 0, 200, WINSIZEY);
	selectMenu = 0;

	return E_NOTIMPL;
}

void Menu::release(void)
{
}

void Menu::update(void)
{
	if (selectMenu > 2)
	{
		selectMenu = 0;
	}
	else if (selectMenu < 0)
	{
		selectMenu = 2;
	}
}

void Menu::render(HDC hdc)
{
	Rectangle(hdc, menuRC.left, menuRC.top, menuRC.right, menuRC.bottom);
	char str[128];
	sprintf(str, "가방");
	TextOut(hdc, menuRC.left + 50, menuRC.top + 30, str, strlen(str));
	char str2[128];
	sprintf(str2, "포켓몬");
	TextOut(hdc, menuRC.left + 50, menuRC.top + 60, str2, strlen(str2));
	char str3[128];
	sprintf(str3, "닫기");
	TextOut(hdc, menuRC.left + 50, menuRC.top + 90, str3, strlen(str3));
	switch (selectMenu)
	{
	case 0:
		char str4[128];
		sprintf(str4, "▶");
		TextOut(hdc, menuRC.left + 20, menuRC.top + 30, str4, strlen(str4));
		break;
	case 1:
		char str5[128];
		sprintf(str5, "▶");
		TextOut(hdc, menuRC.left + 20, menuRC.top + 60, str5, strlen(str5));
		break;
	case 2:
		char str6[128];
		sprintf(str6, "▶");
		TextOut(hdc, menuRC.left + 20, menuRC.top + 90, str6, strlen(str6));
		break;
	default:
		break;
	}
}