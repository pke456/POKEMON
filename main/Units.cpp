#include "stdafx.h"
#include "Units.h"


Units::Units()
{
	IMAGEMANAGER->addImage("����", "img/monster/Male.bmp", 40, 40, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("����", "img/monster/FeMale.bmp", 40, 40, true, RGB(255, 0, 255));

	///Ǯ���ϸ�
	//�̻��ؾ�
	IMAGEMANAGER->addFrameImage("�̻��ؾ�", "img/monster/PokemonFront&Back_01.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt01 = TEXT("�̻��� ���������� Ǯ���ϸ�");
	Unit* _num01 = new Unit(PokeMon(IMAGEMANAGER->findImage("�̻��ؾ�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt01, "�̻��ؾ�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�̻��ؾ�", _num01));
	//�̻���Ǯ
	IMAGEMANAGER->addFrameImage("�̻���Ǯ", "img/monster/PokemonFront&Back_02.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt02 = TEXT("�̻��ؾ��� ��ȭ�� Ǯ���ϸ�");
	Unit* _num02 = new Unit(PokeMon(IMAGEMANAGER->findImage("�̻���Ǯ"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt02, "�̻���Ǯ", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�̻���Ǯ", _num02));
	//�̻��ز�
	IMAGEMANAGER->addFrameImage("�̻��ز�", "img/monster/PokemonFront&Back_03.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt03 = TEXT("�̻���Ǯ�� ��ȭ�� ���ϸ�");
	Unit* _num03 = new Unit(PokeMon(IMAGEMANAGER->findImage("�̻��ز�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt03, "�̻��ز�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�̻��ز�", _num03));
	//�����
	IMAGEMANAGER->addFrameImage("�����", "img/monster/PokemonFront&Back_69.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt69 = TEXT("¥������ ���� Ǯ���ϸ�");
	Unit* _num69 = new Unit(PokeMon(IMAGEMANAGER->findImage("�����"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt69, "�����", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�����", _num69));


	///�����ϸ�
	//���̸�
	IMAGEMANAGER->addFrameImage("���̸�", "img/monster/PokemonFront&Back_04.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt04 = TEXT("������ ���� �Ұ��� ���ϸ�");
	Unit* _num04 = new Unit(PokeMon(IMAGEMANAGER->findImage("���̸�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt04, "���̸�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("���̸�", _num04));
	//���ڵ�
	IMAGEMANAGER->addFrameImage("���ڵ�", "img/monster/PokemonFront&Back_05.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt05 = TEXT("���̸��� ��ȭ�� ���ϸ�");
	Unit* _num05 = new Unit(PokeMon(IMAGEMANAGER->findImage("���ڵ�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt05, "���ڵ�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("���ڵ�", _num05));
	//���ڸ�
	IMAGEMANAGER->addFrameImage("���ڸ�", "img/monster/PokemonFront&Back_06.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt06 = TEXT("���ڵ尡 ��ȭ�� ���ϸ�");
	Unit* _num06 = new Unit(PokeMon(IMAGEMANAGER->findImage("���ڸ�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt06, "���ڸ�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("���ڸ�", _num06));

	///�����ϸ�
	//������
	IMAGEMANAGER->addFrameImage("������", "img/monster/PokemonFront&Back_07.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt07 = TEXT("���� �մ� �ź��� ���ϸ�");
	Unit* _num07 = new Unit(PokeMon(IMAGEMANAGER->findImage("������"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt07, "������", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("������", _num07));
	//��Ϻα�
	IMAGEMANAGER->addFrameImage("��Ϻα�", "img/monster/PokemonFront&Back_08.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt08 = TEXT("�����̰� ��ȭ�� �����ϸ�");
	Unit* _num08 = new Unit(PokeMon(IMAGEMANAGER->findImage("��Ϻα�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt08, "��Ϻα�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("��Ϻα�", _num08));
	//�źϿ�
	IMAGEMANAGER->addFrameImage("�źϿ�", "img/monster/PokemonFront&Back_09.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt09 = TEXT("��ϺαⰡ ��ȭ�� �����ϸ�");
	Unit* _num09 = new Unit(PokeMon(IMAGEMANAGER->findImage("�źϿ�"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt09, "�źϿ�", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("�źϿ�", _num09));

	///����
	//����
	IMAGEMANAGER->addFrameImage("����", "img/monster/PokemonFront&Back_16.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt16 = TEXT("���찡 ó�� ������ �������ϸ�");
	Unit* _num16 = new Unit(PokeMon(IMAGEMANAGER->findImage("����"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt16, "����", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("����", _num16));
	//����
	IMAGEMANAGER->addFrameImage("����", "img/monster/PokemonFront&Back_17.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt17 = TEXT("������ ��ȭ�� ���ϸ�");
	Unit* _num17 = new Unit(PokeMon(IMAGEMANAGER->findImage("����"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt17, "����", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("����", _num17));
	//������
	IMAGEMANAGER->addFrameImage("������", "img/monster/PokemonFront&Back_18.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt18 = TEXT("������ ��ȭ�� ���ϸ�");
	Unit* _num18 = new Unit(PokeMon(IMAGEMANAGER->findImage("������"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt18, "������", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("������", _num18));

	///����
	//ĳ����
	IMAGEMANAGER->addFrameImage("ĳ����", "img/monster/PokemonFront&Back_10.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt10 = TEXT("¡�׷��� ���� ���ϸ�. ������ ����� ���� �ƴϴ�");
	Unit* _num10 = new Unit(PokeMon(IMAGEMANAGER->findImage("ĳ����"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt10, "ĳ����", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("ĳ����", _num10));
	//�ܵ���
	IMAGEMANAGER->addFrameImage("�ܵ���", "img/monster/PokemonFront&Back_11.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt11 = TEXT("ĳ���ǰ� ��ȭ�� ���ϸ�. �ѹ� �� ��ȭ�ϸ� ���� �ɼ���");
	Unit* _num11 = new Unit(PokeMon(IMAGEMANAGER->findImage("�ܵ���"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt11, "�ܵ���", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("ĳ����", _num11));
	//������
	IMAGEMANAGER->addFrameImage("������", "img/monster/PokemonFront&Back_12.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt12 = TEXT("���� ���ƿ��� ���ϸ�");
	Unit* _num12 = new Unit(PokeMon(IMAGEMANAGER->findImage("������"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt12, "������", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("ĳ����", _num12));

	//������
	IMAGEMANAGER->addFrameImage("������", "img/monster/PokemonFront&Back_13.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt13 = TEXT("���̷��� �����");
	Unit* _num13 = new Unit(PokeMon(IMAGEMANAGER->findImage("������"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt13, "������", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("������", _num13));

	///�븻
	//����
	IMAGEMANAGER->addFrameImage("����", "img/monster/PokemonFront&Back_19.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt19 = TEXT("������ ��");
	Unit* _num19 = new Unit(PokeMon(IMAGEMANAGER->findImage("����"), IMAGEMANAGER->findImage("����"), MALE, BACK, _txt19, "����", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("����", _num19));
}


Units::~Units()
{
}

Unit* Units::findPokemon(string name)
{
	Unit* _unit;
	_unit = new Unit;

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
