#include "stdafx.h"
#include "NPC.h"

NPC::NPC() {}

NPC::~NPC() {}

HRESULT NPC::init(const char * imagename, int x, int y, int rotate, int status, const char * talk, const char* talk2, const char* plusTalk)
{
	info.imageName =		imagename;
	info.Rotate =			rotate;
	info.Status =			status;
	info.Talk =				talk;
	info._x =				x;
	info._y =				y;
	info.Talk =				talk;
	info.Talk2 =			talk2;
	info.Talk3 =			plusTalk;
	info.isTalk =			false;
	info.talkTrigger =		false;
	info.afterTalk =		false;
	
	//info.npcImg =		IMAGEMANAGER->findImage(imagename);
	info.npcRC = RectMakeCenter(info._x, info._y, 50, 50);
	info.npcTalk = RectMake(0, WINSIZEY - 200, WINSIZEX, 200);

	return S_OK;
}

void NPC::release(void){}

void NPC::update(void)
{
}

void NPC::render(HDC hdc)
{
	Rectangle(hdc, info.npcRC.left, info.npcRC.top, info.npcRC.right, info.npcRC.bottom);

	//대화창 및 대사
	if (info.talkTrigger)
	{
		Rectangle(hdc, info.npcTalk.left, info.npcTalk.top, info.npcTalk.right, info.npcTalk.bottom);
		if (!info.afterTalk) {TextOut(hdc, 20, WINSIZEY - 160, info.Talk, strlen(info.Talk));}
		else TextOut(hdc, 20, WINSIZEY - 160, info.Talk2, strlen(info.Talk2));
	}
}