#define ROW 9
#define COL 9
#define RDWS ROW + 2
#define COLS COL + 2
#include <stdio.h>
void menu();
void test();
void InitBoard(char board[ROW][COL], int row, int col, char c);
int main()
{
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
void InitBoard(char board[ROW][COL], int row, int col, char c)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = c;
        }
    }
}
void game(){
    char board[RDWS][COLS];
    InitBoard(board,ROW,COL,'#');
}