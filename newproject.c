#include<stdio.h>
#include<math.h>
int main(){
    //calculator 
    printf("--------------------------------------------------------\n");
    printf("*                         WELCOME                      *\n");
    printf("--------------------------------------------------------\n");
    printf("                   TO   THE  CALCULATOR                 \n");
    printf("--------------------------------------------------------\n");
    printf("         For Moving Further Enter the numbers           \n");
    printf("--------------------------------------------------------\n\n\n");

    //input tht numbers 
    int num1 , num2 ;
    printf("\n\nEnter the first Number :");
    scanf("%d",&num1);
    printf("\nEnter the second Number :");
    scanf("%d",&num2);
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power\n");
    printf("Enter 7 for Square Root\n");
    printf("Enter 8 for Cube Root\n");
    printf("Enter 9 for square the number\n");
    printf("Enter 10 for cube the number\n");
    int choice;
    printf("\n\nChoose the Operation you want to Perform :");
    scanf("%d",&choice);
    int squareroot1 = sqrt((double)num1);
    int squareroot2 = sqrt((double)num2);
    int cuberoot1 = cbrt((double)num1);
    int cuberoot2 = cbrt((double)num2);
    int power = pow((double)num1,(double)num2);
    switch(choice){
        case 1:
        printf("\n\nThe Addition of %d and %d is : %d\n",num1 ,num2,num1+num2);
        break;
        case 2:
        printf("\n\nThe Subtraction of %d and %d is : %d\n",num1,num2,num1-num2);
        break;
        case 3:
        printf("\n\nThe Multiplication of %d and %d is : %d\n",num1 ,num2,num1*num2);
        break;
        case 4:
        printf("\n\nThe Division of %d and %d is : %d\n",num1 ,num2,num1/num2);
        break;
        case 5:
        printf("\n\nThe Modulus of %d and %d is : %d\n",num1 ,num2,num1%num2);
        break;
        case 6:
        printf("\n\nThe power of %d raise to the %d is : %d\n",num1 ,num2,power);
        break;
        case 7:
        printf("\n\nThe Squareroot of %d is  %d\n",num1 , squareroot1);
        printf("\n\nThe Squareroot of %d is  %d\n",num2 , squareroot2);
        break;
        case 8:
        printf("\n\nThe Cuberoot of %d and %d is : %d and %d\n",num1 ,num2,cuberoot1,cuberoot2);
        break;
        case 9:
        printf("\n\nThe Square of %d is : %d and %d is %d\n",num1 , num1*num1 ,num2 , num2*num2);
        break ;
        case 10:
        printf("\n\nThe Cube of %d is : %d and %d is %d\n",num1,num1*num1*num1, num2 ,num2*num2*num2);
        break;
        default :
        printf("\n\nInvalid Choice");
        break;
        }
        printf("\n\n\nThankyouuu for using my calculator\n");
        printf("-----------------------------------------\n");

       return 0;
    }
    


