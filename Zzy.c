#include <stdio.h>
#include <stdlib.h>
int main()
{
 system("chcp 65001>nul");
    int a[6];
    int i,j;
printf("请输入6个整数“）;
for(i=0;i<6;i++)
    {
     scanf("%d",&a[i]);
     int max=a[0];
     if(max<a[i])
     {
       max=a[i];
     }
    }
    printf("%d最大”,a[i]);
  return 0;
}
