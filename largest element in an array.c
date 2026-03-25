#include<stdio.h>
int main(){
    int a[100],n,i,max = a[0];
    printf("Enter no of element in array ");
    scanf("%d",&n);
    printf("Element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]> max){
            max=a[i];
        }
    }
    printf("max of element is =%d",max);
    return 0;
}