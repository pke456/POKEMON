#pragma once

class Tech;
class Unit 
{
private:
	Tech* _skil;
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
	

	void LevelUP();
	void RandomSet(int value);
	void addSkill(Tech* sk);
	void DeleteSkill(int number);


	PokeMon getInfo() { return _info; }
	SkillList getVSkill() { return _vSkill; }
	SkillListIter getViSkill() { return _viSkill; }

	void setHP(int value) { _info.HP = value; }
	void setEXP(int value) { _info.Exp; }
	void setFB() { _info.img->setFrameX(_info.fb); }
	void setName(const char* name) { _info.name = name; }
	void setTurn(bool turn) { _info.turn = turn; }
	void setRC(RECT rc) { _info.rc = rc; }
};

