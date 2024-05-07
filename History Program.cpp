#include<iostream>
using namespace std;
int main()
{
	int wrong_pass_attempt = 1;
	label:
	string password = "admin";
	cout<<"Please enter the password to run the program";
	cin>>password;
	if(password=="admin" || password == "Admin" || password == "ADMIN")
	{
		system("cls");
		int flag = 1;
		int history_counter = 0;
		cout<<"Welcome to the table generator program"<<endl;
		while(flag == 1)
		{
			int limit, choice;
			char history_maintainer;
			cout<<"Please enter a number to print its table";
			cin>>choice;
		
			cout<<"Please enter the limit for table";
			cin>>limit;
		
			for(int i = 1; i<=limit; i++)
			{
				cout<<choice<<" x "<<i<<" = "<<choice*limit<<endl;
			}
		
			cout<<"Press 1 to continue any other key to exit";
			cin>>flag;
		
			do
			{
				cout<<"Do you want to keep the history? (Y/N)?";
				cin>>history_maintainer;
			}
			while((history_maintainer != 'Y' && history_maintainer != 'y') && (history_maintainer != 'N' && history_maintainer != 'n'));
		
			if(history_maintainer == 'N' || history_maintainer == 'n')
			{
				system("cls");
				history_counter++;
				if(history_counter == 1)
				{
					cout<<"History cleaned "<<history_counter<<" Time"<<endl;
				}
				else
				{
					cout<<"History cleaned "<<history_counter<<" Times"<<endl;
				}

				cout<<"Welcome to the table generator program"<<endl;

		} //history maintain if closing. . .
	} // main Program while closing. . .
		
	} //password if closing.
	else
	{
		wrong_pass_attempt++;
		cout<<"Wrong password attempt, number "<<wrong_pass_attempt<<" out of 3"<<endl;
		if(wrong_pass_attempt<=3)
		goto label;
	}
	
} //Main if closing