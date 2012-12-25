#include <iostream>
#include <string>
#include <vector>
#include <bitset>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::bitset;


int main()
{
	int word;
	vector<int> ivec1(10);
	bitset<32> bitvec(0xff);

	cout << bitvec[10] << endl;

	cout << ivec1.size() << endl;	
	
	for (vector<int>::iterator ix = ivec1.begin(); ix != ivec1.end(); ix++)
	{
		*ix = 1;
		cout << *ix << endl;	
	}
	cout << ivec1.size() << endl;	

	return 0;
}
