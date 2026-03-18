#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter two nums \n");
    scanf("%d %d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swaping \n");
    printf("a=%d\n",a);
    printf("b=%d \n",b);
    return 0;
    

}