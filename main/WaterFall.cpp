#include "stdafx.h"
#include "WaterFall.h"

WaterFall::WaterFall()
{
	IMAGEMANAGER->addImage("waterfall", "img/effect/water2.bmp", 185, 75, true, RGB(255, 0, 255));
	_info.effect = new image;
	_info.effect = IMAGEMANAGER->findImage("waterfall");
	_info.name = "폭포오르기";
	_info.PP = 30;
	_info.MaxPP = 30;
	_info.number = 0;
	_info.explanation = "폭포같은 물줄기를 발사한다";
}


WaterFall::~WaterFall()
{
}

HRESULT WaterFall::init()
{
	
	return S_OK;
}

void WaterFall::release()
{
}

void WaterFall::update()
{
}

void WaterFall::render()
{
}

void WaterFall::action(Unit * oneself, Unit * enemy)
{
	enemy->setHP(enemy->getInfo().HP - oneself->getInfo().SP * 3);
	_info.effect->frameRender(getMemDC(), enemy->getInfo().rc.left, enemy->getInfo().rc.top);
	_info.PP -= 1;
	oneself->setTurn(false);
	enemy->setTurn(true);
}
