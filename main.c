#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//return statement-------------------
// double cube(double num){
//     // double result = num * num * num;
//     // return result;

//     return num * num * num;
//     printf("Here");
// }
// double cube(double num);

//if statement-------------------------
// int max(int num1, int num2, int num3){
//     int result;
//     // if(num1 > num2){
//     //     result = num1;
//     // } else {
//     //     result = num2;
//     // }

// //&& ex of logical operator
//     if(num1 >= num2 && num1 >= num3){
//         result = num1;
//     } else if (num2 >= num1 && num2 >= num3){
//         result = num2;
//     }else{ result = num3;
//     }
//     return result;
// }

//Struct- place to store data structure------------------------
typedef struct rectangle{
    int length;
    int width;
} rectangle;

int main()
{
//struct continued--------------------------------
struct rectangle myRectangle = {5,10};
printf("Length: %d. Width: %d\n", myRectangle.length, myRectangle.width);

//if statement continued
// printf("%d", max(1,2,3));

// ! negation symbol
// if(!(3<2)){
//     printf("True");
// }

    // printf("Answer: %f", cube(3.0));

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

//Calculator---------------------------------------
// double num1;
// double num2;
// char op;

// printf("Enter a number: ");
// scanf("%lf", &num1);
// printf("Enter operator: ");
// scanf(" %c", &op);
// printf("Enter a number: ");
// scanf("%lf", &num2);

// if(op == '+'){
//     printf("%f", num1 + num2);
// }else if (op == '-'){
//     printf("%f",num1-num2);
// }else if (op == '/'){
//     printf("%f",num1/num2);
// }else if (op == '*'){
//     printf("%f",num1*num2);
// }else {
//     printf("invalid operator");
// }

//Switch Statement-type of if statement to compare values or condidtions---------
// char grade = 'A';
// switch (grade) {
// case 'A':
// printf("You did great!");
//     break;
// case 'B':
// printf("You did alright!");
//     break;
//     case 'C':
// printf("You did ok!");
//     break;
//     case 'D':
// printf("You did poorly!");
//     break;
//     case 'F':
// printf("You did horrible!");
//     break;
// default:
// printf("invalid grade");
//     break;
// }

//while loop- loops over till condition is true----------------
// int index = 1; 
// while (index <= 5)
// {
//     printf("%d\n", index);
//     index++;
// }

//do-while loop-executes first then checks condidtion----------
// int index = 6;
// do
// {
//     printf("%d\n", index);
// } while (index <=5);

//guessing game------------------------------------------
// int secretNumber = 5;
// int guess;
// int guessCount = 0;
// int guessLimit = 3;
// int outOfGuesses = 0;

// while (guess != secretNumber && outOfGuesses == 0)
// {
//     if (guessCount < guessLimit)
//     {
//         printf("Enter a number: ");
//         scanf("%d", &guess);
//         guessCount++;
//     }else{
//         outOfGuesses == 1;
//     }  
// }
// if (outOfGuesses == 1)
// {
//     printf("Out of guesses");
// }else{
//     printf("You win!");
// }

//for loops-use indexing variable for what iteration for what index youre on
// int luckyNumbers[] = {4,8,15,16,23,42};
// int i;
// for ( i = 0; i < 6; i++)
// {
//     printf("%d\n", luckyNumbers[i]);
// }

//2D arrays- all elements are arrays--------------------
// int nums[3][2] = {
//     {1,2},
//     {3,4},
//     {5,6}
// };
// // printf("%d",nums[1][1]);

// //nested loops-loop in a loop
// int i, j;
// for(i = 0; i<3;i++){
//     for(j=0;j<2;j++){
//         printf("%d,", nums[i][j]);
//     }
//     printf("\n");
// }

//variables----------------------------------------
// int age = 30;
// double gpa = 3.4;
// char grade = "A";
// //p is pointer, the memory address,where c stores it
// printf("age: %p\ngpa: %p\ngrade: %p",&age,&gpa,&grade);

//pointer-type of data you can use in program------
// int age = 30;
// int * pAge = &age;
// double gpa = 3.4;
// double * pGpa = &gpa;
// char grade = "A";
// char * aGrade = &grade;

// printf("age's memory address: %p\n", &age);

//dereferencing pointers-grabbing piece value from memory address
// int age = 30;
// int * pAge = &age;
// //d references to number
// printf("%d", *pAge);

//writing to files-----------------------------
// FILE * fpointer = fopen("employees.txt","w");
// //r read, w write, a append
// fprintf(fpointer, "Jim, Salesman\nPam, recectionist\nOscar, accounting");

// fclose(fpointer);

//read info from file--------------------------------
// char line[255];
// FILE * fpointer = fopen("employees.txt", "r");
// fgets(line, 255, fpointer);
// printf("%s", line);
// fclose(fpointer);


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

