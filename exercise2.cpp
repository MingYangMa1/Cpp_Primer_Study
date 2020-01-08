

//E1.Global variable has the same name with local variable,test.
/* 
#include <iostream>
int a = 0;
void bar(int a)
{
	::a = a;
}

int main()
{
	int test = -1;
	bar(test);
	std::cout << "Print the global variable a : " << a << std::endl;
	return 0;

}

*/
//The result is -1

// Exercise 2 :double to int automatically

/*
#include <iostream>
int main()
{   
	int z = 1.91;// text z
	double i = 4.99999;
	int j;
	j = i;// test double to int
	const int ref_z = z; //texting refering to z, it is okey?

	std::cout << "The result j is: " << j 
		      <<"\t"<<"The result z is:"<<z<<std::endl;
	return 0;
}
*/
// the result j = 4 ; z = 1!!! It can execute£¡£¡ All of thinking above is absolutely correct!!!:)

//text unsigned int
/*
#include <iostream>
int main()
{
	int i(4u);
	i = -7;
	std::cout << "System print out i: " << i << std::endl;
	
	//-------------
	unsigned int j(-7);
	j = 8;
	std::cout << "System print out j: " << j << std::endl;

	return 0;

}
*/
// the result is i = -7; j =8;

//Tip: main() cannot be added into the Class as a method.!! 
/*
class Test {
private:
	
public:
	
};
int main() {
	return 0;
}
*/
//Ok for above code

//Text int i
/*
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
int i;
//string j;
int main()
{
	//int i;
	string j;
	cout << j << endl;
	return 0;
}
*/

// ok
/*
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word;
	while (cin >> word)
	{
		if (word == "#")
		{
			return 0;
		}

		cout << word <<endl;
		
	}
	return 0;
}
*/
//ok.

//E5: xxx
/*
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string line;
	// read line at time until end-of-file 
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}
*/

//E6: string str(n,'c');
/*
#include <iostream>
#include <string>
//using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str(5, 'k');
	cout << "the result is :" << str << endl;
	return 0;
}
*/

//E7: vector
/*
#include <iostream>
#include <string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	
	vector<int> ivec;
	for (vector<string>::size_type ix = 0; ix != 10; ++ix)
		ivec.push_back(ix);
	
	return 0;
}
*/
//Exe:bitset
/*
#include<iostream>
#include<bitset>
#include<string>
using std::string;
using std::bitset;
using std::cout;
using std::endl;
int main() {
	string str("11010111001");
	bitset<32> bitvec(str, str.size() - 5);
	cout << bitvec << endl;
	return 0;
}
*/
