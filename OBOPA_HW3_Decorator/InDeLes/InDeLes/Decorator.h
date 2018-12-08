#pragma once
#include "Widget.h"
class Decorator : public Widget
{
public:
	Decorator(Widget* w);
private:
	Widget* widget;
};

