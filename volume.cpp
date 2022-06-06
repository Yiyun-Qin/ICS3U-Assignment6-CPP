// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, calculating the volume of circular truncated cone

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

float Volume(float radiusTop, float radiusBottom, float height) {
    // This function calculates the volume

    // process & output
    float shapeVolume;
    shapeVolume = 1 / 3.00 * M_PI * height *
    (pow(radiusTop, 2) + radiusTop * radiusBottom + pow(radiusBottom, 2));
    return shapeVolume;
}


int main() {
    // This function does try and catch
    std::string radiusTopString;
    std::string radiusBottomString;
    std::string heightString;
    float radiusTopFloat;
    float radiusBottomFloat;
    float heightFloat;
    float shapeVolume;

    // input
    std::cout << "A circular truncated cone is a solid"
    << " figure that looks like a cone with the tip straight cut off."
    << std::endl;
    std::cout << "This function calculates its volume." << std::endl;
    std::cout << "Enter the radius of the circle at the top (cm): ";
    std::cin >> radiusTopString;
    std::cout << "Enter the radius of the circle at the bottom (cm): ";
    std::cin >> radiusBottomString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightString;

    // process
    std::cout << "" << std::endl;
    try {
        radiusTopFloat = std::stof(radiusTopString);
        radiusBottomFloat = std::stof(radiusBottomString);
        heightFloat = std::stof(heightString);
        if (radiusTopFloat > 0 && radiusBottomFloat > 0 && heightFloat > 0) {
            shapeVolume = Volume(
                radiusTopFloat, radiusBottomFloat, heightFloat);
            std::cout << "The volume of this circular truncated cone is "
            << std::fixed << std::setprecision(2) << std::setfill('0')
            << shapeVolume << " cm³." << std::endl;
        } else {
            std::cout << "Please enter a positive number!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
