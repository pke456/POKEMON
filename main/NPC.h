#pragma once

class NPC
{
public:
	tagNPCInfo info;

	NPC();
	~NPC();

	//�̹��� �̸�, ��ǥx, y, ĳ���� ����(��,��,��,��), ĳ���� ����, ó�� ���, �ι�° ���, �߰� ���
	HRESULT init(const char* imagename, int x, int y, int rotate, int status, const char* talk, const char* talk2, const char* plusTalk);
	void release(void);
	void update(void);
	void render(HDC hdc);
};