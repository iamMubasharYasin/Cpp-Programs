#include<iostream>
using namespace std;
void Add(int,int);
void Subtract(int,int);
void Multiply(int,int);

int main()
{
	int choice;
	label:
	cout<<"Welcome to the Program"<<endl;
	cout<<"Please Enter your choice 1 for add 2 for sub & 3 for Multiply"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
				int valueOne,valueTwo;
				cout<<"Please Enter value one";
				cin>>valueOne;
				cout<<"Please Enter value two";
				cin>>valueTwo;
				Add(valueOne,valueTwo);
				break;	
			}
			case 2:
				{
				int valueOne,valueTwo;
				cout<<"Please Enter value one";
				cin>>valueOne;
				cout<<"Please Enter value two";
				cin>>valueTwo;
				Subtract(valueOne,valueTwo);
				break;	
				}
				case 3
				:
				{
				int valueOne,valueTwo;
				cout<<"Please Enter value one";
				cin>>valueOne;
				cout<<"Please Enter value two";
				cin>>valueTwo;
				Multiply(valueOne,valueTwo);
				break;	
				}
				default:
				{
				cout<<"Invalid Choice"<<endl;
				goto label;
				}
	}
		
}
void Add(int a,int b)
{
	cout<<"The sum is:"<<a+b<<endl;
}
void Subtract(int a,int b)
{
	cout<<"The difference is:"<<a-b<<endl;
}
void Multiply(int a,int b)
{
	cout<<"The Product is:"<<a*b<<endl;
}
