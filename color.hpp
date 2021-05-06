//
// Created by atm on 5/6/21.
//

#ifndef RTIOW_COLOR_HPP
#define RTIOW_COLOR_HPP

#include "vec3.hpp"

#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color(z)) << '\n';
}

#endif //RTIOW_COLOR_HPP
