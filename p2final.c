
#include<stdio.h>
int input()
{
    int n;
    printf("enter a value\n");
    scanf("%d",&n);
    return n;
}
int cmp(int a, int b,int c)
{
  if(a>=b && a>=c)
  {
    return a;
  }
  else if(b>=c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(int x)
{
  printf("the greatest number is %d",x);
}
int main()
{
  int a,b,c,x;
  a=input();
  b=input();
  c=input();
  x=cmp(a,b,c);
  output(x);
  return 0;
}

