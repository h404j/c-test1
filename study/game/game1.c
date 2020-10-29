// #include "game.h"
// void InitBoard(char board[ROW][COL], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             board[i][j] = ' ';
//         }
//     }
// }
// void playre(char board[ROW][COL], int row, int col)

// {
//     int x, y;
//     while (1)
//     {
//         printf("请输入要下的位置\n");
//         scanf("%d%d", &x, &y);
//         if (x > 0 && x <= 3)
//         {
//             if (board[x - 1][y - 1] == ' ')
//             {
//                 board[x - 1][y - 1] = '*';
//                 break;
//             }
//             else
//             {
//                 printf("位置已被占用\n");
//             }
//         }
//         else
//         {
//             printf("输入错误，请重新输入\n");
//         }
//     }
// }
// int ifv(char board[ROW][COL], int row, int col)
// {
//     int z = 0, w = 0, z1 = 0, w1 = 0;
//     for (int i = 0; i < row; i++)
//     {
//         int x = 0, y = 0, x1 = 0, y1 = 0;
//         if (board[i][col - 1 - i] == '*')
//         {
//             z++;
//         }
//         if (board[i][i] == '*')
//         {
//             w++;
//         }
//         if (board[i][col - 1 - i] == '#')
//         {
//             z1++;
//         }
//         if (board[i][i] == '#')
//         {
//             w1++;
//         }
//         for (int j = 0; j < col; j++)
//         {

//             if (board[i][j] == '*')
//             {
//                 x++;
//             }
//             if (board[j][i] == '*')
//             {
//                 y++;
//             }
//             if (board[i][j] == '#')
//             {
//                 x1++;
//             }
//             if (board[j][i] == '#')
//             {
//                 y1++;
//             }
//             if (x == 3 || y == 3 || z == 3 || w == 3)
//             {
//                 printf("恭喜你获得了胜利\n");
//                 InitBoard(board, ROW, COL);
//                 return 0;
//             }
//             if (x1 == 3 || y1 == 3 || z1 == 3 || w1 == 3)
//             {
//                 printf("你被电脑打败了\n");
//                 InitBoard(board, ROW, COL);
//                 return 0;
//             }
//         }
//     }
//     return 1;
// }
// void autoplayre(char board[ROW][COL], int row, int col)
// {

//     while (1)
//     {
//         int a = rand(), b = rand();
//         a = a % 3;
//         b = b % 3;
//         if (board[a][b] == ' ')
//         {
//             board[a][b] = '#';
//             break;
//         }
//     }
// }
// void displayBoard(char board[ROW][COL], int row, int col) //打印棋盘
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf(" %c ", board[i][j]);
//             if (j < col - 1)
//             {
//                 printf("|");
//             }
//         }
//         printf("\n");
//         if (i < row - 1)
//         {
//             for (int j = 0; j < col; j++)
//             {

//                 if (j > 0)
//                 {
//                     printf("|---");
//                 }
//                 else
//                 {
//                     printf("---");
//                 }
//             }
//             printf("\n");
//         }
//     }
// }