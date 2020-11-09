#include<stdio.h>
typedef struct student
{
   char id[16];
   char name[16];
   char sex;
   float score;
}STUDENT;

int main(){
STUDENT stu,first;
printf("请输入学生的人数：\n");
int n;
scanf("%d",&n);
first.score=-1;
while (n--)
{
printf("请输入学生的ID：\n");
scanf("%s",stu.id);
printf("请输入学生的姓名：\n");
scanf("%s", stu.name);
printf("请输入学生的性别（男：m，女：f）：\n");
scanf("%*c%c", &stu.sex);
printf("请输入学生的分数：\n");
scanf("%f", &stu.score);
if (stu.score>first.score)
{
    first=stu;
}
}
printf("最高分数的学生信息如下：\n");
printf("ID：%s\n", first.id);
printf("姓名：%s\n",first.name);
printf("性别%c：\n",first.sex);
printf("分数：%f\n", first.score);
}