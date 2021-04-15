#include "ImagePtr.h"

ImagePtr::ImagePtr(const char* theImageFile)
{
	_imageFile = theImageFile;
	_image = 0;
}

// 내부에서 필요할 때 Image 인스턴스를 생성함
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