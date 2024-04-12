//
//  main.cpp
//  cpr-v2
//
//  Created by Parisa jalali on 2024-04-12.
//
// CONVERTING MOUDLE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting (void) {
    
    printf("*** Start Of Converting Strings to double Demo ***\n"); //This line prints a message to the console, indicating the start of the conversion demo.
    
    
    char doubleString[BUFFER_SIZE]; // This declares a character array named doubleString with a size specified by BUFFER_SIZE. It is intended to store the input string provided by the user.
    
    
    double doubleNumber; // This declares a double-precision floating-point variable named doubleNumber. It will be used to store the converted number from the input string.
    
    
    do { //This line begins a do-while loop. The code inside the loop will be executed at least once and will continue to execute as long as the condition specified by the while statement is true.
        
        
        printf("Type the double numeric string (q - to quit) :\n"); // This line prints a prompt asking the user to input a numeric string. The user is instructed to enter 'q' to quit the program.
        
        
        fgets(doubleString, BUFFER_SIZE, stdin); //This line reads a line of input from the standard input (stdin) and stores it in the doubleString array. BUFFER_SIZE specifies the maximum number of characters to read.
        
        
        doubleString[strlen(doubleString) - 1] = '\0'; // This line removes the newline character (\n) from the end of the string read by fgets. It replaces the newline character with the null terminator ('\0') to mark the end of the string.
        
        
        if (strcmp(doubleString, "q") != 0) { // This line checks if the input string is not equal to "q". If the user has not entered "q", the code inside the if statement will be executed.
            
            
            doubleNumber = atof(doubleString); // This line converts the input string stored in doubleString to a double-precision floating-point number using the atof function. The converted number is then stored in the doubleNumber variable.
            
            
            printf("Converted number is %f\n", doubleNumber); // This line prints the converted double-precision floating-point number to the console.
            
        }
        
    } while (strcmp(doubleString, "q") != 0); // This line specifies the condition for the do-while loop to continue executing. The loop will continue as long as the input string is not equal to "q".
    
    
    
    printf("*** End of Converting Strings to double Demo ***\n\n"); // This line prints a message indicating the end of the conversion demo to the console.
    // test
}
