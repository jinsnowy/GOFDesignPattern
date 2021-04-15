#include "ImageProxy.h"

// ImageProxy 초기화
ImageProxy::ImageProxy(const char* fileName)
{
	_fileName = strdup(fileName);
	_extent = Point::Zero;
	_image = 0;
}

// Image 인스턴스 접근
Image* ImageProxy::GetImage()
{
	if (_image == 0)
	{
		_image = new Image(_fileName);
	}
	return _image;
}

// GetExtent()를 통한 이미지 크기 반환
const Point& ImageProxy::GetExtent()
{
	if (_extent == Point::Zero)
		_extent = GetImage()->GetExtent();
	return _extent;
}

// 화면에 그리기
void ImageProxy::Draw(const Point& at)
{
	// 모든 접근은 GetImage를 통해 한다.
	GetImage()->Draw(at);
}

// 이미지 크기 재조정
void ImageProxy::HandleMouse(Event& event)
{
	GetImage()->HandleMouse(event);
}

// 이미지 크기 정보와 이름 저장
void ImageProxy::Save(ostream& to)
{
	to << _extent << _fileName;
}

// 이미지 크기 정보와 이름 불러오기
void ImageProxy::Load(istream& from)
{
	from >> _extent >> _fileName;
}

