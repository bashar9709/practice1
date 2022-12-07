#include <stdio.h>
int divisible_3(int value);
int divisible_5(int value);

int main()
{

  int n, cnt = 0;

  scanf("%d", &n);

  int arr[n];

  for (int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);

    if (divisible_3(arr[i])==1 || divisible_5(arr[i])==1)
    {
      cnt++;
    }
  }

  if (cnt > 0)
    printf("%d\n", cnt);

  else
    printf("-1\n");

}

int divisible_5(int value)
{
  if (value % 5 == 0)
    return 1;
  
  else
    return -1;
  
}

int divisible_3(int value)
{

  if (value % 3 == 0)
    return 1;
  
  else
    return -1;
  
}
