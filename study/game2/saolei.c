#define ROW 9
#define COL 9
#define ROWS ROW + 3
#define COLS COL + 3
#define NUM_MINE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play(char board[ROWS][COLS], char Mineboard[ROWS][COLS], int row, int col);
void menu();
void lookmine(char board[ROWS][COLS], char Mineboard[ROWS][COLS], int x, int y);
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
void play(char board[ROWS][COLS], char Mineboard[ROWS][COLS], int row, int col)
{
    int x, y;
    printf("请输入你要扫的坐标");
    scanf("%d%d", &x, &y);
    lookmine(board, Mineboard, x, y);
    displayBoard(board, ROW, COL);
    displayBoard(Mineboard, ROW, COL);
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
    srand((unsigned)time(NULL));
    int a = NUM_MINE;
    while (a)
    {
        int x = rand() % 9 + 1;
        int y = rand() % 9 + 1;
        if (board[x][y] == 79)
        {
            board[x][y] = '@';
            a--;
        }
    }
}
void showmine(char board[ROWS][COLS], char Mineboard[ROWS][COLS], int row, int col)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
        }
    }
}
void lookmine(char board[ROWS][COLS], char Mineboard[ROWS][COLS], int x, int y)
{
    if (x > 0 && x <= ROW && y > 0 && y <= COL)
    {

        if (board[x][y] != '@')
        {
            int z = 0;
            int i = 0;
            if (board[x][y + 1] > 60)
            {
                z += board[x][y + 1];
                i++;
            }
            if (board[x][y - 1] > 60)
            {
                z += board[x][y - 1];
                i++;
            }
            if (board[x + 1][y + 1] > 60)
            {
                z += board[x + 1][y + 1];
                i++;
            }
            if (board[x + 1][y - 1] > 60)
            {
                z += board[x + 1][y - 1];
                i++;
            }
            if (board[x - 1][y - 1] > 60)
            {
                z += board[x - 1][y - 1];
                i++;
            }
            if (board[x - 1][y + 1] > 60)
            {
                z += board[x - 1][y + 1];
                i++;
            }
            if (board[x + 1][y] > 60)
            {
                z += board[x + 1][y];
                i++;
            }
            if (board[x - 1][y] > 60)
            {
                z += board[x - 1][y];
                i++;
            }
            z = -(z - i * 79);
            z /= 14;
            if (z == 0)
            {
                Mineboard[x][y] = ' ';
                if (board[x][y + 1] > 60)
                {
                    lookmine(board, Mineboard, x, y + 1);
                }
                if (board[x][y - 1] > 60)
                {
                    lookmine(board, Mineboard, x, y - 1);
                }
                if (board[x + 1][y + 1] > 60)
                {
                    /* code */
                    lookmine(board, Mineboard, x + 1, y + 1);
                }

                if (board[x + 1][y - 1] > 60)
                {
                    /* code */
                    lookmine(board, Mineboard, x + 1, y - 1);
                }
                if (board[x - 1][y + 1] > 60)
                {
                    /* code */
                    lookmine(board, Mineboard, x - 1, y + 1);
                }
                if (board[x - 1][y - 1] > 60)
                {
                    /* code */
                    lookmine(board, Mineboard, x - 1, y - 1);
                }
                if (board[x + 1][y] > 60)
                {
                    /* code */
                    lookmine(board, Mineboard, x + 1, y);
                }
                if (board[x - 1][y] > 60)
                {
                    /* code */
                    lookmine(board, Mineboard, x - 1, y);
                }
            }
            else
            {
                Mineboard[x][y] = 48 + z;
            }
        }
    }
}
void game()
{
    char board[ROWS][COLS];
    char Mineboard[ROWS][COLS];
    InitBoard(board, ROWS, COLS, 79);
    InitBoard(Mineboard, ROWS, COLS, '?');
    Initmine(board, ROW, COL);
    do
    {
        play(board, Mineboard, ROW, COL);
    } while (1);
}