// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program turns grade into percentage

#include <iostream>


int LevelConversion(std::string gradeLevel) {
    // turns grade into percentage
    int gradePercentage;

    // process
    if (gradeLevel == "4+") {
        gradePercentage = 97;
    } else if (gradeLevel == "4") {
        gradePercentage = 90;
    } else if (gradeLevel == "4-") {
        gradePercentage = 83;
    } else if (gradeLevel == "3+") {
        gradePercentage = 78;
    } else if (gradeLevel == "3") {
        gradePercentage = 75;
    } else if (gradeLevel == "3-") {
        gradePercentage = 71;
    } else if (gradeLevel == "2+") {
        gradePercentage = 68;
    } else if (gradeLevel == "2") {
        gradePercentage = 65;
    } else if (gradeLevel == "2-") {
        gradePercentage = 61;
    } else if (gradeLevel == "1+") {
        gradePercentage = 58;
    } else if (gradeLevel == "1") {
        gradePercentage = 55;
    } else if (gradeLevel == "1-") {
        gradePercentage = 51;
    } else if (gradeLevel == "R") {
        gradePercentage = 30;
    } else {
        gradePercentage = -1.0;
    }

    return gradePercentage;
}

main() {
    // this function calls the precedent function
    std::string userGradeLevel;
    int levelConverted;

    // input & output
    std::cout << "Enter the grade you would like to convert to % : ";
    std::cin >> userGradeLevel;

    levelConverted = LevelConversion(userGradeLevel);

    if (levelConverted == -1) {  // error check
        std::cout << "ERROR, invalid input." << std::endl;
    } else {
        std::cout << "The middle percentage of the grade " << userGradeLevel <<
        " is " << levelConverted << "%. " << std::endl;
    }

        std::cout << "\nDone." << std::endl;
}
