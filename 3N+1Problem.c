/*Input
The input will consist of a series of pairs of integers i and j, one pair of integers per line. All integers
will be less than 10,000 and greater than 0.
You should process all pairs of integers and for each pair determine the maximum cycle length over
all integers between and including i and j.
You can assume that no operation overflows a 32-bit integer.
Output
For each pair of input integers i and j you should output i, j, and the maximum cycle length for
integers between and including i and j. These three numbers should be separated by at least one space
with all three numbers on one line and with one line of output for each line of input. The integers i
and j must appear in the output in the same order in which they appeared in the input and should be
followed by the maximum cycle length (on the same line).*/
/*algorithm:
input n
print n
if n = 1 then STOP
if n is odd then n ←− 3n + 1
else n ←− n/2
GOTO 2*/
#include<stdio.h>
int cycleLength(int s,int t)
{
  int p,temp,max;

  int l[10000];
  int n1=s;
   int n2=t;
   if(n2>n1){
   for(p=n1;p<=n2;p++)
   {temp=p;
     l[p]=1;
     while (temp>1)
     {
       if(temp%2==0)
       {
         temp=temp/2;
         l[p]++;
       }
       else if(temp%2!=0)
       {
         temp=3*temp+1;
         l[p]++;
       }
     }
   }
   max= l[n1];
   for(p=n1;p<=n2;p++)
   {
     if(max<l[p])
     {
       max=l[p];
     }
   }
 }
 else{
   for(p=n1;p>=n2;p--)
   {temp=p;
     l[p]=1;
     while (temp>1)
     {
       if(temp%2==0)
       {
         temp=temp/2;
         l[p]++;
       }
       else if(temp%2!=0)
       {
         temp=3*temp+1;
         l[p]++;
       }
     }
   }
   max= l[n1];
   for(p=n1;p>=n2;p--)
   {
     if(max<l[p])
     {
       max=l[p];
     }
   }
 }

printf("%d %d %d\n",n1,n2,max);
}
int main()
{
  printf("\t\t\t********3N+1 PROBLEM********");
  int i[10000],j[10000],k,m;
  printf("\nHow many pairs of i and j you want to Enter?");
  scanf("%d",&k);
  printf("Enter the values of i and j:\n");
  for(m=0;m<k;m++)
  {scanf("%d",&i[m]);
  scanf("%d",&j[m]);
}
printf("\n");
  for(m=0;m<k;m++)
  {
    cycleLength(i[m],j[m]);
  }
  return 0;
}
