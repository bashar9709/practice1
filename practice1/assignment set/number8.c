#include<stdio.h>
#include<string.h>
void string(char *p);
int main()
{
    char str[105];

    gets(str);

    int len=strlen(str);

    for(int i=0;i<len;i++)
    {
        if((i+1)%2==0)
        string(&str[i]);
    
        printf("%c",str[i]);
    }

}
void string(char *p)
{
    printf("%c",*p);
    
}