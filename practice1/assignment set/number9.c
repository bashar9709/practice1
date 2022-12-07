#include <stdio.h>
#include <math.h>

int prime_count(int p);
int even_check(int e);


int main()
{
    int n, count=0, sum_even=0,even_count=0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (prime_count(*(arr + i)))
            count++;
        

        if (even_check(*(arr + i)))
        {
            sum_even += *(arr + i);
            even_count++;
        }
    }

    printf("Prime numbers: %d\n", count);

    float result = sum_even/even_count;

    printf("Average of all positive integers: %.2f\n",result);

    
}
int prime_count(int p)
{
    int flag = 0;
    if (p==1)
        return 0;
    

    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
       return 1;
    
    else
        return 0;
    

   return 0;
}

int even_check(int e)
{
    if (e%2==0)
        return 1;

    else
        return 0;
    
}
