#include <stdio.h>
int find(int *arr,int target)
{
int l=0;
int h=3;
int m;
while(l<=h)
{
m=(l+h)/2;
if(arr[m]>target)
h=m-1;
else if(arr[m]<target)
l=m+1;
else
return 1;
}
return 0;
}
int main()
{
int arr[5][4]={{10,26,55,90},{12,34,65,110},{17,39,78,154},{19,47,81,179},{22,49,88,199}};
int target;
scanf("%d",&target);
int i;
for(i=0;i<5;i++)
{
if(find(arr[i],target)==1)
break;
}
if(i==5)
printf("False");
else
printf("True");
return 0;
}
