#include<stdio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,a,sum=0,n;
  for(i=0;i<30,i++)
  str[i]=0;
  printf("Enter name in lower case\n");
  scanf("%s",str);
  a=strlen(str)*96;
  //printf("The string is->%s\n",str);
  for(i=0;i<=strlen(str);i++)
  {
      sum=sum+str[i];
  }
  printf("\nSum of Digits in alphabets is %d\n",sum-a);
  system("PAUSE");
  return 0;
}
