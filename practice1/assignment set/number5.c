#include <stdio.h>

int my_fun(int arr[],int n);

int main()
{

  int n;
  
  scanf("%d",&n);

  int ara[n];

  for(int i=0;i<n;i++)
    scanf("%d",&ara[i]);
  
  

  printf("%d\n",my_fun(ara,n));
   
}

int  my_fun(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2==0&&(i+1)%2==0)||(arr[i]%2!=0&&(i+1)%2!=0))
            sum+=(arr[i]+i+1);
    
    }

    return sum;
   
}
