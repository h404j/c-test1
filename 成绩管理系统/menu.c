#include "main.h"
void menu(){
    printf("--------学生成绩管理系统--------\n");
    printf("----1:添加学生成绩--------------\n");
    printf("----2:修改学生成绩--------------\n");
    printf("----3：查找学生成绩-------------\n");
    printf("----4：查看所有学生成绩----------\n");
    printf("----5：删除学生成绩--------------\n");
    printf("----6：退出系统------------------\n");
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("添加学生成绩：");
        break;
    case 2:
        /* code */
        printf("修改学生成绩：");
        break;
    case 3:
        printf("查找学生成绩：");
        /* code */
        break;
    case 4:
        printf("查看所有学生成绩：");
        /* code */
        break;
    case 5:
        printf("删除学生成绩：");
        /* code */
        break;
    case 6:
        printf("谢谢使用，欢迎下次光临：");
        break;
    default:
    printf("输入错误，请重新输入！");
        break;
    }
}