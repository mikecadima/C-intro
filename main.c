#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//return statement-------------------
double cube(double num){
    // double result = num * num * num;
    // return result;

    return num * num * num;
    printf("Here");
}
int main()
{
    printf("Answer: %f", cube(3.0));

//     printf("    /|\n");
//     printf("   / |\n");
//     printf("  /  |\n");
//     printf(" /   |\n");
//     printf("/____|\n");

// //variables-------------------
// char chacterName [] = "Tom";
// int chacterAge = 67;
// printf("There once was a man named %s\n", chacterName);
// printf("He was %d years old.\n",chacterAge);
// chacterAge = 30;
// printf("He really like the name %s.\n",chacterName);
// printf("He did not like being %d.\n",chacterAge);

// //data types------------------
// //integers
// int age = 40;
// //double
// double gpa = 3.0;
// //float
// //character
// char grade = 'A';
// char phrase[] = "Giraffes are alive!";
// //printf  \n is new line
// printf("Hello\nworld\n");
// printf("my favorite %s is %d","number",500);
// printf("\nmy favorite %s is %f","number",500.98766);
// int favNum = 90;
// char myChar = 'i';
// printf("\nMy favorite %c is %f", "number", favNum);

//workig with numbers with C-----declare math at top--------------
// printf("%f",8.9);
// printf("%f",8.9 + 4.5);
// printf("\n%f",8 + 4.5);

// int num = 6;
// printf("\n %d",num);
//5 raised to the 3rd power??????
// int x;
// x = pow(5,3);
// printf("%d", x);
// //125
// printf("\n%f", sqrt(36) );
// //6.00000
// printf("\n%f", ceil(36.356) );
// //37.00000
// printf("\n%f", floor(36) );
// //36.000000

//comments--------------------------------
/*
some text
*/

//constants---------------------------------
//special varaible in C: unable to be modified
//const's in C typically be all caps ex NUM
// const int num = 5;
// printf("%d\n", num);

//getting user input-------------------------
// int age;
// printf("Enter your age: ");
// //& is pointer to age
// scanf("%d", &age);
// printf("you are %d years old", age);

// double gpa;
// printf("Enter your gpa: ");
// scanf("%lf", &gpa);
// printf("your gpa is %f", gpa);

// char grade;
// printf("Enter your grade: ");
// scanf("%c", &grade);
// printf("your grade is %c", grade);

// char name[20]; 
// printf("Enter your name: ");
// fgets(name, 20,stdin); //fgets grabs string with spaces,stdin standard input
// printf("your name is %s", name);

//build basic calculaor---------------------------------
// int num1;
// int num2;
// printf("enter first number: ");
// scanf("%d", &num1);
// printf("enter second number: ");
// scanf("%d", &num2);
// printf("Answer: %d", num1 + num2);

// double num1;
// double num2;
// printf("enter first number: ");
// scanf("%lf", &num1);
// printf("enter second number: ");
// scanf("%lf", &num2);
// printf("Answer: %f", num1 + num2);

//mad lib game------------------------------------
// char color[20];
// char pluralNoun[20];
// char celebrityF[20];
// char celebrityL[20];

// printf("Enter a color: ");
// scanf("%s", color);
// printf("Enter a plural noun: ");
// scanf("%s", pluralNoun);
// printf("Enter a celebrity first and last name: ");
// scanf("%s%s", celebrityF, celebrityL);

// printf("roses are %s\n",color);
// printf("%s are blue\n", pluralNoun);
// printf("I love %s %s\n", celebrityF, celebrityL);

//arrays-container where we can store information------------
// int luckyNumber[] = {4, 8, 15, 17, 23, 90};
// luckyNumber[1] = 200;
// printf("%d", luckyNumber[1]);

//set [] to 10
// int luckyNumber[10];
// luckyNumber[1] = 80;
// luckyNumber[0] = 90;
// printf("%d\n", luckyNumber[1]);
// printf("%d", luckyNumber[0]);

// char phrase[20] = "Array";

//functions-----------------------------
//int * int = closure concept
    // factorial 5! = 5 * 4 * 3 * 2 * 1
    // int number = 5;
    // int factorial = 1;
    // for(int i = number; i > 1; i--){
    //     factorial *= i;
    // }
    // printf("factorial is %d is %d\n",number, factorial);

// int number = 5;
// int factorial = 1;
// printf("factorial is %d is %d\n",number, factorial);

// sayHi ("Mike", 40);
// sayHi ("Tom", 23);
// sayHi ("Oscar", 43);

//return statement-------------------------

    return 0;
}
//functions-collection of code to do specific task----------------
//void=not gonna return any info
// void sayHi (char name[],int age){
//     printf("Hello %s, you are %d\n",name, age);
// }

// int factorial(int number)
// {
//     int factorial = 1;
//     for(int i = number; i > 1; i--){
//         factorial *= i;
//     }
//     return factorial;
// }

