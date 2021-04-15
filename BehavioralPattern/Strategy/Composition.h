#pragma once

// ���� ���� �и� �˰��� ����� �Ǵ� ��ü
class Composition
{
public:
	Composition(class Compositor*);
	void Repair();
private:
	class Compositor* _compositor;
	class Component* _components; // ������� ����Ʈ
	int _componentCount;		  // ������� ��
	int _lineWidth;				  // ������ ����
	int* _lineBreaks;			  // �� �и����� ��ġ
	int _lineCount;				  // ���� ��
};

