// Multiplication table.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int n;
	cout << "Enter an interger ";
	cin >> n;
	for (int i = 1; i <= 10; i++)
		cout << i << " * " << n << " = " << n * i << endl;

    return 0;
}

