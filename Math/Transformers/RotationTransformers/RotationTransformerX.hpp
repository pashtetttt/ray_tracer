/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** RotationTransformerX
*/

#ifndef ROTATIONTRANSFORMERX_HPP_
#define ROTATIONTRANSFORMERX_HPP_

#include "../ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class RotationTransformerX : public ATransformer
    {
    public:
        RotationTransformerX(double angle);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !ROTATIONTRANSFORMERX_HPP_ */
