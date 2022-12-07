 #include <stdio.h>
#include <math.h>

int count_p(int p);
int main()
{
    int n, count=0;
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    

    for (int i=0; i<n; i++)
    {
        if (count_p(*(arr + i)))
            count++;
    }

    int min_value = ceil(n/2);

    if (count>=min_value)
        printf("Beautiful\n");

    else
        printf("Ugly\n");

}


int count_p(int p)
{

    while (p)
    {
        int r=p%10;
        if (r==7)
            return 1;
        
        p /= 10;
    }

    return 0;
}

