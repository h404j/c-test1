/*

1075: 聚餐人数统计
时间限制: 1 Sec  内存限制: 128 MB
提交: 19003  解决: 11429
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


马克思手稿中有这样一道趣味数学题：男人、女人和小孩总计n个人，在一家饭店里吃饭，共花了cost先令，每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，请用穷举法编程计算男人、女人和小孩各有几个。 



输入 


输入两个正整数，表示人数n和花费cost。 



输出 


若问题有解，则输出所有解，每行输出三个数据，代表男人、女人和小孩的人数，用空格分隔；若问题无解，则输出“No answer"。 



样例输入 Copy 

30 50



样例输出 Copy 

0 20 10
1 18 11
2 16 12
3 14 13
4 12 14
5 10 15
6 8 16
7 6 17
8 4 18
9 2 19
10 0 20



来源/分类 

**  

 
[提交] [状态] */
#include<stdio.h>
int main(){
    //这道题大体上是从74题复制过来的，两个题思路相同
    int n, i, j, k,flag = 0,cost;
    scanf("%d%d", &n,&cost);
    for (i = 0; i <= n; i++) //i是男人
    {
        for (j = 0; j <= n; j++) //j是女人
        {
            for (k = 0; k <= n; k++) //k是小孩
            {
                if ((i + j + k) == n&& (3 * i + 2 * j + k ) == cost) //公鸡母鸡小鸡的数量和买它们所花费的钱等于n
                {
                    flag = 1;
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("No answer");
    }
}