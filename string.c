#include<stdio.h>
int main()
{
  int i,n=0,j=0;
  char a[100],b[100];
  printf("\n enter the string:");
  gets(a);
  printf("\ngiven string:");
  puts(a);
  for(i=0;a[i]!='\0';i++)
  {
    n++;
  }
  printf("\n string length:%d",n);
  for(i=0;a[i]!='\0';i++)
  {
    b[j]=a[n-i-1];
    j++;
  }
  b[j]='\0';
  printf("\nreversed string:%s",b);
  return 0;
}
