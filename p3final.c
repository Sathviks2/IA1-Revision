#include<stdio.h>
int input_n()
{
  int n;
  printf("enter a number:\n");
  scanf("%d",&n);
  return n;
  
}
int sum_n(int n)
{
  int sum = 0,i;
  i = 1;
  for(i=1; i<=n; i+=1)
  {
    sum += i;
  }
  return sum;
}
void output(int n,int x)
{
  printf("the sum of the %d numbers is %d\n",n,x);
}
int main()
{
  int n,x;
  n=input_n();
  x=sum_n(n);
  output(n,x);
  return 0;
}