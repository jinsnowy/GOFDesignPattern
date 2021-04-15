#pragma once

class Image;

// �ܺο� ����� �Լ��� �̿�
extern Image* LoadAnImageFile(const char*);

class ImagePtr {
public:
	ImagePtr(const char* imageFile);
	virtual ~ImagePtr();

	// ��� ���� ������ �����ε�
	virtual Image* operator->();
	// ���� ���� ������ �����ε�
	virtual Image& operator*();
private:
	Image* LoadImage();
private:
	Image* _image;
	const char* _imageFile;
};