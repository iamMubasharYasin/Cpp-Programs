#include<iostream>
using namespace std;
class Game
{
	private:
	char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	char turn='X';
	int row,column;
	
	public:
	void display_board()
{
	system("cls");
	cout<<"\n\n	T i c k	 C r o s s	G a m e\n"<<endl;
	cout<<"\tPlayer1 [X] \n\tPlayer2 [0]";
	cout<<"\n\n";
	
	cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\t\t     |     |     \n";
}
void player_turn()
{
	int choice;
	
	if(turn=='X')
	cout<<"\n\tPlayer1 [X] turn : "; 
	
	if(turn=='O')
	cout<<"\n\tPlayer2 [O] turn : ";
	
	cin>>choice;
	switch(choice)
	{
		case 1: row=0; column=0; break;
		case 2: row=0; column=1; break;
		case 3: row=0; column=2; break;
		case 4: row=1; column=0; break;
		case 5: row=1; column=1; break;
		case 6: row=1; column=2; break;
		case 7: row=2; column=0; break;
		case 8: row=2; column=1; break;
		case 9: row=2; column=3; break;
		
		default:
			cout<<"Invalid Choice \n";
	
}
	if(turn=='X')
	{
		board[row][column]='X';
		turn='O';
	}
	else if(turn=='O')
	{
		board[row][column]='O';
		turn='X';
	}
}
};
int main()
{
	Game G1;
	while(true)
	{
	G1.display_board();	//calling Board 
	G1.player_turn();
	G1.display_board();
	}
	 
	 
}