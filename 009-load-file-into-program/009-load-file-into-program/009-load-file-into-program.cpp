// 009-load-file-into-program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int iterations;
	scanf_s("%d", &iterations);
	for (int i = 0; i < iterations; i++) {
		int val1, val2;
		scanf_s("%d:%d", &val1, &val2);
		cout << "Val1: " << val1 << " Val2: " << val2 << endl;
	}
    return 0;
}

