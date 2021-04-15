#include "ImageProxy.h"

// ImageProxy �ʱ�ȭ
ImageProxy::ImageProxy(const char* fileName)
{
	_fileName = strdup(fileName);
	_extent = Point::Zero;
	_image = 0;
}

// Image �ν��Ͻ� ����
Image* ImageProxy::GetImage()
{
	if (_image == 0)
	{
		_image = new Image(_fileName);
	}
	return _image;
}

// GetExtent()�� ���� �̹��� ũ�� ��ȯ
const Point& ImageProxy::GetExtent()
{
	if (_extent == Point::Zero)
		_extent = GetImage()->GetExtent();
	return _extent;
}

// ȭ�鿡 �׸���
void ImageProxy::Draw(const Point& at)
{
	// ��� ������ GetImage�� ���� �Ѵ�.
	GetImage()->Draw(at);
}

// �̹��� ũ�� ������
void ImageProxy::HandleMouse(Event& event)
{
	GetImage()->HandleMouse(event);
}

// �̹��� ũ�� ������ �̸� ����
void ImageProxy::Save(ostream& to)
{
	to << _extent << _fileName;
}

// �̹��� ũ�� ������ �̸� �ҷ�����
void ImageProxy::Load(istream& from)
{
	from >> _extent >> _fileName;
}

