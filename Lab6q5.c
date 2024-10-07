#include<stdio.h>
int main(){
    int a = 65536;
    int result;
    printf("%d\t",a);
    for (int i=2;i<=9;i++){
        result = a/i;
        a = result;
        printf("%d\t",result);
    }
    return 0;
}