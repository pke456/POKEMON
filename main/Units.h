#pragma once
#include"Unit.h"

class Units
{
private:
	typedef map<string, Unit*>				Monsters;
	typedef map<string, Unit*>::iterator		MonstersIter;
private:
	Monsters _mPokeMon;
	MonstersIter _miPokeMon;
public:
	Units();
	~Units();

	Unit* findPokemon(string name);

	Monsters getMPokeMon() { return _mPokeMon; }
	MonstersIter getMiPokeMon() { return _miPokeMon; }
};

