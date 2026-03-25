#include<stdio.h>
int main(){
    int a[100],n,even=0,odd=0,i;
    printf("Enter no of element");
    scanf("%d",&n);
    printf("element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2 ==0){
            even++;
        }
        else{
            odd++;
    }
}
printf("no of even element = %d\n",even);
printf("no of odd element = %d\n",odd);
return 0;
}