/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** Linear4x
*/

#ifndef LINEAR4X_HPP
#define LINEAR4X_HPP

#include "ISolver.hpp"

#include <Basics/Matrix.hpp>

namespace Math {
    class Linear4x : public ISolver<Operators::Matrix<4, 4>, Operators::Matrix<4, 1>> {
        public:
            static bool hasSolution(const Operators::Matrix<4, 4>&, const Operators::Matrix<4, 1>&);

            static std::optional<std::vector<double>> getSolution(Operators::Matrix<4, 4>, Operators::Matrix<4, 1>);
    };

}

#endif /* !LINEAR4X_HPP */
