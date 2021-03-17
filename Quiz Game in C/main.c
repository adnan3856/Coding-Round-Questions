#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 40

int main(){
    int i;
    int multi_correct=0,truefalse_correct=0,fill_correct=0;
    int multi_incorrect=0,truefalse_incorrect=0,fill_incorrect=0;
    int users_multi[5];
    int answers_multi[5];
    int users_truefalse[5];
    int answers_truefalse[5];
    char users_fill[5][MAX_STRING_SIZE];
    char answers_fill[5][MAX_STRING_SIZE];
    printf("QUIZ IN C. \n");
    printf("Multiple Choice Questions:- \n");
    printf("C is the successor of ___ programming language.\n1 - C++\n2 - B++\n3 - B\n4 - Mini C\n");
    answers_multi[0]=3;
    scanf("%d", &users_multi[0]);
    printf("What is a pointer?\n1 - A keyword used to create variables\n2 - A variable used to store address of an instruction\n3 - A variable used to store address of other variable\n4 - A variable used to store address of a structure\n");
    answers_multi[1]=3;
    scanf("%d",&users_multi[1]);
    printf("What actually get pass when you pass an array as a function argument?\n1 - First value of elements in array\n2 - Base address of the array\n3 - All value of element in array\n4 - Address of the last element of array\n");
    answers_multi[2]=2;
    scanf("%d",&users_multi[2]);
    printf("If the two strings are identical, then strcmp() function returns\n1.	-1\n2.	1\n3.	0\n4.	Yes\n");
    answers_multi[3]=3;
    scanf("%d",&users_multi[3]);
    printf("In C, if you pass an array as an argument to a function, what actually gets passed?\n1.	Value of elements in arra\n2.	First element of the array\n3.	Base address of the array\n4.	Address of the last element of array\n");
    answers_multi[4]=3;
    scanf("%d",&users_multi[4]);

    //True or false quiz, enter 1 for true, 2 for false
    printf("True or False:- \n");
    printf("Only character or integer can be used in switch statement\n1.True\n2.False\n");
    answers_truefalse[0]=2;
    scanf("%d",&users_truefalse[0]);
    printf("The return type of malloc function is void.\n1.True\n2.False\n");
    answers_truefalse[1]=2;
    scanf("%d",&users_truefalse[1]);
    printf("#define is known as preprocessor compiler directive.\n1.True\n2.False\n");
    answers_truefalse[2]=1;
    scanf("%d",&users_truefalse[2]);
    printf("sizeof( ) is a function that returns the size of a variable.\n1.True\n2.False\n");
    answers_truefalse[3]=2;
    scanf("%d",&users_truefalse[3]);
    printf("The ++ operator increments the operand by 1, whereas, the -- operator decrements it by 1.\n1.True\n2.False\n");
    answers_truefalse[4]=1;
    scanf("%d",&users_truefalse[4]);

    //Fill in the blanks
    printf("Fill in the blanks:- \n");
    printf("The size of signed integer is __________ bytes.\n");
    strcpy(answers_fill[0], "two");
    gets(users_fill[0]);
    gets(users_fill[0]);
    printf("The ______________ accepts a single character from the keyboard.\n");
    strcpy(answers_fill[1], "getchar()");
    gets(users_fill[1]);
    printf("The operator i << 2 is equivalent to ______________ i by 4.\n");
    strcpy(answers_fill[2], "multiply");
    gets(users_fill[2]);
    printf("A string is terminated by ____________ character.\n");
    strcpy(answers_fill[3], "null");
    gets(users_fill[3]);
    printf("printf is a _____________ function.\n");
    strcpy(answers_fill[4], "library");
    gets(users_fill[4]);


   //checking multiple choice answers
    for(i=0;i<5;i++){
        if(answers_multi[i]==users_multi[i]){
            multi_correct++;
        }
        else{
            multi_incorrect++;
        }
    }
    printf("\n");
    printf("Multiple Choice\n");
    printf("Correct Answers: %d \n",multi_correct);
    printf("Incorrect Answers: %d \n",multi_incorrect);
    printf("\n");


    //checking true or false
    for(i=0;i<5;i++){
        if(answers_truefalse[i]==users_truefalse[i]){
            truefalse_correct++;
        }
        else{
            truefalse_incorrect++;
        }
    }
    printf("True or False\n");
    printf("Correct Answers: %d \n",truefalse_correct);
    printf("Incorrect Answers: %d \n",truefalse_incorrect);
    printf("\n");

    //checking fill in the blanks answers
    for(i=0;i<5;i++){
        if(strcmp(answers_fill[i],users_fill[i])==0){
            fill_correct++;
        }
        else{
            fill_incorrect++;
        }
    }
    printf("Fill in the Blanks:\n");
    printf("Correct Answers: %d \n",fill_correct);
    printf("Incorrect Answers: %d \n",fill_incorrect);
    printf("\n");

    //total score
    printf("Total score: %d / 15",multi_correct+truefalse_correct+fill_correct);
    return 0;
}

