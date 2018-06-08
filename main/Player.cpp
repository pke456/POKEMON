#include "stdafx.h"
#include "Player.h"

Player::Player(){}

Player::~Player(){}

HRESULT Player::init(void)
{
	_playerRC = RectMakeCenter(WINSIZEX / 2, WINSIZEY / 2, 50, 50);
	menu.init();

	LEFT = RIGHT = UP = DOWN = menuToggle = false;

	return E_NOTIMPL;
}

void Player::release(void)
{
}

void Player::update(void)
{
	menu.update();
	//Charecter Movement
	if (!menuToggle)
	{
		if (KEYMANAGER->isStayKeyDown(VK_LEFT))
		{
			_playerRC.left -= 5;
			_playerRC.right -= 5;
		}
		if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
		{
			_playerRC.left += 5;
			_playerRC.right += 5;
		}
		if (KEYMANAGER->isStayKeyDown(VK_UP))
		{
			_playerRC.top -= 5;
			_playerRC.bottom -= 5;
		}
		if (KEYMANAGER->isStayKeyDown(VK_DOWN))
		{
			_playerRC.top += 5;
			_playerRC.bottom += 5;
		}
	}

	//MENU
	if(menuToggle)
	{
		if (KEYMANAGER->isOnceKeyDown(VK_UP))
		{
			menu.selectMenu--;
		}
		if (KEYMANAGER->isOnceKeyDown(VK_DOWN))
		{
			menu.selectMenu++;
		}
		if (KEYMANAGER->isOnceKeyDown('Z'))
		{
			switch (menu.selectMenu)
			{
			case 0:
				break;
			case 1:
				break;
			case 2:
				menuToggle = false;
				break;
			default:
				break;
			}
		}
	}

	if (!menuToggle)
	{
		menu.selectMenu = 0;
		if (KEYMANAGER->isOnceKeyDown('X'))
		{
			menuToggle = true;
		}
	}
	if (menuToggle)
	{
		if(KEYMANAGER->isOnceKeyDown('X'))
		{
			menuToggle = false;
		}
	}
}

void Player::render(HDC hdc)
{
	if (menuToggle)
	{
		menu.render(hdc);
	}
	Rectangle(hdc, _playerRC.left, _playerRC.top, _playerRC.right, _playerRC.bottom);
}