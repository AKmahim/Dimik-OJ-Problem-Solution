#include<stdio.h>
#include<math.h>


void sieve(int prime_ara[],int root )
{
    int i,j;
    for(i=2;i<size;i++){
        prime_ara[i]=1;
    }
    //root=sqrt(size);

    for(i=2;i<=root;i++){
        if(ara[i]==1){
            for(j=2;i*j<size;j++){
                ara[i*j]=0;
            }
        }
    }
}

