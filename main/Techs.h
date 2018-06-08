#pragma once

class Tech;
class Techs
{
private:
	typedef map<string, Tech*> Skills;
	typedef map<string, Tech*>::iterator SkillsIter;
private:
	Skills		_mSkill;
	SkillsIter	_miSkill;
public:
	Techs();
	~Techs();
	
	Tech* findSkill(string name);

	Skills getMSkill() { return _mSkill; }
	SkillsIter getMiSkill() { return _miSkill; }
};

