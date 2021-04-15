#pragma once
#include "Graphic.h"
#include "Image.h"

class ImageProxy : public Graphic
{
public:
	ImageProxy(const char* imageFile);
	virtual ~ImageProxy();

	// Graphic 인터페이스와 동일
	virtual void Draw(const Point& at);
	virtual void HandleMouse(Event& event);

	virtual const Point& GetExtent();

	virtual void Load(istream& from);
	virtual void Save(ostream& to);
protected:
	// 실 객체를 접근 제어
	Image* GetImage();
private:
	// 프록시가 관리하는 변수
	Image* _image;
	Point _extent;
	char* _fileName;
};
