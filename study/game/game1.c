
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col){
for (int i = 0; i < row; i++)
{
    for ( int j = 0; j< col; j++)
    {
        board[i][j]=' ';
    }
    
}

}
 void displayBoard(char arr[ROW][COL], int row, int col) //打印棋盘
 {
for (int i = 0; i <row; i++)
{
    for (int j = 0; j <col; j++)
    {
        printf(" %c ",arr[i][j]);
        if (i<col-1)
        {
            printf("|");
        }
        
    }
    for (int j = 0; j <col; j++)
    {
        if (j>0)
        {
            printf("|---");
        }else
        {
            printf("---");
        }
        
        
        
    }
    
}

}