/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** RotationTransformerY
*/

#ifndef ROTATIONTRANSFORMERY_HPP_
#define ROTATIONTRANSFORMERY_HPP_

#include "../ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class RotationTransformerY : public ATransformer
    {
    public:
        RotationTransformerY(double angle);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !ROTATIONTRANSFORMERY_HPP_ */
