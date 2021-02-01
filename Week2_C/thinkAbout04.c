#include <cs50.h>
#include <stdio.h>

int main(void){
    // n값 입력
    int n = get_int("n: ");

    if(n % 2 == 0){ // 짝수라면
        printf("even\n");
    }else{ // 홀수라면
        printf("odd\n");
    }
}