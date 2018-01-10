#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter any character");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("entered character is vowel");
}
else
{
printf("entered character is constant");
}
getch();
}
