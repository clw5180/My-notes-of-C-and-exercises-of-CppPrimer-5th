#include "Practice 7.27.h"

CScreen &CScreen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

CScreen::~CScreen()
{
}
