// coloring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>   // WinApi header
#include <iostream>

using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// you can loop k higher to see more color choices
	for (int k = 1; k < 255; k++)
	{
		// pick the colorattribute k you want
		SetConsoleTextAttribute(hConsole, k);
		cout << k << " ";
		if (k % 16 == 15) cout << endl;
	}
    return 0;
}

