#include <stdio.h>
void psort(int *pa, int *pb, int *pc, int *pd)
{
    int temp, i, j, k;
    int a[4];
    a[0] = *pa;
    a[1] = *pb;
    a[2] = *pc;
    a[3] = *pd; //运用一个数组来暂存指针变量进行排序，个人感觉比直接比较更简单
    for (i = 0; i < 4; i++)
    {
        k = i;
        for (j = i + 1; j < 4; j++) //简单选择排序
        {
            if (a[k] < a[j])
                k = j;
        }
        temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
    *pa = a[0];
    *pb = a[1];
    *pc = a[2];
    *pd = a[3]; //最后把指针变量按照从大到小依次赋值
}
int main()
{
    void psort(int *pa, int *pb, int *pc, int *pd);
    int a, b, c, d;
    int *p1, *p2, *p3, *p4;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    p4 = &d;
    psort(p1, p2, p3, p4);
    printf("%d %d %d %d\n", a, b, c, d);
    //或者写printf("%d %d %d %d\n",*p1,*p2,*p3,*p4);
    return 0;
}
