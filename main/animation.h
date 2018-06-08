#pragma once
#include <vector>

class animation
{
public://������ ���� �ϱ� ���ؼ�
	typedef vector<POINT> vFrameList; //������ ��ȣ ����Ʈ
	typedef vector<int>   vPlayList;  //�ִϸ��̼� �÷��� ����Ʈ ��ȣ
private:
	int _frameNum;//��������
	vFrameList _frameList;
	vPlayList  _playList;

	int _frameWidth;
	int _frameHeight;

	BOOL _loop;
	float _frameUpdateSec; //�����Ӽӵ�
	float _elapsedSec;     //����ð�(��������) 1�ε���

	DWORD _nowPlayIndex;
	BOOL _play;

public:
	animation();
	~animation();

	HRESULT init(int totalW, int totalH, int frameW, int frameH);
	void release(void);

	//����Ʈ �ִϸ��̼� ���
	void setDefPlayFrame(BOOL reverse = FALSE, bool loop = FALSE);
	//�迭 �ִϸ��̼� ���
	void setPlayFrame(int* playArr, int arrLen, BOOL loop = FALSE);
	//���� �ִϸ��̼� ���
	void setPlayFrame(int start, int end, BOOL reverse = FALSE, BOOL loop = FALSE);

	//�ִϸ��̼� ������ ����
	void setFPS(int framePerSec);

	//������ ���� �Լ�
	void frameUpdate(float elapsedTime);

	void start(void);
	void stop(void);
	void pause(void);
	void resume(void);

	inline BOOL isPlay(void) { return _play; }
	inline POINT getFramePos(void) { return _frameList[_playList[_nowPlayIndex]]; }
	inline int getFrameWidth(void) { return _frameWidth; }
	inline int getFrameHeight(void) { return _frameHeight; }

};

