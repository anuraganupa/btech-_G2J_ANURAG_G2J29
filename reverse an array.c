#include<stdio.h>
int main(){
    int a[100],n,rev,i;
    printf("enter no of element");
    scanf("%d",&n);
    printf("element of array\n");
    for(i=0;i<n;i++){
        scanf("%d";&a[i]);
    }
    for(i=n-1;i>=0;i--){
        rev=a[i];
        printf("%d",rev);
    }
    return 0;
}