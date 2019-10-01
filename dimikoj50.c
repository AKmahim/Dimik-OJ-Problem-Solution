#include<stdio.h>
#include<string.h>

int main()
{
    int i,T,len;
    char str[51];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",str);
        len=strlen(str);
        char ch;
        for(i=0;i<len;i++)
        {
            if(str[i] == 'L'){
                ch=str[i-1];
                str[i]=ch;
            }
            else if(str[i] == 'R'){
                ch=str[i+1];
                str[i]=ch;
            }

        }
        printf("%s\n",str);

    }
}
