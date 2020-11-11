
#include <stdio.h>
int main ()
{
    FILE *pFile;
    char buf[1024]={0};
    pFile = fopen("myfile.txt", "r"); // 以二进制方式打开只写文件
    if (pFile== NULL)
    {
       // fputs("fopen example", pFile);
      printf("出错1");
    }
    fgets(buf, 1024, pFile);
    puts(buf);
    printf("出错2");

    fclose(pFile); // 用完后一定要记得关闭
    return 0;
}