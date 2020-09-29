#include<stdio.h>
int for3(){
    int i,j,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ //out loop
       for(j=1;j<=12;j++){ //inner loop
        printf("%dx%d=%d\t",i,j,(i*j));
        //printf("\n");
       }
       printf("\n");
    }
}
