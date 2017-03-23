// OOP_Week5_Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "String.h"

using namespace std;

int main()
{
	String s1("dasdas", 6);
	s1.Print();

	String s2 = s1;
	s1.Print();

	String s3(s2);
	s3.Print();

	s3.concat(s1);
	s3.Print();

    return 0;
}

