#include "stdafx.h"
#include "Units.h"


Units::Units()
{
	IMAGEMANAGER->addImage("남자", "img/monster/Male.bmp", 40, 40, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("여자", "img/monster/FeMale.bmp", 40, 40, true, RGB(255, 0, 255));

	///풀포켓몬
	//이상해씨
	IMAGEMANAGER->addFrameImage("이상해씨", "img/monster/PokemonFront&Back_01.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt01 = TEXT("이상한 씨앗을가진 풀포켓몬");
	Unit* _num01 = new Unit(PokeMon(IMAGEMANAGER->findImage("이상해씨"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt01, "이상해씨", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("이상해씨", _num01));
	//이상해풀
	IMAGEMANAGER->addFrameImage("이상해풀", "img/monster/PokemonFront&Back_02.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt02 = TEXT("이상해씨가 진화한 풀포켓몬");
	Unit* _num02 = new Unit(PokeMon(IMAGEMANAGER->findImage("이상해풀"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt02, "이상해풀", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("이상해풀", _num02));
	//이상해꽃
	IMAGEMANAGER->addFrameImage("이상해꽃", "img/monster/PokemonFront&Back_03.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt03 = TEXT("이상해풀이 진화한 포켓몬");
	Unit* _num03 = new Unit(PokeMon(IMAGEMANAGER->findImage("이상해꽃"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt03, "이상해꽃", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("이상해꽃", _num03));
	//모다피
	IMAGEMANAGER->addFrameImage("모다피", "img/monster/PokemonFront&Back_69.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt69 = TEXT("짜증나게 생긴 풀포켓몬");
	Unit* _num69 = new Unit(PokeMon(IMAGEMANAGER->findImage("모다피"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt69, "모다피", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("모다피", _num69));


	///불포켓몬
	//파이리
	IMAGEMANAGER->addFrameImage("파이리", "img/monster/PokemonFront&Back_04.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt04 = TEXT("꼬리가 약한 불공룡 포켓몬");
	Unit* _num04 = new Unit(PokeMon(IMAGEMANAGER->findImage("파이리"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt04, "파이리", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("파이리", _num04));
	//리자드
	IMAGEMANAGER->addFrameImage("리자드", "img/monster/PokemonFront&Back_05.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt05 = TEXT("파이리가 진화한 포켓몬");
	Unit* _num05 = new Unit(PokeMon(IMAGEMANAGER->findImage("리자드"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt05, "리자드", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("리자드", _num05));
	//리자몽
	IMAGEMANAGER->addFrameImage("리자몽", "img/monster/PokemonFront&Back_06.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt06 = TEXT("리자드가 진화한 포켓몬");
	Unit* _num06 = new Unit(PokeMon(IMAGEMANAGER->findImage("리자몽"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt06, "리자몽", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("리자몽", _num06));

	///물포켓몬
	//꼬북이
	IMAGEMANAGER->addFrameImage("꼬북이", "img/monster/PokemonFront&Back_07.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt07 = TEXT("물을 뿜는 거북이 포켓몬");
	Unit* _num07 = new Unit(PokeMon(IMAGEMANAGER->findImage("꼬북이"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt07, "꼬북이", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("꼬북이", _num07));
	//어니부기
	IMAGEMANAGER->addFrameImage("어니부기", "img/monster/PokemonFront&Back_08.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt08 = TEXT("꼬북이가 진화한 물포켓몬");
	Unit* _num08 = new Unit(PokeMon(IMAGEMANAGER->findImage("어니부기"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt08, "어니부기", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("어니부기", _num08));
	//거북왕
	IMAGEMANAGER->addFrameImage("거북왕", "img/monster/PokemonFront&Back_09.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt09 = TEXT("어니부기가 진화한 물포켓몬");
	Unit* _num09 = new Unit(PokeMon(IMAGEMANAGER->findImage("거북왕"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt09, "거북왕", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("거북왕", _num09));

	///비행
	//구구
	IMAGEMANAGER->addFrameImage("구구", "img/monster/PokemonFront&Back_16.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt16 = TEXT("지우가 처음 선택한 비행포켓몬");
	Unit* _num16 = new Unit(PokeMon(IMAGEMANAGER->findImage("구구"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt16, "구구", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("구구", _num16));
	//피죤
	IMAGEMANAGER->addFrameImage("피죤", "img/monster/PokemonFront&Back_17.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt17 = TEXT("구구가 진화한 포켓몬");
	Unit* _num17 = new Unit(PokeMon(IMAGEMANAGER->findImage("피죤"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt17, "피죤", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("피죤", _num17));
	//피죤투
	IMAGEMANAGER->addFrameImage("피죤투", "img/monster/PokemonFront&Back_18.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt18 = TEXT("피죤이 진화한 포켓몬");
	Unit* _num18 = new Unit(PokeMon(IMAGEMANAGER->findImage("피죤투"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt18, "피죤투", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("피죤투", _num18));

	///벌레
	//캐터피
	IMAGEMANAGER->addFrameImage("캐터피", "img/monster/PokemonFront&Back_10.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt10 = TEXT("징그러운 벌레 포켓몬. 눈같이 생긴건 눈이 아니다");
	Unit* _num10 = new Unit(PokeMon(IMAGEMANAGER->findImage("캐터피"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt10, "캐터피", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("캐터피", _num10));
	//단데기
	IMAGEMANAGER->addFrameImage("단데기", "img/monster/PokemonFront&Back_11.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt11 = TEXT("캐터피가 진화한 포켓몬. 한번 더 진화하면 나비가 될수도");
	Unit* _num11 = new Unit(PokeMon(IMAGEMANAGER->findImage("단데기"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt11, "단데기", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("캐터피", _num11));
	//버터플
	IMAGEMANAGER->addFrameImage("버터플", "img/monster/PokemonFront&Back_12.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt12 = TEXT("드디어 날아오른 포켓몬");
	Unit* _num12 = new Unit(PokeMon(IMAGEMANAGER->findImage("버터플"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt12, "버터플", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("캐터피", _num12));

	//뿔충이
	IMAGEMANAGER->addFrameImage("뿔충이", "img/monster/PokemonFront&Back_13.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt13 = TEXT("왜이렇게 생겼니");
	Unit* _num13 = new Unit(PokeMon(IMAGEMANAGER->findImage("뿔충이"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt13, "뿔충이", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("뿔충이", _num13));

	///노말
	//꼬렛
	IMAGEMANAGER->addFrameImage("꼬렛", "img/monster/PokemonFront&Back_19.bmp", 246, 120, 2, 1, true, RGB(255, 0, 255));
	const char* _txt19 = TEXT("더러운 쥐");
	Unit* _num19 = new Unit(PokeMon(IMAGEMANAGER->findImage("꼬렛"), IMAGEMANAGER->findImage("남자"), MALE, BACK, _txt19, "꼬렛", 1, 0, 20, 50, 50, 20, 10, 10, 10, false));
	_mPokeMon.insert(make_pair("꼬렛", _num19));
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
