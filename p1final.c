#include<stdio.h>
int input(int *a,int *b)
{
  printf("enter the numbers\n");
  scanf("%d%d",a,b);
  return 0;
}
int add(int a,int b,int *c)
{
  *c=a+b;
  return 0;
}
void output(int c)
{
  printf("sum of two numbers is %d\n",c);
}
int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(c);
  return 0;
}