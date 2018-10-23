#ifndef __SCREEN_EXERCISE_7_27__
#define __SCREEN_EXERCISE_7_27__

#include <iostream>
#include <string>
//#include "Exercise 7.32 CWindowMgr.h"

using namespace std;

class CScreen
{
	//friend void CWindowMgr::clear(ScreenIndex);
	friend class CWindowMgr;
public:
	
	typedef string::size_type pos;

	CScreen() = default;
	CScreen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	CScreen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
	~CScreen();

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width + c]; }
	CScreen &move(pos r, pos c);

	CScreen &set(char c)
	{
		contents[cursor] = c;
		return *this;
	}

	CScreen &set(pos r, pos c, char ch)
	{
		contents[r*width + c] = ch;
		return *this;
	}

	CScreen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}

	const CScreen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}

	pos size() const;

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;

	void do_display(ostream &os) const { os << contents; }
};

#endif