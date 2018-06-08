#pragma once
#include "gameNode.h"
#include "starcraftScene.h"
#include "Charecter.h"

class mainGame : public gameNode
{
private:
	Charecter * charecter;
public:
	mainGame();
	~mainGame();

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render();
};

