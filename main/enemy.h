#pragma once

class Enemy
{
public:
	Enemy();
	~Enemy();

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render();
};

