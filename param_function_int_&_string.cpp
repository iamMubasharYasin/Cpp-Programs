#include<iostream>
using namespace std;
void Add(int,int,string);
int main()
{
	Add(4,5,"Mubashar");

}
void Add(int a,int b,string Name)
{
	cout<<"Hi I am "<<Name<<endl;
	cout<<"The sum is "<<a+b;
}
