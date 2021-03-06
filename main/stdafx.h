// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
// Windows 헤더 파일:
#include <windows.h>

// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <iostream>

#include "commonMacroFunction.h"
#include "randomFunction.h"
#include "KeyManager.h"
#include "utiles.h"
#include "imageManager.h"
#include "collision.h"
#include "txtData.h"
#include "soundManager.h"
#include "timeManager.h"
#include "effectManager.h"
#include "iniDataManager.h"



using namespace std;
using namespace Neptune_UTIL;

#define WINNAME (LPTSTR)TEXT("Neptune API")
#define WINSTARTX 800
#define WINSTARTY 50
#define WINSIZEX 800	
#define WINSIZEY 600
#define WINSTYLE WS_CAPTION | WS_SYSMENU


#define RND randomFunction::getSingleton()
#define KEYMANAGER KeyManager::getSingleton()
#define IMAGEMANAGER imageManager::getSingleton()
#define TXTDATA			txtData::getSingleton()
#define SOUNDMANAGER	soundManager::getSingleton()
#define TIMEMANAGER		timeManager::getSingleton()
#define EFFECTMANAGER   effectManager::getSingleton()
#define INIDATA         iniDataManager::getSingleton()
#define POKEMONMANAGER pokemonManager::getSingleton()

//안전한 메모리 관리
#define SAFE_DELETE(p) { if(p) {delete(p); (p) = NULL; }}
#define SAFE_RELEASE(p) {if(p) {(p)->release(); (p)=NULL; }}
#define SAFE_DELETE_ARRAY(p){if(p){delete[](p); (p) = NULL;}}
//#define NPC_SIZE 2

// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
extern HINSTANCE	_hInstance;		//인스턴스 핸들
extern HWND			_hWnd;			//핸들
extern POINT        _ptMouse;       //마우스



///////////////////// NPC

#define CITIZENNUMBER 2
#define MAXLEVEL 99


enum FrontBack
{
	FRONT = 1,
	BACK
};
enum Gender
{
	MALE,
	FEMALE
};
enum PoketMonType
{
	NOMAL = 1,
	FIRE,
	WATER,
	ELECTRIC,
	GRASS,
	ICE,
	FIGHTING,
	POISON,
	GROUND,
	FLYING,
	PSYCHIC,
	BUG,
	ROCK,
	GHOST,
	DRAGON,
};

typedef struct tagNPCInfo
{
	tagNPCInfo()
		:talkTrigger(false), isTalk(false)
	{
	}
	RECT			npcRC;
	RECT			npcTalk;			//대사 창
	image*			npcImg;
	const char*		imageName;
	const char*		Talk;
	const char*		Talk2;
	const char*		Talk3;
	bool			afterTalk;			//talk1, talk2 구분
	bool			isTalk;				//npc와 붙어서 말을 걸었는가? (charecter의 intersectrect에서 사용)
	bool			talkTrigger;		//talkTrigger가 true가 되어있으면 캐릭터 움직임 봉쇄 (캐릭터와의 대화)
	int				_x;
	int				_y;
	int				Rotate;				//캐릭터방향(아래,위,왼쪽,오른쪽)
	int				Status;				//캐릭터 정보(0:시민 1:간호사 2:도전자)
};

typedef struct tagPlayerInfo
{
	RECT	playerRC;
	RECT	moveRC;
	bool	LEFT, RIGHT, UP, DOWN;
	bool	menuToggle;

}Player;

typedef struct tagPokeMonInfo
{
	tagPokeMonInfo() {}
	tagPokeMonInfo(image* img, image* genderimg, Gender gender, FrontBack fb, const char* explanation,
		const char* name, int Lv, int Exp, int MaxExp, int HP, int MaxHP,
		int baseAtk, int def, int sp, int speed, bool turn);

	RECT			rc;										//포켓몬 이미지 뿌릴 영역
	image*			img;									//포켓몬 이미지
	image*			genderimg;								//성별 이미지
	Gender			gender;									//성별
	FrontBack		fb;										//앞&뒤
	const char*		explanation;							//포켓몬 설명

	const char*		name;									//이름
	int				Lv;										//레벨
	int				Exp;									//현재 경험치
	int				MaxExp;									//최대 경험치
	int				HP;										//현재 체력
	int				MaxHP;									//최대 체력
	int				Atk;									//공격력
	int				Def;									//방어력
	int				SP;										//특수공격 스텟
	int				Speed;									//스피드
	bool			turn;									//캐릭터 턴

}PokeMon;

typedef struct tagSkillInfo
{
	image*			effect;				//이펙트
	const char*		explanation;		//스킬 설명

	const char*		name;				//스킬이름
	int				PP;					//현재 PP포인트
	int				MaxPP;				//최대 PP포인트
	int				number;				//스킬 넘버(포켓몬이 가지고 있는 기술 순서)
}SkillInfo;

