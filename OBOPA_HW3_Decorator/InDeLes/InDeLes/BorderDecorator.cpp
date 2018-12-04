#include "pch.h"
#include "BorderDecorator.h"



void BorderDecorator::draw() {
	this->widget->draw();

	std::cout << "- Bordered -" << std::endl;
}
