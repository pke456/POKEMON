#include "stdafx.h"
#include "practiceMap.h"

practiceMap::practiceMap(){}

practiceMap::~practiceMap(){}

HRESULT practiceMap::init(void)
{
	thisNpc = 0;

	npc[0].init("���ڻ�", WINSIZEX / 2 - 200, WINSIZEY / 2, 0, 0, "������ ä���ϴ°� �ʹ� �ų�!", "�ʵ� �غ���?", "���� ����!");
	npc[1].init("�̹ڻ�", WINSIZEX / 2 + 200, WINSIZEY / 2, 0, 0, "�� �̳༮ ���簡 �̳༮", "�ڷ��� ������?", "����a");

	return S_OK;
}

void practiceMap::release(void)
{
}

void practiceMap::update(void)
{
	//Z������ npc�� �ٶ󺸴� ����, Ʈ���Ű� �������μ� ��ȭâ Ȱ��ȭ
	if (KEYMANAGER->isOnceKeyDown('Z'))
	{
		if(!npc[thisNpc].info.talkTrigger)
		{
			//npc�� �پ��ִ� ���¿��� Z�� ���� ��ȣ�ۿ�
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
			sprintf(str, "Ʈ����");
			TextOut(hdc, 10, 40, str, strlen(str));
		}
		if (npc[thisNpc].info.isTalk)
		{
			char str[128];
			sprintf(str, "������ũ");
			TextOut(hdc, 10, 60, str, strlen(str));
		}
	}

	//npc[i] ����
	for (int i = 0; i < CITIZENNUMBER; i++)
	{
		npc[i].render(hdc);
	}

	//npc[i] �����¿� �̹��� ����
	if (npc[thisNpc].info.talkTrigger)
	{
		if (npc[thisNpc].info.Rotate == 0)
		{
			char str[128];
			sprintf(str, "�ٿ�");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
		if (npc[thisNpc].info.Rotate == 1)
		{
			char str[128];
			sprintf(str, "��");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
		if (npc[thisNpc].info.Rotate == 2)
		{
			char str[128];
			sprintf(str, "����");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
		if (npc[thisNpc].info.Rotate == 3)
		{
			char str[128];
			sprintf(str, "��");
			TextOut(hdc, 10, 20, str, strlen(str));
		}
	}
}