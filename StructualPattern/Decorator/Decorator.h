#pragma once
#include "../Common/VisualComponent.h"

class Decorator : public VisualComponent
{
public:
	Decorator(VisualComponent* component) : _component(component) {}
	virtual void Draw() { _component->Draw(); }
	virtual void Resize() { _component->Resize();}
	// ...
private:
	VisualComponent* _component;
};