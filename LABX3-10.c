#include <stdio.h>
#include <stdbool.h>

bool Row(int board[9][9], int row) 
{
    int count[10]={0};
    int i,num;
    for(i=0;i<9;i++) 
	{
        num=board[row][i];
        if(num!=0) 
		{
            if(count[num]) 
				return false;
            count[num]=1;
        }
    }
    return true;
}

bool Col(int board[9][9],int col) 
{
    int count[10]={0};
    int i;
    for(i=0;i<9;i++) 
	{
        int num=board[i][col];
        if(num!=0)
		{
            if(count[num]) 
				return false;
            count[num]=1;
        }
    }
    return true;
}

bool Box(int board[9][9],int startRow,int startCol) 
{
    int count[10]={0};
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) 
		{
            int num = board[startRow+i][startCol+j];
            if(num != 0)
			{
                if(count[num]) 
					return false;
                count[num]=1;
            }
        }
    return true;
}

bool ValidSudoku(int board[9][9]) 
{
	int i,j;
    for(i=0;i<9;i++)
        if(!Row(board,i)||!Col(board,i))
            return false;
    for(i=0;i<9;i+=3)
        for(j=0;j<9;j+=3)
            if(!Box(board,i,j))
                return false;
    return true;
}

int main()
{
	int i,j;
    int board[9][9];
    printf("Enter 9x9 Sudoku board (0 for empty cells):\n");
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            scanf("%d",&board[i][j]);
    
    if(ValidSudoku(board))
        printf("The Sudoku board is valid.\n");
    else
        printf("The Sudoku board is invalid.\n");
    
    return 0;
}
