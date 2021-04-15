#pragma once

class Image;

// 외부에 선언된 함수를 이용
extern Image* LoadAnImageFile(const char*);

class ImagePtr {
public:
	ImagePtr(const char* imageFile);
	virtual ~ImagePtr();

	// 멤버 접근 연산자 오버로딩
	virtual Image* operator->();
	// 간접 접근 연산자 오버로딩
	virtual Image& operator*();
private:
	Image* LoadImage();
private:
	Image* _image;
	const char* _imageFile;
};