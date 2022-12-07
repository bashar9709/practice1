#include <stdio.h>
 void swap(int *p,int *q);
 
int main()
{
 
  int n, cnt = 0;
 
  scanf("%d", &n);
 
  int arr[n];
 
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

 
  int q;
  scanf("%d",&q);
 
  while(q--)
  {
    int x,y;
    scanf("%d%d",&x,&y);
 
    int iX1=x-1;
 
    int iX2=y-1;
 
    swap(&arr[iX1],&arr[iX2]);
 
  }
 
 
    for (int i = 0; i < n; i++)
    printf("%d ",arr[i]);
 
}
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
 
}