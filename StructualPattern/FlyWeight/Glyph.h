#pragma once
#include "GlyphContext.h"

class Font;
class Window;
class Glyph
{
public:
	virtual ~Glyph();

	virtual void Draw(Window*, GlyphContext&);

	// Font 속성을 위한 Set, Get 메서드
	virtual void SetFront(Font*, GlyphContext&);
	virtual Font* GetFont(GlyphContext&);

	// Glyph는 Composite 패턴으로 구현
	virtual void First(GlyphContext&);
	virtual void Next(GlyphContext&);
	virtual bool IsDone(GlyphContext&);
	virtual Glyph* Current(GlyphContext&);

	virtual void Insert(Glyph*, GlyphContext&);
	virtual void Remove(GlyphContext&);
protected:
	Glyph();
};