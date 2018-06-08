#include "stdafx.h"
#include "Units.h"


Units::Units()
{
	IMAGEMANAGER->addImage("남자", "img/monster/Male.bmp", 40, 40, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("여자", "img/monster/FeMale.bmp", 40, 40, true, RGB(255, 0, 255));

	//이상해씨
	IMAGEMANAGER->addFrameImage("이상해씨", "img/monster/PokemonFront&Back_01.bmp", 109, 56, 2, 1, true, RGB(255, 0, 255));
	const char* _txt01 = TEXT("이상한 씨앗을가진 풀포켓몬");
	Unit* _num01 = new Unit(PokeMon(IMAGEMANAGER->findImage("이상해씨"), IMAGEMANAGER->findImage("남자"), MALE, FRONT, _txt01, "이상해씨", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("이상해씨", _num01));
	//이상해풀
	IMAGEMANAGER->addFrameImage("이상해풀", "img/monster/PokemonFront&Back_02.bmp", 115, 56, 2, 1, true, RGB(255, 0, 255));
	const char* _txt02 = TEXT("이상해씨가 진화한 풀포켓몬");
	Unit* _num02 = new Unit(PokeMon(IMAGEMANAGER->findImage("이상해풀"), IMAGEMANAGER->findImage("남자"), MALE, FRONT, _txt02, "이상해풀", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("이상해풀", _num02));

}


Units::~Units()
{
}

Unit* Units::findPokemon(string name)
{
	Unit* _unit;
	_miPokeMon = _mPokeMon.begin();
	for (_miPokeMon; _miPokeMon != _mPokeMon.end(); ++_miPokeMon)
	{
		if (_miPokeMon->first == name)
		{
			_unit = _miPokeMon->second;
			return _unit;
		}
	}
	return _unit;
}
