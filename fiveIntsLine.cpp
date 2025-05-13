// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: May 13, 2025
// Program that prints the integers from 1000 to 2000

#include <iostream>
#include <cstdio>

int main() {
    // Loop through all integers from 1000 to 2000, inclusive
    for (int num = 1000; num <= 2000; num++) {
        // Print the number
        printf("%i ", num);
        // Check if number is the last number in the row
        if ((num + 1) % 5 == 0) {
            // If it is, print a newline
            printf("\n");
        }
    }
    // Print a newline at the end to close off the output
    printf("\n");
}
