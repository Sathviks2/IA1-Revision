#include<stdio.h>
#include<math.h>
float input()
{
  float x;
  printf("enter the number you want to find square root of:");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float x)
{
  float guess=x/2;
  float next=x/guess;
  while(fabs(guess-next)>0.000001)
  {
    guess=(guess+next)/2;
    next=x/guess;
  }
  return guess;
}
void output(float x,float sqrt_result)
{
  printf("the square root of %f is %f:\n",x,sqrt_result);
}
int main()
{
  float x,sqrt_result;
 x=input();
  sqrt_result=my_sqrt(x);
  output(x,sqrt_result);
  return 0;
}