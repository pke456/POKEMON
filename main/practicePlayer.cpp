#include "stdafx.h"
#include "practicePlayer.h"

practicePlayer::practicePlayer(){}

practicePlayer::~practicePlayer(){}

HRESULT practicePlayer::init(void)
{
	player.playerRC = RectMakeCenter(WINSIZEX / 2, WINSIZEY / 2, 50, 50);
	menu.init();

	player.LEFT = player.RIGHT = player.UP = player.DOWN = player.menuToggle = false;

	return S_OK;
}

void practicePlayer::release(void)
{
}

void practicePlayer::update(void)
{
	menu.update();

	//Charecter Movement
	if (!player.menuToggle)
	{
		if (KEYMANAGER->isStayKeyDown(VK_LEFT))
		{
			player.playerRC.left -= 5;
			player.playerRC.right -= 5;
			player.LEFT = true;
			player.RIGHT = player.UP = player.DOWN = false;

			//캐릭터, npc 트리거 잡는 랙트
			player.moveRC = RectMakeCenter(player.playerRC.left - 
				(player.playerRC.right - player.playerRC.left) / 2,
				player.playerRC.top + (player.playerRC.bottom - player.playerRC.top) / 2, 25, 25);
		}
		if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
		{
			player.playerRC.left += 5;
			player.playerRC.right += 5;
			player.RIGHT = true;
			player.LEFT = player.UP = player.DOWN = false;

			//캐릭터, npc 트리거 잡는 랙트
			player.moveRC = RectMakeCenter(player.playerRC.right +
				(player.playerRC.right - player.playerRC.left) / 2,
				player.playerRC.top + (player.playerRC.bottom - player.playerRC.top) / 2, 25, 25);
		}
		if (KEYMANAGER->isStayKeyDown(VK_UP))
		{
			player.playerRC.top -= 5;
			player.playerRC.bottom -= 5;
			player.UP = true;
			player.LEFT = player.RIGHT = player.DOWN = false;

			//캐릭터, npc 트리거 잡는 랙트
			player.moveRC = RectMakeCenter(player.playerRC.left +
				(player.playerRC.right - player.playerRC.left) / 2,
				player.playerRC.top - (player.playerRC.bottom - player.playerRC.top) / 2, 25, 25);
		}
		if (KEYMANAGER->isStayKeyDown(VK_DOWN))
		{
			player.playerRC.top += 5;
			player.playerRC.bottom += 5;
			player.DOWN = true;
			player.LEFT = player.RIGHT = player.UP = false;
			player.moveRC = RectMakeCenter(player.playerRC.left +
				(player.playerRC.right - player.playerRC.left) / 2,
				player.playerRC.bottom + (player.playerRC.bottom - player.playerRC.top) / 2, 25, 25);
		}
	}

	//MENU
	if (player.menuToggle)
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
				player.menuToggle = false;
				break;
			default:
				break;
			}
		}
	}

	if (!player.menuToggle)
	{
		menu.selectMenu = 0;
		if (KEYMANAGER->isOnceKeyDown('X'))
		{
			player.menuToggle = true;
		}
	}
	if (player.menuToggle)
	{
		if (KEYMANAGER->isOnceKeyDown('X'))
		{
			player.menuToggle = false;
		}
	}
}

void practicePlayer::render(HDC hdc)
{
	if (player.menuToggle)
	{
		menu.render(hdc);
	}
	Rectangle(hdc, player.playerRC.left, player.playerRC.top, player.playerRC.right, player.playerRC.bottom);
	Rectangle(hdc, player.moveRC.left, player.moveRC.top, player.moveRC.right, player.moveRC.bottom);

	if (player.DOWN)
	{
		char str[128];
		sprintf(str, "다운");
		TextOut(hdc, 10, 10, str, strlen(str));
	}
	if (player.UP)
	{
		char str[128];
		sprintf(str, "위");
		TextOut(hdc, 10, 10, str, strlen(str));
	}
	if (player.RIGHT)
	{
		char str[128];
		sprintf(str, "오른");
		TextOut(hdc, 10, 10, str, strlen(str));
	}
	if (player.LEFT)
	{
		char str[128];
		sprintf(str, "왼");
		TextOut(hdc, 10, 10, str, strlen(str));
	}
}