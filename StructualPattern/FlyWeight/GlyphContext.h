#pragma once

class Font;
class GlyphContext
{
public:
	GlyphContext();
	virtual ~GlyphContext();
	// glyph ���� ������ ��ȸ �۾��� ����
	virtual void Next(int step = 1);
	virtual void Insert(int quantity = 1);
	// glyph�� �ΰ��� ���¸� ����
	virtual Font* GetFont();
	virtual void SetFont(Font*, int span = 1);
private:
	int _index;
	// Glyph�� Font ������ ���� ������ ����
	class BTree* _fonts;
};

