/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** RotationTransformerX
*/

#ifndef SHEARTRANSFORMERZ_HPP_
#define SHEARTRANSFORMERZ_HPP_

#include "../ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class ShearTransformerZ : public ATransformer
    {
    public:
        ShearTransformerZ(double, double);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !SHEARTRANSFORMERZ_HPP_ */
