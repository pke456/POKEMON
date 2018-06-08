#include "stdafx.h"
#include "ship.h"


ship::ship()
{
}


ship::~ship()
{
}

HRESULT ship::init(const char * imageName, int x, int y)
{
	_image = IMAGEMANAGER->findImage(imageName);

	_x = x;
	_y = y;

	_angle = 0.0f;
	_rc = RectMakeCenter(_x, _y, _image->getFrameWidth(), _image->getFrameHeight());
	_speed = 0;
	_radius = _image->getFrameWidth() / 2;
	return E_NOTIMPL;
}

void ship::release(void)
{
}

void ship::update(void)
{
	keyControl();
	move();
}

void ship::render(void)
{
	draw();
}

void ship::draw(void)
{
	_image->frameRender(getMemDC(), _rc.left, _rc.top);
	
	char str[128];
	sprintf(str, "%d, %3.2f", int(_angle * 180 / PI), _speed);
	TextOut(getMemDC(), _rc.left, _rc.top - 15, str, strlen(str));
}

void ship::keyControl(void)
{
	if (KEYMANAGER->isStayKeyDown(VK_LEFT))
	{
		if (_angle >= PI2) _angle -= PI2;
		_angle += 0.2f;
	}
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
	{
		if (_angle <= 0) _angle += PI2;
		_angle -= 0.2f;
	}
	if (KEYMANAGER->isStayKeyDown(VK_UP)) _speed += 0.04f;
	if (KEYMANAGER->isStayKeyDown(VK_DOWN)) _speed -= 0.04f;
}

void ship::move(void)
{
	int frame;       //이미지 프레임 번호
	float angle;	 //이미지 각도
	
	angle = _angle + PI16;

	frame = int(angle / PI8);
	_image->setFrameX(frame);

	float elaspesdTime = TIMEMANAGER->getElapsedTime(); //밀리세컨드
	float moveSpeed = elaspesdTime * 100;//애니메이션 속도

	_x += cosf(_angle) * _speed * moveSpeed;
	_y += -sinf(_angle)* _speed * moveSpeed;

	_rc = RectMakeCenter(_x, _y, _image->getFrameWidth(), _image->getFrameHeight());

}
