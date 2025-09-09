#include<stdio.h>
int main()
{

int sum = 0;
int a[5]={2,3,4,5,6};
for(int i=0;i<=4;i++)
{
    sum = sum + a[i];
}
    printf("%d\n",sum);

return 0;
}