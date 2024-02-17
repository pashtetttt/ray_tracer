/*
** EPITECH PROJECT, 2023
** CustomTransformer
** File description:
** CustomTransformer
*/

#ifndef CUSTOMTRANSFORMER_HPP_
#define CUSTOMTRANSFORMER_HPP_

#include "ATransformer.hpp"

namespace Math::Operators
{
    class CustomTransformer : public ATransformer
    {
    public:
        CustomTransformer(const Matrix<4, 4> &);
    };

}

#endif /* !CUSTOMTRANSFORMER_HPP_ */
