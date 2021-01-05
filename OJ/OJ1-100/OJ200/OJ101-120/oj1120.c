#include <stdio.h>
void PrintArr(int a[], int n);
int MinIndex(int a[], int n); //函数返回数组a中最小元素的下标
int MaxIndex(int a[], int n); //函数返回数组a中最大元素的下标

int main()
{
    int n, a[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mx = MaxIndex(a, n);
   
    int z = a[mx];
   
    a[mx] = a[n - 1];
    a[n - 1] = z;
    int mi = MinIndex(a, n);
    int s = a[mi];
    a[mi] = a[0];
    a[0] = s;
    

    PrintArr(a, n);
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int MinIndex(int a[], int n)
{
    int min = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[min] > a[j])
        {
            min = j;
        }
    }
    return min;
}
int MaxIndex(int a[], int n)
{
    int max = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[max] < a[j])
        {
            max = j;
        }
    }
    return max;
}
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}