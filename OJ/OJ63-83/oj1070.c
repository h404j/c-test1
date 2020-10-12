/* #include<stdio.h>
#include<math.h>

int main()
{
    static int m=0;
    int x=0,y=0,command,time,direct=0;//初始方向为北
    while (scanf("%d %d", &time, &command))
    {
            for(;m<time;m++)
        {
            if(direct==0)  y=y+1*10; //北
            else if(direct==1) x=x-1*10; //西
            else if(direct==2) y=y-1*10; //南
            else if(direct==3) x=x+1*10; //东
        }
     if(command==1) //向左转
        direct=(direct+1)%4;
     else if(command==2) //向右转
        direct=(direct-1+4)%4;//注意对负数的处理，要先加上4再对4取余
     else if(command==3) //停止
            break;
    }
    printf("%d %d",x,y);
    return 0;
}*/
#include <stdio.h>
#include<math.h>
int main()
{
    int x = 0, y = 0, time1 = 0, command, time, dir = 8, s;
    while (scanf("%d%d", &time, &command), command != 3)
    {
        if (command == 1)
        {
            dir++;
            int a = dir % 4;
            switch (a)
            {
            case 0:
                s = (time - time1) * 10;
                y = y + s;
                break;
            case 1:
                s = (time - time1) * 10;
                x = x - s;
                break;
            case 2:
                s = (time - time1) * 10;
                y = y - s;
                break;
            case 3:
                s = (time - time1) * 10;
                x = x + s;
                break;
            }
        }
        else if (command == 2)
        {
            
            dir--;
            dir=(int)fabs(dir);
            int a = dir % 4;
            switch (a)
            {
            case 0:
                s = (time - time1) * 10;
                y = y + s;
                break;
            case 1:
                s = (time - time1) * 10;
                x = x - s;
                break;
            case 2:
                s = (time - time1) * 10;
                y = y - s;
                break;
            case 3:
                s = (time - time1) * 10;
                x = x + s;
                break;
            }
        }
        else
        {
            s = (time - time1) * 10;
            y = y + s;
        }
        time1=time;
    }
    printf("%d %d", x, y);
}