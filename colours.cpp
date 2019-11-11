// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program shows all rgb colour combinations

#include <iostream>


int main() {
    // this function uses a nested loop
    int red;
    int green;
    int blue;

    // process & output
    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
                std::cout << "RGB values " << red << ", " << green << ", "
                          << blue << std::endl;
        }
    }
}
}
