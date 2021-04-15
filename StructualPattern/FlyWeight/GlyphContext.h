#pragma once

class Font;
class GlyphContext
{
public:
	GlyphContext();
	virtual ~GlyphContext();
	// glyph 구조 내에서 순회 작업을 수행
	virtual void Next(int step = 1);
	virtual void Insert(int quantity = 1);
	// glyph의 부가적 상태를 저장
	virtual Font* GetFont();
	virtual void SetFont(Font*, int span = 1);
private:
	int _index;
	// Glyph와 Font 사이의 대응 정보를 관리
	class BTree* _fonts;
};

