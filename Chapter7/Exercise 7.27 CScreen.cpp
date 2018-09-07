#include "Exercise 7.27 CScreen.h"

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
