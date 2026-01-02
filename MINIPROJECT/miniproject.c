#include<stdio.h>
int main(){

printf("NUMBER CLASSIFICATION SYSTEMM ! \n");
printf("Whichever number you may input here, ill classify it for ya ! \n");
int n;
scanf("%d",&n);
if (n>0){
    printf("it is POSITIVE ! \n");
    printf("lets check whether it is even or odd !\n");
if(n%2==0){
    printf("it is EVEN !\n");
}
else{
    printf ("it is ODD !\n");
}
printf("lets check whether the number is prime or not ?!\n");
if(n==0||n==1){
    printf("obviously not prime.\n");
    return 0;
}
int a=n/2;
for(int i=2;i<=a;i++){
   if(n%i==0){
    printf("not prime !\n");
    return 0;
   }
   else{
    printf("prime !\n");
    return 0;
   }
}
}
else if(n<0){
    printf("it is NEGATIVE ! \n");
}
else if(n==0){
    printf("it is ZEROOO !\n");
}


return 0;
}