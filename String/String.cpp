#include "String.h"
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
using namespace std;

String::String()
{
}

String::String(const String& curStr)
{
	for (unsigned int i = 0; i < curStr.size(); i++)
		this->array[i] = curStr[i];
}

String::String(const char* s)
{
	unsigned int len = strlen(s);
	for (unsigned int i = 0; i < len; i++)
		this->array.push_back(s[i]);
}

String::String(int n, char c)
{
	for (unsigned int i = 0; i < n; i++)
		this->array.push_back(c);
}

char& String::operator[](unsigned int index)
{
	if (index < this->array.size())
		return array[index];
	else throw invalid_argument("Index > Length of string");
}

const char& String::operator[](unsigned int index) const
{
	if (index < this->array.size())
		return array[index];
	else throw invalid_argument("Index > Length of string");
}

int String::size() const
{
	return array.size();
}


String& String::operator=(const String& curStr)
{
	this->array = curStr.array;
	return *this;
}

String& String::operator=(const char* s)
{
	this->clear();
	unsigned int len = strlen(s);
	for (unsigned int i = 0; i < len; i++)
		this->array.push_back(s[i]);
	return *this;
}

void String::reserve(unsigned int n)
{
	this->array.reserve(n);
}

void String::clear() noexcept
{
	this->array.clear();
}

bool String::isEmpty() const noexcept
{
	if (this->array.size() == 0) return true;
	else return false;
}

String& String::operator+=(const String& curStr)
{
	for (unsigned int i = 0; i < curStr.size(); i++)
		this->array.push_back(curStr[i]);
	return *this;
}

String& String::operator+=(const char* s)
{
	unsigned int len = strlen(s);
	for (unsigned int i = 0; i < len; i++)
		this->array.push_back(s[i]);
	return *this;
}

String& String::operator+=(char c)
{
	this->array.push_back(c);
	return *this;
}

String& String::append(const String& curStr)
{
	*this += curStr;
	return *this;
}

String& String::append(const char* s)
{
	*this += s;
	return *this;
}

void String::strReverse()
{
	reverse(this->array.begin(), this->array.end());
}

void String::toLower()
{
	transform(this->array.begin(), this->array.end(), this->array.begin(), tolower);
}

void String::toUpper()
{
	transform(this->array.begin(), this->array.end(), this->array.begin(), toupper);
}

void String::pop_back()
{
	this->array.pop_back();
}




ostream& operator<<(ostream& os, String& curStr)
{
	for (unsigned int i = 0; i < curStr.size(); i++)
	{
		os << curStr[i];
	}
	return os;
}
//
//istream& operator>>(istream& is, String& st)
//{
//	return  0;
//}

bool operator==(String& curStr1, String& curStr2)
{
	if (curStr1.array == curStr2.array) return true;
	else return false;
}

