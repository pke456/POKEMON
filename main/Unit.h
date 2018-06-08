#pragma once
#include"gameNode.h"

class Tech;
class Unit : public gameNode
{
private:
	typedef vector<Tech*>					SkillList;
	typedef vector<Tech*>::iterator			SkillListIter;
private:
	PokeMon			_info;
	SkillList		_vSkill;
	SkillListIter	_viSkill;
public:
	Unit();
	~Unit();
	Unit(PokeMon info);
	Unit(PokeMon info, int value);
	
	HRESULT init();
	void release();
	void update();
	void render();

	void LevelUP();
	void RandomSet(int value);
	void addSkill(Tech* sk);
	void DeleteSkill(int number);


	PokeMon getInfo() { return _info; }
	SkillList getVSkill() { return _vSkill; }
	SkillListIter getViSkill() { return _viSkill; }

	void setHP(int value) { _info.HP = value; }
	void setEXP(int value) { _info.Exp; }
	void setFB(FrontBack fb) { _info.fb = fb; }
	void setName(const char* name) { _info.name = name; }
	void setTurn(bool turn) { _info.turn = turn; }
	void setRC(RECT rc) { _info.rc = rc; }
};

