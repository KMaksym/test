#include<stdio.h>

void convert(int num)
{
printf(" %d ", num);
}

void print(int num)
{
  int buf;
  if (num>=999999)
  {
    buf = (num -num % 100000) / 1000000;
    convert(buf);
    printf("  of million ");
  } 
  if (num >= 999)
  {
    buf = (num % 1000000 - num % 1000) / 1000;
    convert(buf);
    printf(" of thousands");
  }

  if (num >= 0)
  {
    buf = num % 1000;
    convert(buf);
  }
  printf("\r\n");
}

main()
{
    int a;
    printf("\nEnter the numbers to be multiplied:");
    scanf("%d", &a);       // a > b
    print(a);
}

