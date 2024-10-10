#include <stdio.h>

int convertToLowercase(char string[]) {
    int i, count = 0;
    for (i = 0; i < 50 && string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 32; // המרת האות הגדולה לקטנה
            count++; // עדכון מספר ההחלפות
        }
    }
    return count;
}

int main() {
    char string[51];
    int swaps;

    printf("Please enter a string of 50 characters or less ");
    fgets(string, sizeof(string), stdin);
    swaps = convertToLowercase(string);
    printf("The number of exchanges made", swaps);
    printf("Convert a string from uppercase to lowercase, string);

    return 0;
}
//Write a program that receives the string of length 50 characters and converts the uppercase letters to lowercase in the function (strupr, strlwr function should not be used) the function will return the number of substitutions made to the program and print them Pointers are allowed to be used

