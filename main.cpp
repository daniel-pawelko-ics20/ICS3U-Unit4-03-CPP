// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Dec 2021
// For Loops

#include <iostream>

int main() {
    // main function for creating for loop program
    // define variables
    int number;

    // input
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    // process/output
    for (int i = 0; i < number + 1; i++) {
        std::cout << i << "² = " << i*i << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
