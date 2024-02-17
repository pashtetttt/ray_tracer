/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** IntersectParams
*/

#include "IntersectParams.hpp"

std::ostream& Math::operator<<(std::ostream& stream, const Math::IntersectParams& params) {
    stream << "Intersect with\n normal:\n" << params.normal << "\n and point:\n" << params.intersection << '\n';
    return stream;
}
