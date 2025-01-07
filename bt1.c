#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    //cach 1
    printf("in ra gia tri cua bien a %d\n",a);
    printf("in ra dia chi bien a %p\n",&a);
    //cach 2
    printf("in ra gia tri cua bien a %d\n",*ptr);
    printf("in ra dia chi bien a %p\n",ptr);
    return 0;
}