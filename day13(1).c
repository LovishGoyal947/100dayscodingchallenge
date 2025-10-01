/*Q25Input 1:
4 2 +
Output 1:
6
Input 2:
10 3 %
Output 2:
1
Input 3:
15 5 /
Output 3:
3*/
#include <stdio.h>

int main()
{ char c;
  int a,b,y;
  printf("enter first number =");
  scanf("%d",&a); 
  printf("enter second number=");
  scanf("%d",&b);
  printf("enter the mathematical operation you want to apply on these two numbers-");
  scanf("%s",&c);
  switch(c)
  { case '+':y=a+b;printf("sum of %d and %d is = %d",a,b,y);break;
    case '-':y=a-b;printf("difference of %d and %d is = %d",a,b,y);break;
    case '/':y=a/b;printf("%d/%d = %d",a,b,y);break;
    case '*':y=a*b;printf("%d*%d=%d",a,b,y);break;
    case '%':y=a%b;printf("%d",y);break;}
  

    return 0;
}