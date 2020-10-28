#include "game.h"
void player(char board[ROW][COL], int row, int col);
void displayBoard(char board[ROW][COL], int row, int col) //打印棋盘
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (int j = 0; j < col; j++)
            {

                if (j > 0)
                {
                    printf("|---");
                }
                else
                {
                    printf("---");
                }
            }
            printf("\n");
        }
    }
}
void InitBoard(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void game2()
{
    char bord[ROW][COL] = {0};
    InitBoard(bord, ROW, COL);
    //初始化棋盘
    displayBoard(bord, ROW, COL); //打印棋盘
    playre(bord, ROW, COL);
}
void menu()
{
    printf("------------------------\n");
    printf("-----1.play   0.exit----\n");
    printf("------------------------\n");
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
            printf("三子棋游戏开始：\n");
            game2();
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
void playre(char board[ROW][COL], int row, int col)
{
    int x, y;
    printf("请输入要下的位置");
    scanf("%d%d", &x, &y);
    if (x > 0 && x <= 3)
    {
        if (board[x - 1][y - 1] != ' ')
        {
            board[x][y] = '*';
        }
        else
        {
            printf("位置已被占用");
        }
    }
    else
    {
        printf("输入错误，请重新输入");
    }
}
int main()
{

    printf("%d", ROW);
    test();
    return 0;
}