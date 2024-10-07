//Write a program to check whether a given number is a multiple digit number or not.
//1. Example: 123 is a multiple digit number.
//2. 6 is not a multiple digit number.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if (num/10 >= 1){
        printf("The number is a multiple digit number");
    
    }
    else{
        printf("The number is not a multiple digit number");
    }
    return 0;
}