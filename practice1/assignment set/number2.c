#include <stdio.h>
#include <string.h>

void swap(char *p,char *q)
{
    char temp=*p;
    *p=*q;
    *q=temp;
}

void decending(char strr[])
{
    int len = strlen(strr);
    int i, j;
    for ( i = 0; i < len - 1; i++)
    {
        for ( j = i + 1; j < len; j++)
        {
            if (strr[i] < strr[j])
            {
              swap(&strr[i],&strr[j]);
            }
        }
    }
    puts(strr);
}
int main()
{

    char str[100];

    gets(str);

     decending(str);
   
}

