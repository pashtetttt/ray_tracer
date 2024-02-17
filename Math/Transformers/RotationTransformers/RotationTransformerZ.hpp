/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** RotationTransformerZ
*/

#ifndef ROTATIONTRANSFORMERZ_HPP_
#define ROTATIONTRANSFORMERZ_HPP_

#include "../ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class RotationTransformerZ : public ATransformer
    {
    public:
        RotationTransformerZ(double angle);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !ROTATIONTRANSFORMERZ_HPP_ */
