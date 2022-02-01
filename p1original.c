#include<stdio.h>
int input(int *a, int *b)
{
  printf("enter a,b values\n");
  scanf("%d%d", a,b);
}
int add(int a, int b, int *c)
{
  *c=a+b;
}
void output(int c)
{
  printf("addition of a,b is %d", c);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(z);
  return 0;
}