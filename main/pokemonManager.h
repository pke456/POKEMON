#pragma once
#include"singletonBase.h"

class Units;
class pokemonManager : public singletonBase<pokemonManager>
{
private:
	Units* _unit;
public:
	pokemonManager();
	~pokemonManager();

	HRESULT init();
	void release();
	void update();
	void render();

	Unit* findPokemon(string name);

};

