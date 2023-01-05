#include <stdio.h>
int input();
void output(float);
int main()
{
    float result;
    int choice, num,Name,type,experience,rating;
    printf("Choose any option given below\n");
    printf("1.) Book the ride\n");
    printf("2.) Register as a driver\n");
    printf("3.) Exit\n");
    printf("Enter your choice: ");
    choice = input();
     
    switch (choice) {
    case 1: {
        // printf("Enter radius:\n");
        // num = input();
        // result = 3.14 * num * num;
        // printf("Area of sphere=");
        // output(result);
        break;
    }
    case 2: {
        printf("Welcome to Rapid Cab Services\nEnter the details\n");
        printf("Name: ");
        scanf("%d",&Name);
        printf("Vehicle type: ");
        scanf("%d",&type);
        printf("Experience: ");
        scanf("%d",&experience);
        printf("Rating: ");
        scanf("%d",&rating);
        
        // num = input();
        // result = num * num;
        // printf("Area of square=");
        // output(result);
        break;
    }
    case 3: {
        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
 
void output(float number)
{
    printf("%f", number);
}
