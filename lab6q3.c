//Using the above program integrate the number if it is a prime or composite number.
#include<stdio.h>
int main(){
    char prime;
    int a =2;
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if (num==0 || num==1){
        printf("Enter a number greater than 0 and 1 as they both are neither prime nor composite");
    }
    while (a<=(num/2)){
        if (num%a==0){
            prime = 'f';
            break;
        }
        else {
            a = a + 1;
            prime = 't';
        }
    }
    if (prime == 't'){
        printf("the number is a prime number");
    }
    else if (prime == 'f'){
        printf("the number is a composite number");
    }
}