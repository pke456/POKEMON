#include "stdafx.h"
#include "Techs.h"
#include "Tech.h"

Techs::Techs()
{
}


Techs::~Techs()
{
}

Tech* Techs::findSkill(string name)
{
	Tech* _sk = NULL;
	_miSkill = _mSkill.begin();
	for (_miSkill; _miSkill != _mSkill.end(); ++_miSkill)
	{
		if (_miSkill->first == name)
		{
			_sk = _miSkill->second;
			return _sk;
		}
	}
	return _sk;
}


