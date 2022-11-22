//অধোগামী সংখ্যা

#include<stdio.h>
int main()
{

    int i;
    int c=0;
    for(i=1000;i>=1;i--){
        printf("%d\t",i);
        c++;

        if(c == 5 && i != 1){
            printf("\n");
            c = 0;
        }


    }
    return 0;
}  