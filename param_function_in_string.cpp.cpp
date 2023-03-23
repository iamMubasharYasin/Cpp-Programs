#include<iostream>
using namespace std;
void Name(string,string);
int main()
{
	string a,b;
	cout<<"Please Enter First Name ";
	cin>>a;
	cout<<"Please Enter Last Name ";
	cin>>b;
	
	Name(a,b);
}
void Name(string a,string b)
{
	cout<<"Your full Name is "<<a+b;
}
