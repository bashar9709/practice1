#include <stdio.h>
 void solve();
int main()
{
 
   int test;
   scanf("%d",&test);
 
   while(test--)
     solve();
 
}
void solve()
{
    int n,cnt=0;
    scanf("%d",&n);
 
    int start=(n/4)-3;
 
    for(int i=start;;i+=2)
    {
        cnt++;
        printf("%d ",i);
 
        if(cnt==4)
        {
            break;
        }
    }
 
    printf("\n");
 
}