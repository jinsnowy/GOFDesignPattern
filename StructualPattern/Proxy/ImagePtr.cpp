#include "ImagePtr.h"

ImagePtr::ImagePtr(const char* theImageFile)
{
	_imageFile = theImageFile;
	_image = 0;
}

// ���ο��� �ʿ��� �� Image �ν��Ͻ��� ������
Image* ImagePtr::LoadImage()
{
	if (_image == 0)
	{
		_image = LoadAnImageFile(_imageFile);
	}
	return _image;
}

Image* ImagePtr::operator->()
{
	return LoadImage();
}

Image& ImagePtr::operator*()
{
	return *LoadImage();
}