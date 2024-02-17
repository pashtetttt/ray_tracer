/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** MatrixInv
*/

#ifndef MATRIXINV_HPP
#define MATRIXINV_HPP

#include "ISolver.hpp"

#include <Basics/Matrix.hpp>

namespace Math
{
    class MatrixInv : public ISolver<Operators::Matrix<4, 4>>
    {
    public:
        static bool hasSolution(const Operators::Matrix<4, 4> &);

        // returns answer in format:
        // (a b c)
        // (d e f) =>
        // {a d b e c f}
        static std::optional<std::vector<double>> getSolution(const Operators::Matrix<4, 4> &);
    };

}

#endif /* !MATRIXINV_HPP */
