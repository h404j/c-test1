#define ROW 9
#define COL 9
#define ROWS ROW + 3
#define COLS COL + 3
#include <stdio.h>
void menu();
void displayBoard(char board[ROWS][COLS], int row, int col);
void Initmine(char board[ROWS][COLS], int row, int col);
void InitBoard(char board[ROWS][COLS], int row, int col, char c);
void game();
void test();
int main()
{
    test();
}
void menu()
{
    printf("------------------------\n");
    printf("-----1.play   0.exit----\n");
    printf("------------------------\n");
}
void displayBoard(char board[ROWS][COLS], int row, int col) //打印棋盘
{
    for (int c = 0; c <= row; c++)
    {
        printf("%d ", c);
    }
    printf("\n");
    for (int i = 1; i <= row; i++)
    {
        printf("%d ", i);
        for (int j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
void test()
{
    int a;
    do
    {
        menu();
        printf("请选择play or exit\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("游戏开始：\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;

        default:
            printf("请输入正确的选择\n");
            break;
        }
    } while (a);
}
void InitBoard(char board[ROWS][COLS], int row, int col, char c)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = c;
        }
    }
}
void Initmine(char board[ROWS][COLS], int row, int col)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            board[i][j] = '1';
        }
    }
}
void game()
{
    char board[ROWS][COLS];
    InitBoard(board, ROWS, COLS, '0');
    // Initmine(board,ROW,COL);
    displayBoard(board, ROW, COL);
}