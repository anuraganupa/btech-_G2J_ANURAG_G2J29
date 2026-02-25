#include<stdio.h>
#include<math.h>
int main(){
    float p,roi,T,CI,SI;
printf("enter the principle amount : \n");
scanf(
    "%f",&p);
printf("enter thye rate of intrest: \n");
scanf(
    "%f",&roi);
printf("enter the time in hours : \n");
scanf(
    "%f", &T);
SI=(p+roi+T)/100;
CI=p*pow((1+roi/100),T)-p;
printf("\n simple intrest = %.2f",SI);
printf("\n compound intrest = %.2f", CI);
return 0;
}