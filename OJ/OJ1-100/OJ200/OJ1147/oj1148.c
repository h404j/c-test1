
#include <stdio.h>
#include <math.h>
int fe(int i, int sq[10]);
void fed(int i, int sq[10]);

int main()
{
    int arr[1000];
    int sq[10] = {0};
    int count = 0;
    for (int i = 123; i <= 987; i++)
    {
        int a = i / 100;
        int b = i % 10;
        int c = (i / 10) % 10;
        if (a == b || b == c || a == c || b == 0 || c == 0)
        {
            continue;
        }
        double d = sqrt(i);
        int e = (int)d * (int)d;
        if (e == i)
        {
            arr[count] = i;
            count++;
        }
    }
    for (int i = 1; i < count; i++)
    {

        for (int j = i + 1; j < count; j++)
        {

            for (int k = j + 1; k < count; k++)
            {
                if (fe(arr[i], sq) && fe(arr[j], sq) && fe(arr[k], sq))
                {

                    printf("%d %d %d", arr[i], arr[j], arr[k]);
                }
                fed(arr[i], sq);
                fed(arr[j], sq);
                fed(arr[k], sq);
            }
        }
    }
}
int fe(int i, int sq[10])
{
    sq[i / 100]++;
    sq[i % 10]++;
    int a = i / 10;
    sq[a % 10]++;
    if (sq[i / 100] == 1 && sq[i % 10] == 1 && sq[a % 10] == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void fed(int i, int sq[10])
{
    sq[i / 100] = 0;
    sq[i % 10] = 0;
    int a = i / 10;
    sq[a % 10] = 0;
}