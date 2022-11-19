#pragma once
#include <iostream>
#include <vector>
using namespace std;

class String
{
private:
	vector <char> array;

public:
	String();
	String(const String& curStr);
	String(const char* s);
	String(int n, char c);
	char& operator[] (unsigned int index);
	const char& operator[] (unsigned int index) const;
	int size() const;
	String& operator=(const String& curStr);
	String& operator=(const char* s);
	friend ostream& operator<<(ostream& os, String& curStr);
	//friend istream& operator>>(istream& is, String& st);
	void reserve(unsigned int n = 0);
	void clear() noexcept;
	bool isEmpty() const noexcept;
	String& operator+= (const String& curStr);
	String& operator+= (const char* s);
	String& operator+= (char c);
	String& append(const String& curStr);
	String& append(const char* s);
	void strReverse();
	void toLower();
	void toUpper();
	void pop_back();
	friend bool operator== (String& curStr1, String& curStr2);
};

