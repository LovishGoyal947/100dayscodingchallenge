#include <stdio.h>

int main(){
    int a;          //defining a variable to store the number entered by the number
    printf("Enter a number:");
    scanf("%d",&a);     //inputting and storing the number in a

    if (a%2==0){        // checking if the number is even (if the number divided by 2 gives remainder 0)
        printf("It is a even number");
    }
    else{               //if not even then it is odd
        printf("It is a odd number");
    }

    return 0;
}