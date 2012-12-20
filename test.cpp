#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	string st1("weiw");
	string st2("weiligang");
	string st3;
	string::size_type si;
	
	//std::cin >> st1;
	//cout << a << "\n" << b << endli;
	if (st1.empty() == true)
	{
		cout << "st1 is empty\n";	
	}

	if (st1 == st2)
	{
		cout << "st1 == st2\n";
	}
	else if (st1 > st2)
	{
		cout << "st1 > st2\n";
	}
	else
	{
		cout << "st1 < st2\n";	
	}

	st3 = st2 + "1";
	cout << st3 << endl;
	st3 = "1" + st1;
	cout << st3 << endl;
	st3 = st1 + "3" + "4";
	cout << st3 << endl;
	st3 = "5" + st1 + "6";	
	cout << st3 << endl;
	cout << st1 << endl;
	cout << st2 << endl;
	cout << st3 << endl;

	return 0;
}
