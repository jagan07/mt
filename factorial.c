#include <stdio.h>
#include<math.h>
void main() 
{
int n,p=1;
clrscr();
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
p=p*i;	
}
printf("%d",p);
getch();
}
