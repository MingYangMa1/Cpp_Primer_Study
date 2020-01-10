//E1
/*
#include<iostream>
#include<bitset>
using std::cout;
using std::endl;
using std::bitset;

int main()
{
	bitset<32> bitvec1;
	int a = 1;
	int b = 2;
	int temp = 0;
	int boundry = 21;
	bitvec1.set(1);
	bitvec1.set(2);
	while(b!=boundry)
	{   
		temp = a + b;
		a = b;
		b = temp;
		bitvec1.set(b);	
	}
	cout << bitvec1 << endl;
	return 0;
}
*/

//E2: one array to another array; one vector to another vector
/*
#include<iostream>
#include<vector>
using std::vector;
using std::endl;
using std::cout;

int main()
{
	const unsigned array_size = 10;
	int a1[] = { 1,2,3,4,5 };
	int b1[array_size];
	for (size_t i = 0; i != array_size; i++)
		b1[i] = 0;
	vector<int> vec1 = {1,2,3,4,5,6};
	vector<int> vec2 = vec1;

	for (size_t i = 0; i != 5; i++)
		b1[i] = a1[i];
	cout << "Print b1:";
	for (size_t i = 0; i != array_size; i++)
		cout << b1[i] << "\t";
	cout << "\nPrint vector 2:";
	for (vector<int>::iterator ivac = vec2.begin(); ivac != vec2.end(); ivac++)
		cout << *ivac << "\t";
	return 0;
}
*/
//E4 : compare two arrays or two vectors
/*
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool compare_array(int a1[],int a2[],size_t n){
	for (size_t i = 0; i != n; i++)
	{
		if (a1[i] != a2[i])
			return false;
	}
	return true;
}

bool compare_vec(vector<int> v1, vector<int> v2) {
	if (v1.size() != v2.size())
		return false;
	for (vector<int>::iterator iter1 = v1.begin(), iter2 = v2.begin(); iter1 != v1.end(); iter2++, iter1++)
	{
		if (*iter1 != *iter2)
			return false;
	}
	return true;

}

int main()
{
	int a1[] = { 1,2,3,4,5,6 };
	int a2[] = { 1,2,3,4,5,6 };

	if (compare_array(a1, a2, 6))
		cout << "Two arrys are Same" << endl;
	else
		cout << " Two arrays are Different" << endl;

	vector<int> vec1 = { 1,2,3,4,5 };
	vector<int> vec2 = { 1,2,3,4,5 };

	if (compare_vec(vec1, vec2))
		cout << "Two vectors are the same" << endl;
	else
		cout << "Two vectors are different" << endl;
	
	return 0;


}
*/

//E5: pointer
/*
#include<iostream>
using std::cout;
int main()
{
	int test = 5;
	int* i;
	i = &test;
	int* j = &test;
	cout << "the actual address is " << &test << std::endl;
	cout << "the i addresses :" << i << std::endl;
	cout << "the j addresses :" << j << std::endl;
	return 0;

}
*/
// pointer to pointer
/*
int main()
{
	int i = 1;
	int* pi = &i;
	int** ppi = &pi;
	int*** pppi = &ppi;
	int* text = *ppi;
}
*/

//e:6
/*
#include<iostream>
using std::cout;
using std::endl;
int main()
{
	int ival = 100;
	int &ri = ival;
	cout << "the result of ri :" << ri << " and &ri: " << &ri << "\nthe result of ival:" << ival <<"\tThe address of ai "<<&ival<<endl;
	return 0;
}
*/
//E6: *p[-3]
/*
#include<iostream>
using std::cout;
using std::endl;
int main()
{
	int a[] = { 1,2,3,4,5 };
	int* p = a;
	cout << "Dereference p[-3]: " << p[-3] << endl;
	return 0;
}

// no warning and bug, but no correct and it is illegal.
*/

//Exercise: array and point
/*
#include<iostream>
using std::cout;
using std::endl;
int main()
{
	const unsigned array_size = 6;
	int a[array_size] = { 7,1,2,3,4,5 };
	int* p = a;
	for (p = &a[0]; p != &a[0] + array_size; p++)
		*p = 0;
	cout << "The changed array a is : ";
	for (p = &a[0]; p != &a[0] + array_size; p++)
		cout << *p <<"\t";
	return 0;
}
*/
// Exercise: int *const pi;
/*
#include<iostream>
using std::cout;
using std::endl;
int main()
{
	int i = 5;
	int* const pi = &i;
	cout << "the address of i :" << &i
		<< "\n the value of pi：" << pi << endl;
	return 0;
}
*/
//Exercise: show null
/*
#include<iostream>
using std::cout;
//using std::endl;
int main()
{
	const unsigned array_size = 5;
	char ch1[5] = { 'C','+','+','+','\0' };
	char ch2[] = "C+++";
	const char* pi = "C+++";
	for (char* chp1 = ch1, *chp2 = ch1 + array_size; chp1 != chp2; chp1++)
		cout << *chp1 << "\t";
	char* chp1 = ch1;
	cout << "\nPrint the last value of the array ch1[] :" <<"\""<< chp1[array_size - 1]<<"\""<<std::endl;
	cout << "Don't Print the last value of the array ch1[] :" << "\""<< "\"";
	return 0;
}
*/
#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::strlen;

int main()
{
	
}







