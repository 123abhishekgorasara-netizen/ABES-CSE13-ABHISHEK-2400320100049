 #include<stdio.h>
 int main()
 {

 int a[5]={1,2,3,4,5};
 a[4]=100;
 char b[4]={a,b,c,d};
 printf("%c\n",b[4]);
 printf("%d\n",a[4]);

    printf("%d\n",a[3]);
    printf("%d\n",a[2]);

 return 0;
 }