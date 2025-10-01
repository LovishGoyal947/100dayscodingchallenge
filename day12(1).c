//Write a program to calculate a library fine based on late days.
#include <stdio.h>
int main(){
    int a,fine;         //defining variable to store the user inpur and the fine
    printf("Enter the number of late days:");
    scanf("%d",&a);         //inputting the no of late days from the user and storing it in a
    if (a<5){           // if the days are less than 5
        fine=a*2;
        printf("Fine= %d",fine);
    }
    else if (a<8){      //if the days are less than 8
        fine=a*4;
        printf("Fine= %d",fine);
    }
    else if (a<16){     //if the days are less than 16
        fine=a*6;
        printf("Fine= %d",fine);
    }   
    else if (a<31){     //if the days are less than 31
        fine=a*8;
        print("Fine= %d",fine);
    }
    else{           //if days more than 31
        printf("Membership Exprired");
    }
    return 0;
}