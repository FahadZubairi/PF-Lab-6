#include<stdio.h>
int main(){
    int a = 1, b = 2;
    int result;
    printf("%d\t %d\t", a ,b);
    for (int i=1; i<=7;i++){
        result = a * b;
        printf("%d\t",result);
        a = b;
        b = result;
    }
    return 0;
}