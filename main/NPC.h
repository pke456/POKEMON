#pragma once

class NPC
{
public:
	tagNPCInfo info;

	NPC();
	~NPC();

	//이미지 이름, 좌표x, y, 캐릭터 방향(↓,↑,←,→), 캐릭터 정보, 처음 대사, 두번째 대사, 추가 대사
	HRESULT init(const char* imagename, int x, int y, int rotate, int status, const char* talk, const char* talk2, const char* plusTalk);
	void release(void);
	void update(void);
	void render(HDC hdc);
};