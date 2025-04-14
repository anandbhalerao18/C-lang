#include<stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // same as above line \0 null charecter is already present in this

    for(int i = 0; i <3; i++){
        printf("First charecter is %c \n", st[i]);

    }

    return 0;
}