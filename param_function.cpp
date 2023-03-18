#include<iostream>
using namespace std;
void Add(int, int);
int main()
{
	int valueOne, valueTwo;
	cout<<"Please enter value number one";
	cin>>valueOne;
	cout<<"Please enter value two";
	cin>>valueTwo;
	
	Add(valueOne,valueTwo);
}

void Add(int a, int b)
{
	cout<<a+b;
}
