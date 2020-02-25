// test_2.25.2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
// E_1
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int a[3][4] = {
		{1,2,3,4},
		{2,4,6,8},
		{3,6,9,12}
	};
	for (int(*pi)[4] = a; pi != a + 3; pi++)  // *pi <=> one of a[3]! pi <=> only one address, 
		for (int* pii = *pi; pii != *pi + 4; pii++) // *pi actually is an array, however, *pi means the first element's address.
			cout << *pii << endl;
}
*/
/*
// E_2
#include <iostream>
using std::cout;
using std::endl;
int main() 
{
	int x[10];
	int* pi = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(pi) / sizeof(*pi) << endl;
}


/*
#include <iostream>
using std::cout;
using std::endl;
int main()
{
	int i = 5;
	int& j = i;
	int* pj = &j;
	//int* pj = &j;
	cout << "j is : "<<j << endl;
	cout << "&i is :" << &i << endl;
	cout << "&j is : " << pj << endl;
	//cout << "&j is : " << pj << endl;
}
*/
/*
#include <iostream>
using std::cout;
using std::endl;
using std::string;
int main()
{
	string s1("abs");
	string* ps = &s1;
	string ps2(*ps);
	cout << "ps2 : " << ps2 << endl;

}
*/
/*
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
	cout << "Enter two integer: " << endl;
	int i;
	int j;	
	std::cin >> i >> j;
	cout << i << " " << j << endl;

}
*/
#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::endl;

bool isPrefix(vector<int> vecA, vector<int>vecB)
{
	vector<int> maxV;
	vector<int> smalV;
	if (vecA.size() == 0 || vecB.size() == 0)
		return false;
	if (vecA.size() <= vecB.size())
	{
		smalV = vecA;
		maxV = vecB;
	}

	if (vecA.size() > vecB.size())
	{
		maxV = vecA;
		smalV = vecB;
	}

	vector<int>::iterator iter1 = smalV.begin();
	vector<int>::iterator iter2 = maxV.begin();
	for (; iter1 != smalV.end(); ++iter1,++iter2)
	{
		if (*iter1 != *iter2)
		{
			return false;
		}
	}
	return true;	  	
}

vector<int> get_From_Outside(string vecName)
{
	vector<int> savedVec;
	int a = 0;
	cout << "Input " << vecName << "(tip: End with 9999)" << endl;
	while (cin >> a && a != 9999)
		savedVec.push_back(a);
	cout << "What you have saved is :";
	for (vector<int>::iterator i = savedVec.begin(); i != savedVec.end(); ++i)
		cout << *i << "\t";
	cout << endl;
	return savedVec;
}
int main()
{
	vector<int> vecA;
	vector<int> vecB;
	vecA = get_From_Outside("Vector A");
	vecB = get_From_Outside("Vector B");
	cout << (isPrefix(vecA,vecB) ? "Yes,prefix" : "No,not prefix" )<< endl;
}
