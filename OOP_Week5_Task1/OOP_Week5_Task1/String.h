#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class String
{
private:
	void copy(const String&);
	void destroy();
	char *data;
	size_t size;


public:
	String();
	String(char *newdata, size_t newsize);
	String(const String& other);
	String& operator=(const String& other);
	~String();
	void Print();
	int getdata() const;

	char getAt(int index);
	void setAt(int index, char symbol);

	void concat(String other);
	void concat(char* other);



};

int x2Size(const String&);