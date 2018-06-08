#include "stdafx.h"
#include "mainGame.h"

mainGame::mainGame(){}

mainGame::~mainGame(){}

//�ʱ�ȭ
HRESULT mainGame::init(void)
{
	//upcasting : �θ�Ŭ������ �ڽ�Ŭ�������� ȣ���Ѵ�
	gameNode::init(true);  //���ӳ���� init �Լ��� Ÿ�̸� ���� �� Ű�Ŵ��� �ʱ�ȭ ���� �Լ��� �����Ѵ�.
	charecter = new Charecter;
	charecter->init();

	return S_OK;
}

//�޸� ����
void mainGame::release(void)
{
	gameNode::release(); //�մ��� ����
}

//������ ���⼭ �Ѵ�
void mainGame::update(void)	  
{
	gameNode::update();  //�մ��� ����
	charecter->update();
}

//�׸��� ���� ���� ���⿡��
void mainGame::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
	//================== �� ���� �մ��� ���ÿ� =========================

	charecter->render(getMemDC());

	//================== �� �Ʒ��� �մ��� ���ÿ� ========================
	this->getBackBuffer()->render(getHDC(), 0, 0);
}

