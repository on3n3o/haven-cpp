// 010-file-validator-with-coloring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>   // WinApi header

using namespace std;

int main(int argc, char* argv[])
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int wrong_color = 64, wright_color = 10;

	if (argc > 1) {
		ifstream file(argv[1]);

		char ch, c;
		while (scanf_s("%c", &ch) != EOF) {
			file.get(c);
			if (c == ch) { 
				SetConsoleTextAttribute(hConsole, wright_color);
				cout << c;
			}
			else {
				SetConsoleTextAttribute(hConsole, wrong_color);
				cout << c;
			}
		}
	}
	else {
		cout << "No file specified at argument point!"<<endl;
	}
	SetConsoleTextAttribute(hConsole, 15);
    return 0;
}

