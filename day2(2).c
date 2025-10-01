/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
int main(){
    float radius;    //defining the varialble
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);    //inputing the radius and storing it in variable "radius"

    float pi=3.14;    //definin the value of pi
    printf("Area= %.2f \n",pi*radius*radius);    //calculating the area and printing
    printf("Circumference= %.2f",2*pi*radius);    //calculating the perimeter and printing
    return 0;
}
