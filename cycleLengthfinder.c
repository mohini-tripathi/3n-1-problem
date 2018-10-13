#include<stdio.h>
int main()
{
  int n,i=0;
  printf("enter any number:-");
  scanf("%d",&n);
  printf("%d",n);
  while(n>1)
  {
  if(n%2!=0)
  {
    n=(3*n)+1;
    printf(" %d",n);
  }
  else if(n%2==0)
  {
        n=n/2;
    printf(" %d",n);
  }
  i++;
}
printf("\ncycle length of the number is: %d",i+1);
return 0;
}
