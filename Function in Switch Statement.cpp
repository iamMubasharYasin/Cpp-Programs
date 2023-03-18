#include<iostream>
using namespace std;
void Add();
void Subtract();
void Multiply();
int main()
{
	int choice;
	label:
	cout<<"Welcome to the Program"<<endl;
	cout<<"Please enter your choice 1 for add 2 for sub & 3 for Multiply"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		Add();
		break;
		case 2:
		Subtract();
		break;
		case 3:
		Multiply();
		break;
		default:
		cout<<"Invalid Choice";
		goto label;	
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
void Multiply()
{
	int valueOne;
	int valueTwo;
	cout<<"Please enter value one";
	cin>>valueOne;
	cout<<"Please enter value two";
	cin>>valueTwo;
	cout<<valueOne*valueTwo;
}
