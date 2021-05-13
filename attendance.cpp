// Copyright (c) 2021 Brian Musembi all rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program asks the user to enter the number of classes held and attended
//     and tells them if they can do the exam or not


#include <iostream>
#include <string>
#include <iomanip>  // library for set precision(limits decimal place)

int main() {
    // this function determines if a person can date a granddaughter
    std::string integer;
    std::string integer2;
    float classes_held;
    float classes_attended;
    float percentage;


    // input
    std::cout << "Enter the total number of classes held: ";
    std::cin >> integer;
    std::cout << "Enter the total number of classes you have attended: ";
    std::cin >> integer2;
    std::cout << "" << std::endl;

    // process
    try {
        classes_held = std::stoi(integer);
        classes_attended = std::stoi(integer2);

        percentage = (classes_attended / classes_held) * 100;
        std::cout << "You have attended "
                  << std::setprecision(5)
                  << percentage << "%" " of all classes" << std::endl;
        std::cout << "" << std::endl;

        if (percentage >= 75.0) {
            std::cout << "Amazing! You are eligible "
                      << "to take the exam." << std::endl;

        } else {
            std::cout << "Sorry but you aren't eligible enough "
                      << "to take the exam." << std::endl;}
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";}

    std::cout << "" << std::endl;
    std::cout << "Thank you for your input." << std::endl;
}
