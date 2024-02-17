/*
** EPITECH PROJECT, 2023
** BaseTransformer
** File description:
** BaseTransformer
*/

#ifndef BASETRANSFORMER_HPP_
#define BASETRANSFORMER_HPP_

#include "ATransformer.hpp"

namespace Math::Operators
{
    class BaseTransformer : public ATransformer
    {
    public:
        BaseTransformer();

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !BASETRANSFORMER_HPP_ */
