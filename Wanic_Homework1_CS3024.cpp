/*
Name      : Elizabeth Wanic
Date      : 21 October 2016
File Name : main.cpp
Task      : As per Home Assignment 1 instructions:
        Write a C++ subroutine that given an array of integers, rearranges it in a reversed order and also design a
                subroutine to print out the array before and after the reversal.

        In order to test your solution, include in the main() several cases of arrays:
            - array of length 1,
            - array of length 2,
            - array of length 0 ,
            - array of a small even length larger than 2,
            - array of a small odd length larger than 1.  */


#include <iostream>
using namespace std;

// Function prototypes

void reverse(int a[], int len);

void show(int a[], int len);

// Main

int main() {

    // Seed the random number generator
    srand(1);

    // Test cases for various numbers as specified in the instructions

    const int len1 = 5;
    int a1[len1] = {rand()%60, rand()%60, rand()%60, rand()%60, rand()%60};
    cout << "Array of length: " << len1 << endl;
    show(a1,len1);
    reverse(a1, len1);
    cout << endl;
    show(a1, len1);
    cout << endl;

    cout << endl;
    const int len2 = 1;
    int a2[len2] = {rand()%60};
    cout << "Array of length: " << len2 << endl;
    show(a2,len2);
    reverse(a2, len2);
    cout << endl;
    show(a2, len2);
    cout << endl;

    cout << endl;
    const int len3 = 0;
    int a3[len3] = {};
    cout << "Array of length: " << len3 << endl;
    show(a3,len3);
    reverse(a3, len3);
    cout << endl;
    show(a3, len3);
    cout << endl;

    cout << endl;
    const int len4 = 8;
    int a4[len4] = {rand()%60, rand()%60, rand()%60, rand()%60, rand()%60, rand()%60, rand()%60, rand()%60};
    cout << "Array of length: " << len4 << endl;
    show(a4,len4);
    reverse(a4, len4);
    cout << endl;
    show(a4, len4);
    cout << endl;

    cout << endl;
    const int len5 = 7;
    int a5[len5] = {rand()%60, rand()%60, rand()%60, rand()%60, rand()%60, rand()%60, rand()%60};
    cout << "Array of length: " << len5 << endl;
    show(a5,len5);
    reverse(a5, len5);
    cout << endl;
    show(a5, len5);


    return 0;
}

void reverse(int a[], int len){

    // Reverse the values in the array

    int temp;

    for (int i = 0; i < (len/2); i++){
        temp = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = temp;
    };

}

void show(int a[], int len){

    // Iterate through and print the values

    for (int i = 0; i < len; i++){
        cout << a[i] << ' ';
    };
}