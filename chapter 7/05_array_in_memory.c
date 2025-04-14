#include<stdio.h>
int main(){
    int marks[5];
    printf("Enter marks of 5 students \n");
    for (int i = 0; i < 5; i++) {

        scanf("%d", &marks[i]);

        printf("%d is on index %d \n", marks[i], i);
        printf("%d is the address on index %d \n", &marks[i], i);
    }
}