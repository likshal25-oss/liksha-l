#include<stdio.h>
int main(){
    int ptr = 1000;
    int num = ptr;
    printf("value of *ptr: %p\n",ptr);
    printf("value of *ptr using num:%p",&num);
}