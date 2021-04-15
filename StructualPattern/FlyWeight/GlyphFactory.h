#pragma once
#include "Character.h"
#define N_CHARCODES 128

class Row;
class Column;

class GlyphFactory
{
public:
	GlyphFactory()
	{
		for (int i = 0; i < N_CHARCODES; ++i)
			_character[i] = 0;
	}
	virtual ~GlyphFactory();
	virtual Character* CreateCharacter(char c)
	{
		if (!_character[c])
		{
			_character[c] = new Character(c);
		}
		return _character[c];
	}
	virtual Row* CreateRow();
	virtual Column* CreateColumn();
private:
	Character* _character[N_CHARCODES];
};

