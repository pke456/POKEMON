#pragma once
#include "Unit.h"
#include"gameNode.h"

class Tech : public gameNode
{
protected:
	SkillInfo _info;
public:
	Tech();
	~Tech();
	
	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();

	virtual void setSkNumber(int num) { _info.number = num; }
	
	SkillInfo getSkInfo() { return _info; }
	virtual void action(Unit* oneself, Unit* enemy);
};

