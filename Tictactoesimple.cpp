#include<iostream>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,column;
bool draw=false;
void display_board()
{
	system("cls");
	cout<<"\n\n	T i c k	 C r o s s	G a m e\n"<<endl;
	cout<<"\tPlayer1 [X] \n\tPlayer2 [0]\n\n";
//	cout<<"\n\n";
	
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
		case 9: row=2; column=2; break;
		
		default:
			cout<<"Invalid Choice \n";
			player_turn();
	
}
	if(turn=='X' && board[row][column]!='X' && board[row][column]!='O')
	{
		board[row][column]='X';
		turn='O';
	}
	else if(turn=='O' && board[row][column]!='X' && board[row][column]!='O')
	{
		board[row][column]='O';
		turn='X';
	}
	else
	{
		cout<<"Box Already Filled !\n Please Try Again ! \n\n";
		player_turn();
	}
	display_board();
}
bool gameover()
{
	//check win
	for(int i=0;i<3;i++)
	{
	if(board[i][0] == board[i][0] && board[i][0] == board[i][2])//check rows
	return true;
	
	if(board[0][i] == board[1][i] && board[1][i] == board[2][i])//check rows
	return true;
	}
	
	
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) // Check diagonal 1
   return true;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) // Check diagonal 2
	return true;
	
	// Check for a draw
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false; // Continue the game if there's any unfilled cell
        }
    }
    draw = true;
    return true; // End the game if all cells are filled
		
}
int main()
{
    while(!gameover())
    {
        display_board(); // Display the board
        player_turn();    // Player's turn
    }

    if(draw)
        cout<<"Game Draw!\n";
    else if(turn == 'O')
        cout<<"Player1 [X] Wins!! Congratulations\n";
    else
        cout<<"Player2 [O] Wins!! Congratulations\n";
    
    //return 0;
}
