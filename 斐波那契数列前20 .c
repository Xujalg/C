#include<stdio.h>

 int main ()
 {
 int i,c,d=1,a[20];
 a[0]=1;
 a[1]=2;
 for(i=2;i<20;i++)
 {
     a[i]=a[i-1]+a[i-2];
 }
 for(c=0;c<20;c++)
 {
     printf("%-10d",a[c]);
     if(d%4==0)
     {printf("\n");}
     d++;
 }
     return 0;
}
