// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in January 2021
// Program finds volume of a cylinder

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


double volume(int radius, int height) {
    // Function calculates volume and returns it

    double volume;

    // Process and output
    volume = M_PI * pow(radius, 2.0) * height;

    return volume;
}


int main() {
    // Takes user input, passes it to functions and calls them

    std::string radius_string;
    std::string height_string;
    double calculated_volume;
    int radius;
    int height;

    std::cout << "Enter a width and radius and I will give"
    << " you the volume of a cylinder" << std::endl;

    while (true) {
        // Input
        std::cout << "Enter radius (cm): ";
        std::cin >> radius_string;

        // Process
        try {
            radius = std::stoi(radius_string);

            if (radius <= 0) {
                throw std::invalid_argument("This isn't a valid input");
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    while (true) {
        // Input
        std::cout << "Enter height (cm): ";
        std::cin >> height_string;

        // Process
        try {
            height = std::stoi(height_string);

            if (height <= 0) {
                throw std::invalid_argument("This isn't a valid input");
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    // Calls functions
    calculated_volume = volume(radius, height);

    // Output
    // https://www.codegrepper.com/code-examples/delphi
    // c%2B%2B+print+double+with+2+decimal+places
    std::cout << "The volume of the cylinder is: " << std::setprecision(2)
    << std::fixed << calculated_volume <<"cm²" << std::endl;
}
