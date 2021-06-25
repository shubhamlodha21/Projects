////////////////////////////////////////////////////////
//Function Name:Tik-Tac-Tae
//Description:Tik-Tac-Tae Game Application by Using C-Programming
//Date: 25/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};

int CheckWin()
{
	if((square[1]==square[2])&&(square[2]==square[3]))
	{
		return 1;
	}
	else if((square[4]==square[5])&&(square[5]==square[6]))
	{
		return 1;
	}
	else if((square[7]==square[8])&&(square[8]==square[9]))
	{
		return 1;
	}
	else if((square[1]==square[4])&&(square[4]==square[7]))
	{
		return 1;
	}
	else if((square[2]==square[5])&&(square[5]==square[8]))
	{
		return 1;
	}
	else if((square[3]==square[6])&&(square[6]==square[9]))
	{
		return 1;
	}
    else if((square[1]==square[5])&&(square[5]==square[9]))
    {
    	return 1;
    }
    else if((square[3]==square[5])&&(square[5]==square[7]))
    {
    	return 1;
    }
    else if((square[1]!='1')&&(square[2]!='2')&&(square[3]!='3')&&(square[4]!='4')&&(square[5]!='5')&&(square[6]!='6')&&(square[7]!='7')&&(square[8]!='8')&&(square[9]!='9'))
    {
    	return 0;
    }
    else
    {
    	return -1;
    }
}

void DrawBoard()
{
	printf("\n\n\nTik-Toa Game\n\n\n");
	printf("Player1(X)  Vs   Player(0)\n\n\n");

	printf("%c    |%c   |%c   ",square[1],square[2],square[3]);
	printf("\n_____|____|____\n");
	printf("     |    |    \n");
	printf("%c    |%c   |%c",square[4],square[5],square[6]);
	printf("\n_____|____|____\n");
	printf("     |    |    \n");
	printf("%c    |%c   |%c",square[7],square[8],square[9]);

}


int main()
{
	system("color 6c");
	int player=1,i,ichoice;
	char mark;

	do
	{
	DrawBoard();
	player=(player % 2) ? 1 : 2;
	printf("\nPlayer %d Enter the Choice:  ",player);
	scanf("%d",&ichoice);

	mark=(player==1) ? 'X' : 'O';

	if((ichoice==1)&&(square[1]=='1'))
	{
		square[1]=mark;
	}
	else if((ichoice==2)&&(square[2]=='2'))
	{
		square[2]=mark;
	}
	else if((ichoice==3)&&(square[3]=='3'))
	{
		square[3]=mark;
	}
    else if((ichoice==4)&&(square[4]=='4'))
	{
		square[4]=mark;
	}
    else if((ichoice==5)&&(square[5]=='5'))
	{
		square[5]=mark;
	}
    else if((ichoice==6)&&(square[6]=='6'))
	{
		square[6]=mark;
	}
    else if((ichoice==7)&&(square[7]=='7'))
	{
		square[7]=mark;
	}
    else if((ichoice==8)&&(square[8]=='8'))
	{
		square[8]=mark;
	}
    else if((ichoice==9)&&(square[9]=='9'))
	{
		square[9]=mark;
	}
	else
	{
		printf("Invalid Option\n");
		player--;
	}
    
    i=CheckWin();
    player++;

}while(i==-1);


DrawBoard();
if(i==1)
{
	printf("\n\n\nPlayer %d Won\n",player);
}
else
{
	printf("\nMatch is Draw\n");
}

return 0;
}