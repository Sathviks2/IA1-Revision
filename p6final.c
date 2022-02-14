#include<stdio.h>
void input(char *a,char *b)
{
  printf("enter the strings\n");
  scanf("%s%s",a,b);

}
int _strcmp(char *a, char *b)
{
  int i=0;
  for(i=0;a[i]==b[i]&&b[i]!='\0';i++)
  return a[i]-b[i];
}
void output(char *a,char *b,int r)
{
  if(r>0)
  {
    printf("%s is greater than %s\n",a,b);
  }
  else if(r<0)
  {
    printf("%s is smaller than %s\n",a,b);
  }
}
int main()
{
  char a[100],b[100];
  input(a,b);
  int r=_strcmp(a,b);
  output(a,b,r);
  return 0;
}