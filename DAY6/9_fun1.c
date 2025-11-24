#include<stdio.h>
int diff(int num1, int num2);
int main()
{
    int res1=diff(4,5);
    int res2=diff(10,20);
    int res3=diff(30,40);
     printf("res1: %d\n",res1);
     printf("res2: %d\n",res2);
     printf("res3: %d\n",res3);
}
int diff(int num1, int num2){
    return num1-num2;
}