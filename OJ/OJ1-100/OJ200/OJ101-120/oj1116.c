#include <stdio.h>
void del(int a[], int n, int i); /*删除数组a中下标为i的元素*/
void PrintArr(int a[], int n);
int find(int a[], int n, int x); /*输出数组a的前n个元素*/
int main()
{
    int a[10], n, j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &j);
    del(a, n, j);
    PrintArr(a, n - 1);
}

void del(int a[], int n, int i)
{
    for (int j = i; j < n; j++)
    {
        a[j] = a[j + 1];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}