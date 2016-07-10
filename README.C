# yrrt
#include<stdio.h>
void main()
{
void change(int,int,int,int);
int disk=3;
printf("move to the disk");
change(disk,1,3,2);
}
void change(int c,int inti,int final,int t)
{
if(c>0)
{
change(c-1,inti,t,final);
printf("new dis %d from %d to %d\n",c,inti,final);
change(c-1,t,final,inti);
}
}
