#include<stdio.h>
int main()
{
int a[5]={2,1,3,4,5};
int product=1;
for(i=0;i<=4;i++)
{
    product=product*a[i];
    printf("%d\n",product);
}
 return 0;

}