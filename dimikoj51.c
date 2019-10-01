#include<stdio.h>
#include<string.h>

int main()
{
   // freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int i,j;
    char str1[128],str2[128];
    int len1,len2;
    int T;
    scanf("%d",&T);
    while(T--){
        scanf("%s",str1);
        scanf("%s",str2);
        len1=strlen(str1);
        len2=strlen(str2);
        int count=0;
       // printf("%d",len2);
        for(i=0;i<len1;i++){
        if(str1[i] == str2[0]){
            for(j=1;j<len2;j++){
                if(str2[j] != str1[j+i]) break;
            }
                if(j==len2 ){
                printf("%d\n",i);
                //count++;
                break;

            }


        }


    }

    }
}
