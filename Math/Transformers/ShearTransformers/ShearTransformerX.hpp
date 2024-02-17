/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** RotationTransformerX
*/

#ifndef SHEARTRANSFORMERX_HPP_
#define SHEARTRANSFORMERX_HPP_

#include "../ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class ShearTransformerX : public ATransformer
    {
    public:
        ShearTransformerX(double, double);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !SHEARTRANSFORMERX_HPP_ */
