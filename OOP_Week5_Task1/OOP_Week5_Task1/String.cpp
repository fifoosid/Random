#include "stdafx.h"
#include "String.h"



void String::copy(const String& other)
{
	this->data = new char[strlen(other.data) + 1];
	strcpy_s(this->data, strlen(other.data) + 1, other.data);
	this->size = other.size;
}

void String::destroy()
{
	delete[] this->data;
	this->size = 0;
}

String::String(const String& other)
{
	copy(other);
}

String& String::operator=(const String& other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}
	return *this;
}

String::String()
{
	this->data = nullptr;
	this->size = 0;
}

String::String(char* newdata, size_t newsize)
{
	this->data = new char[strlen(newdata) + 1];
	strcpy_s(this->data, strlen(newdata) + 1, newdata);
	this->size = newsize;
}

void String::Print() 
{
	cout << this->data << endl;
	cout << this->size << endl;
}

String::~String()
{
	destroy();
}

int String::getdata() const
{
	return this->size;
}

int x2Size(const String& obj)
{
	return obj.getdata()*obj.getdata();
}



char String::getAt(int i)
{
	return this->data[i];
}

void String::setAt(int indx, char sym)
{
	this->data[indx] = sym;
}



void String::concat(char* other)
{
	int size1 = strlen(this->data);
	int size2 = strlen(other);
	char *temp = new char[strlen(this->data) + strlen(other) + 1];
	for (int i = 0; i < size1; i++)
	{
		temp[i] = this->data[i];
	}
	for (int i = 0; i < size2; i++)
	{
		temp[i + size1] = other[i];
	}
	temp[size1 + size2] = '\0';
	delete[] this->data;
	this->data = temp;
}

void String::concat(String other)
{
	int size1 = strlen(this->data);
	int size2 = strlen(other.data);
	char *temp = new char[size1 + size2 + 1];

	for (int i = 0; i < size1; i++)
	{
		temp[i] = this->data[i];
	}
	for (int i = 0; i < size2; i++)
	{
		temp[i + size1] = other.data[i];
	}
	temp[size1 + size2] = '\0';
	delete[] this->data;
	this->data = temp;


}




