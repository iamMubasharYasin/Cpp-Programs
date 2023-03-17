#include<iostream>
using namespace std;
void Add();
void Subtract();
int main()
{
	int choice;
	label:
	cout<<"Welcome to the Program"<<endl;
	cout<<"Please enter your choice 1 for add 2 for sub"<<endl;
	cin>>choice;
	if(choice ==1)
	{
		Add();
	}
	else if(choice == 2)
	{
		Subtract();
	}
	else
	{
		cout<<"Invalid choice"<<endl;
		goto Hammad;
	}
}

void Add()
{
	int valueOne;
	int valueTwo;
	cout<<"Please enter value one";
	cin>>valueOne;
	cout<<"Please enter value two";
	cin>>valueTwo;
	cout<<valueOne+valueTwo;
}

void Subtract()
{
	int valueOne;
	int valueTwo;
	cout<<"Please enter value one";
	cin>>valueOne;
	cout<<"Please enter value two";
	cin>>valueTwo;
	cout<<valueOne-valueTwo;
}
