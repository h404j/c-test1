#include<stdio.h>
void FindMax(int p[][3], int m, int n, int *pRow, int *pCol)
{
    //在m*n矩阵p中查找最大值，将其行下标存入pRow所指内存单元，将其列下标存入pCol所指内存单元
    int max=p[0][0];
    *pRow=0;
    *pCol=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (p[i][j]>max)
           {
               max=p[i][j];
               *pRow = i;
               *pCol = j;
           }
           
        }
    }
    
}
int main(){
    int m=2,n=3,p[][3]={0},pRow,pCol;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            scanf("%d",&p[i][j]);
        }
        
    }
    FindMax(p, m, n, &pRow, &pCol);
printf("%d %d %d",p[pRow][pCol],pRow,pCol);
}