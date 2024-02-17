/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** Quadr
*/

#ifndef QUADR_HPP_
#define QUADR_HPP_

#include "ISolver.hpp"

namespace Math
{

    class Quadr : public ISolver<double, double, double>
    {
    public:
        static bool hasSolution(double, double, double);

        static std::optional<std::vector<double>> getSolution(double, double, double);
    };

}

#endif /* !QUADR_HPP_ */
