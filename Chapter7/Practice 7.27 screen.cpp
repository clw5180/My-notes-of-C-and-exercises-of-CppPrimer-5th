#include "Practice 7.27 screen.h"

CScreen::~CScreen()
{
}

CScreen &CScreen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}


CScreen::pos CScreen::size() const
{
	return height * width;
}
