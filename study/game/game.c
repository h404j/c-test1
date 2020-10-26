
#include "game.h"
void game()
{
    char bord[ROW][COL]={0};
    InitBoard(bord, ROW, COL);
    //初始化棋盘
    displayBoard(bord, ROW, COL); //打印棋盘
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

int main()
{
    test();
    // game();
    return 0;
}