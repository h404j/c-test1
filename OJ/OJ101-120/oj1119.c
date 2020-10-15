#include <stdio.h>
void sort(int a[], int n);
void PrintArr(int a[], int n);
int main()
{
    int n,a[10];
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a,n);
    PrintArr(a,n);
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
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