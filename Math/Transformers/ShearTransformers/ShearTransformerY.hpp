/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** RotationTransformerX
*/

#ifndef SHEARTRANSFORMERY_HPP_
#define SHEARTRANSFORMERY_HPP_

#include "../ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class ShearTransformerY : public ATransformer
    {
    public:
        ShearTransformerY(double, double);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !SHEARTRANSFORMERY_HPP_ */
