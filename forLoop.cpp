// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines the squares of every number from 0 to your input

#include <iostream>
#include <cmath>

int main() {
    // This function determines the squares of every
    // number from 0 to your input

    std::string numberStr;
    int number;
    int counter;
    int answer;

    std::cout << "" << std::endl;
    std::cout << "This program determines the squares of every"
          " number from 0 to your input." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Positive number: ";
    std::cin >> numberStr;
    std::cout << "" << std::endl;

    try {
        number = std::stoi(numberStr);
        if (number > -1) {
            for (counter = 0; counter < number + 1; counter++) {
                answer = pow(counter, 2);
                std::cout << counter << "²=" << answer << std::endl;
            }
        } else {
            std::cout << "Please input a positive number instead" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
