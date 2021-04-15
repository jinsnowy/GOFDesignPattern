#pragma once
#include "Graphic.h"
#include "Image.h"

class ImageProxy : public Graphic
{
public:
	ImageProxy(const char* imageFile);
	virtual ~ImageProxy();

	// Graphic �������̽��� ����
	virtual void Draw(const Point& at);
	virtual void HandleMouse(Event& event);

	virtual const Point& GetExtent();

	virtual void Load(istream& from);
	virtual void Save(ostream& to);
protected:
	// �� ��ü�� ���� ����
	Image* GetImage();
private:
	// ���Ͻð� �����ϴ� ����
	Image* _image;
	Point _extent;
	char* _fileName;
};
