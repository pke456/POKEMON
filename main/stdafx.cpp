// stdafx.cpp : 표준 포함 파일만 들어 있는 소스 파일입니다.
// PPPP_0329.pch는 미리 컴파일된 헤더가 됩니다.
// stdafx.obj에는 미리 컴파일된 형식 정보가 포함됩니다.

#include "stdafx.h"

// TODO: 필요한 추가 헤더는
// 이 파일이 아닌 STDAFX.H에서 참조합니다.

tagPokeMonInfo::tagPokeMonInfo(image * img, image * genderimg, Gender gender, FrontBack fb, const char* explanation, const char * name, int Lv, int Exp, int MaxExp, int HP, int MaxHP, int baseAtk, int def, int sp, int speed, bool turn)
{
	this->img = img;
	this->genderimg = genderimg;
	this->gender = gender;
	this->fb = fb;
	this->explanation = explanation;
	this->name = name;
	this->Lv = Lv;
	this->Exp = Exp;
	this->MaxExp = MaxExp;
	this->HP = HP;
	this->MaxHP = MaxHP;
	this->Atk = baseAtk;
	this->Def = def;
	this->SP = sp;
	this->Speed = speed;
	this->turn = turn;
}
