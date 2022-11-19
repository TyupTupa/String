#include <iostream>
# include "String.h"
using namespace std;


int main()
{
	String a;
	cout << a << endl;
	String b = "Maria";
	cout << b << endl;
	String c("Klinova");
	cout << c << endl;
	String d(20, 'A');
	cout << d << endl;
	cout << c[5] << endl;
	cout << d.size() << endl;
	a = b;
	cout << a << endl;
	a = "Not Maria";
	cout << a << endl;
	a.clear();
	cout << a << endl;
	if (a.isEmpty()) cout << "Hehe" << endl;
	else cout << "Not hehe" << endl;
	a += "Maria";
	cout << a << endl;
	a += ' ';
	cout << a << endl;
	a += c;
	cout << a << endl;
	a.clear();
	a = "Maria";
	String phrase = "hehee";
	a.append(" says ");
	a.append(phrase);
	cout << a << endl;
	a.pop_back();
	cout << a << endl;
	a.strReverse();
	cout << a << endl;
	String cry_of_the_soul = "AAAAAAA";
	cry_of_the_soul.toLower();
	cout << cry_of_the_soul << endl;
	cry_of_the_soul.toUpper();
	cout << cry_of_the_soul << endl;
	return 0;
}