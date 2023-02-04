#pragma once

#include <glm/common.hpp>
#include <glm/matrix.hpp>

using vec3 = glm::vec<3, double, glm::defaultp>;   // 3D point
using point3 = glm::vec<3, double, glm::defaultp>;   // 3D point
using color = glm::vec<3, double, glm::defaultp>;  // RGB color

void write_color(std::ostream& out, color pixel_color) {
    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel_color.x) << ' '
        << static_cast<int>(255.999 * pixel_color.y) << ' '
        << static_cast<int>(255.999 * pixel_color.z) << '\n';
}