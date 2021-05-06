// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 3, 2021
// This program calculates the surface area and volume of a cylinder.

#include <iostream>
#include <cmath>
#include <iomanip>


// declaring global variables
float radius, height, surfArea, volume;


void calcSaVol() {
    // calculate the surface area and volume
    surfArea = 2*M_PI*radius*height+2*M_PI*pow(radius, 2);
    volume = pow(radius, 2)*M_PI*height;
    // display the surface area and volume
    std::cout << "\n";
    std::cout << "The surface area will be: " << std::fixed\
     << std::setprecision(2) << surfArea << " cm^2.\n";
    std::cout << "And the volume will be: " << std::fixed\
     << std::setprecision(2) << volume << " cm^3.\n";
}


void heightValue() {
    // ask the user to input a valid value for the height
    std::cout << "And now its height (cm): ";
    std::cin >> height;

    // checks for errors in the input
    if (height < 0) {
        std::cout << "The value must be a positive number.\n";
        heightValue();
    } else {
        calcSaVol();
    }
}


void radiusValue() {
    // ask the user to input a valid value for the radius
    std::cout << "To start off type in the radius of the cylinder (cm): ";
    std::cin >> radius;

    // checks for errors in the input
    if (radius < 0) {
        std::cout << "The value must be a positive number.\n";
        radiusValue();
    } else {
        heightValue();
    }
}


int main() {
    std::cout << "Hello, today we will calculate the surface area and "
    "volume of a cylinder using numbers you input! \n";
    radiusValue();
}
