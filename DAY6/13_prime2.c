#include<stdio.h>
void fact(int num);
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    fact(num);
    fact(num);
    fact(num);
}
void fact(int num){
    int isprime = 1;
    if(num<=1){
        isprime=0;
    }
}