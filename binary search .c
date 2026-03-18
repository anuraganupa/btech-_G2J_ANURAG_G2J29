#include<stdio.h>
int main(){
    int n, a[5], key,low,high,mid,i,pos,found;
printf("enter the no of elements: ");
scanf("%d", &n);
printf("enter %d elements in sorted order: \n: ", n);
for(int i=0;i<=4;i=i+1){
    printf("element %d: ",i+1);
    scanf("%d", &a[i]);
}
printf("enter the element to be search: ");
scanf("%d", &key);
low=1,high=n-1;
while (low<=high){
    mid=(low + high)/2;
    if(a[mid]==key){
        printf("Element %d found at position %d\n", a[mid], mid);
        found = 1;
        break;
    }
    else if(a[mid]<key){
       low=mid+1;
    }
    else{
      high = mid-1;
    }

}
if (found==0){
    printf("element not found\n");
}
return 0;
}