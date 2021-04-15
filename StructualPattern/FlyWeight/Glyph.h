#pragma once
#include "GlyphContext.h"

class Font;
class Window;
class Glyph
{
public:
	virtual ~Glyph();

	virtual void Draw(Window*, GlyphContext&);

	// Font �Ӽ��� ���� Set, Get �޼���
	virtual void SetFront(Font*, GlyphContext&);
	virtual Font* GetFont(GlyphContext&);

	// Glyph�� Composite �������� ����
	virtual void First(GlyphContext&);
	virtual void Next(GlyphContext&);
	virtual bool IsDone(GlyphContext&);
	virtual Glyph* Current(GlyphContext&);

	virtual void Insert(Glyph*, GlyphContext&);
	virtual void Remove(GlyphContext&);
protected:
	Glyph();
};