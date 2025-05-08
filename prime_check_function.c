#include <stdio.h>
int isPrime (int num)
{
    int count = 0;
    int j=2;
    while (j <= num/2){
        if (j%num==0){
            count++;
        }
    j++;
    }
    if (count==0){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
int n;
scanf("%d",&n);
if (isPrime(n)== 1){
    printf("it is prime");
}
else{
    printf("it is not prime");
}
}

