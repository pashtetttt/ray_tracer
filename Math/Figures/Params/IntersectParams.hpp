/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** IntersectParams
*/

#ifndef INTERSECTPARAMS_HPP_
#define INTERSECTPARAMS_HPP_

#include <fstream>

#include <Basics/Vector3D.hpp>
#include <Basics/Point3D.hpp>

namespace Math {
    struct IntersectParams {
        Vector3D normal;
        Point3D intersection;

        inline bool operator==(const IntersectParams& other) const {
            return normal == other.normal && intersection == other.intersection;
        }

        inline bool operator!=(const IntersectParams& other) const {
            return !(*this == other);
        }
    };

    std::ostream& operator<<(std::ostream& stream, const IntersectParams& params);

}

#endif /* !INTERSECTPARAMS_HPP_ */
