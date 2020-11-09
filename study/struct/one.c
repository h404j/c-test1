#include<stdio.h>
struct date
{
    int year;
    int mouth;
    int day;
};

struct person
{
    char name[16];
    int age;
    struct date birthday;
};
int main(){
struct person pe={"wanghaojie",12,{1999,12,03}};
printf("年龄：%d\n姓名：%s\n出生年月日：%d:%d:%d",pe.age,pe.name,pe.birthday.year,pe.birthday.mouth,pe.birthday.day);
}
