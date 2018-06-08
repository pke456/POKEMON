#pragma once
#include "NPC.h"
#include "practicePlayer.h"


class practiceMap
{
public:
	NPC					npc[CITIZENNUMBER];
	practicePlayer		player;
	int				thisNpc;			//charecter안의 collider에 플레이어와 부딫힌 NPC가 누구인지 저장

	practiceMap();
	~practiceMap();

	HRESULT init(void);
	void release(void);
	void update(void);
	void render(HDC hdc);
};