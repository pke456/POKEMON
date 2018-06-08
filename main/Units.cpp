#include "stdafx.h"
#include "Units.h"


Units::Units()
{
	IMAGEMANAGER->addImage("����", "img/monster/Male.bmp", 40, 40, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("����", "img/monster/FeMale.bmp", 40, 40, true, RGB(255, 0, 255));

	//�̻��ؾ�
	IMAGEMANAGER->addFrameImage("�̻��ؾ�", "img/monster/PokemonFront&Back_01.bmp", 109, 56, 2, 1, true, RGB(255, 0, 255));
	const char* _txt01 = TEXT("�̻��� ���������� Ǯ���ϸ�");
	Unit* _num01 = new Unit(PokeMon(IMAGEMANAGER->findImage("�̻��ؾ�"), IMAGEMANAGER->findImage("����"), MALE, FRONT, _txt01, "�̻��ؾ�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�̻��ؾ�", _num01));
	//�̻���Ǯ
	IMAGEMANAGER->addFrameImage("�̻���Ǯ", "img/monster/PokemonFront&Back_02.bmp", 115, 56, 2, 1, true, RGB(255, 0, 255));
	const char* _txt02 = TEXT("�̻��ؾ��� ��ȭ�� Ǯ���ϸ�");
	Unit* _num02 = new Unit(PokeMon(IMAGEMANAGER->findImage("�̻���Ǯ"), IMAGEMANAGER->findImage("����"), MALE, FRONT, _txt02, "�̻���Ǯ", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�̻���Ǯ", _num02));

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
