#pragma once
#include "Tech.h"

class WaterFall :
	public Tech
{
public:
	WaterFall();
	~WaterFall();
	HRESULT init();
	void release();
	void update();
	void render();

	SkillInfo getSkInfo() { return _info; }

	void action(Unit* oneself, Unit* enemy);
	void setSkNumber(int num) { _info.number = num; }
};

