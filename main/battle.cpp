#include "stdafx.h"
#include "battle.h"

battle::battle(){}
battle::~battle(){}

HRESULT battle::init(const char * imageName, int x, int y)
{
	//upcasting : �θ�Ŭ������ �ڽ�Ŭ�������� ȣ���Ѵ�
	ship::init(imageName, x, y);
	return S_OK;
}

void battle::release(void)
{
}

void battle::update(void)
{
	ship::update();
	keyControl();
}

void battle::render(void)
{
	ship::render();
}

void battle::keyControl(void)
{
	if (KEYMANAGER->isStayKeyDown('A')) _angle += 0.04f;
	if (KEYMANAGER->isStayKeyDown('D')) _angle -= 0.04f;
	if (KEYMANAGER->isStayKeyDown('W')) _speed += 0.04f;
	if (KEYMANAGER->isStayKeyDown('S')) _speed -= 0.04f;
	if (_angle >= PI2) _angle -= PI2;
	if (_angle <= 0) _angle += PI2;
}
