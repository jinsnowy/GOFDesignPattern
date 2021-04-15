#pragma once
#include "TextShape.h"
class Manipulator
{
public:
	Manipulator();
};

class TextManipulator : public Manipulator
{
public:
	TextManipulator();
	TextManipulator(const TextShape* r);
};