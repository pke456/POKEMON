#pragma once
#include "NPC.h"
#include "practicePlayer.h"


class practiceMap
{
public:
	NPC					npc[CITIZENNUMBER];
	practicePlayer		player;
	int				thisNpc;			//charecter���� collider�� �÷��̾�� �΋H�� NPC�� �������� ����

	practiceMap();
	~practiceMap();

	HRESULT init(void);
	void release(void);
	void update(void);
	void render(HDC hdc);
};