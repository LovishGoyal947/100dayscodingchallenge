#include<stdio.h>
int main(){
    int a;      //defininf a variable to store the user input
    printf("Enter a year:");
    scanf("%d",&a);     //inputting the year and storing it in a

    if(a%4==0 && a%100!=0 || a%400==0){         //condition to check if the year is leap year or not
        printf("It is a leap year");            //printing if it is a leap year
    }           
    else{
        printf("It is not a leap year");        //printing if not a leap year
    }

    return 0;
}