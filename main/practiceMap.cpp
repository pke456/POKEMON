#include "stdafx.h"
#include "practiceMap.h"

practiceMap::practiceMap(){}

practiceMap::~practiceMap(){}

HRESULT practiceMap::init(void)
{
	thisNpc = 0;

	npc[0].init("오박사", WINSIZEX / 2 - 200, WINSIZEY / 2, 0, 0, "벌레를 채집하는건 너무 신나!", "너도 해볼래?", "내가 졌다!");
	npc[1].init("이박사", WINSIZEX / 2 + 200, WINSIZEY / 2, 0, 0, "너 이녀석 절루가 이녀석", "코렁탕 먹을래?", "살려줭");

	return S_OK;
}

void practiceMap::release(void)
{
}

void practiceMap::update(void)
{
	//Z누를시 npc가 바라보는 방향, 트리거가 켜짐으로서 대화창 활성화
	if (KEYMANAGER->isOnceKeyDown('Z'))
	{
		if(!npc[thisNpc].info.talkTrigger)
		{
			//npc와 붙어있는 상태에서 Z를 눌러 상호작용
			if (npc[thisNpc].info.isTalk)
			{
				npc[thisNpc].info.talkTrigger = true;
			}
			if (player.player.DOWN){npc[thisNpc].info.Rotate = 0;}
			if (player.player.UP){npc[thisNpc].info.Rotate = 1;}
			if (player.player.RIGHT){npc[thisNpc].info.Rotate = 2;}
			if (player.player.LEFT){npc[thisNpc].info.Rotate = 3;}
		}
		if(npc[thisNpc].info.talkTrigger)
		{
			npc[thisNpc].info.afterTalk = false;
		}
	}
}

void practiceMap::render(HDC hdc)
{
	for (int i = 0; i < CITIZENNUMBER; i++)
	{
		if (npc[thisNpc].info.talkTrigger)
		{
			char str[128];
			sprintf(str, "트리거");
			TextOut(hdc, 10, 40, str, strlen(str));
		}
		if (npc[thisNpc].info.isTalk)
		{
			char str[128];
			sprintf(str, "이즈터크");
			TextOut(hdc, 10, 60, str, strlen(str));
		}
	}

	//npc[i] 랜더
	for (int i = 0; i < CITIZENNUMBER; i++)
	{
		npc[i].render(hdc);
	}

	//npc[i] 상하좌우 이미지 랜더
	if (npc[thisNpc].info.talkTrigger)
	{
		if (npc[thisNpc].info.Rotate == 0)
		{
			char str[128];
			sprintf(str, "다운");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
		if (npc[thisNpc].info.Rotate == 1)
		{
			char str[128];
			sprintf(str, "위");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
		if (npc[thisNpc].info.Rotate == 2)
		{
			char str[128];
			sprintf(str, "오른");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
		if (npc[thisNpc].info.Rotate == 3)
		{
			char str[128];
			sprintf(str, "왼");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
	}
}