#include "stdafx.h"
#include "Unit.h"
#include"Tech.h"


Unit::Unit()
{
}

Unit::Unit(PokeMon info)
{
	_info = info;
}

Unit::Unit(PokeMon info, int value)
{
	_info = info;
	RandomSet(value);
}

Unit::~Unit()
{
}

void Unit::LevelUP()
{
	if (_info.Lv == MAXLEVEL) return;

	_info.MaxExp = _info.MaxExp * 2;
	_info.Exp = 0;
	_info.MaxHP += RND->getFromIntTo(20, 50);
	_info.HP = _info.MaxHP;
	_info.Atk += RND->getFromIntTo(5, 8);
	_info.Def += RND->getFromIntTo(5, 8);
	_info.SP += RND->getFromIntTo(1, 3);
	_info.Speed += RND->getFromIntTo(5, 8);
}

void Unit::RandomSet(int value)
{
	for (int i = 0; i < value; i++)
	{
		if (_info.Lv == MAXLEVEL) return;
		LevelUP();
	}
}

void Unit::addSkill(Tech* sk)
{
	Tech* _sk = sk;
	if (_vSkill.size() > 4) return;
	_sk->setSkNumber(_vSkill.size() + 1);
	_vSkill.push_back(_sk);
}

void Unit::DeleteSkill(int number)
{
	_viSkill = _vSkill.begin();
	for (_viSkill; _viSkill != _vSkill.end(); ++_viSkill)
	{
		if ((*_viSkill)->getSkInfo().number == number)
		{
			_vSkill.erase(_viSkill);
			return;
		}
	}
}
