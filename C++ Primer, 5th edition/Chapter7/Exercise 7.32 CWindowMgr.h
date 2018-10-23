#ifndef __WINDOWMGR_EXERCISE_7_32__
#define __WINDOWMGR_EXERCISE_7_32__

#include <iostream>
#include <string>
#include <vector>
#include "Exercise 7.27 CScreen.h"

using namespace std;

class CWindowMgr
{
	
public:
	CWindowMgr();
	~CWindowMgr();

	using ScreenIndex = vector<CScreen>::size_type;
	void clear(ScreenIndex);

private:
	vector<CScreen> screens{ CScreen(24,80,' ') };
};

#endif

