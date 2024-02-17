/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** TranslationTransformer
*/

#ifndef TRANSLATIONTRANSFORMER_HPP
#define TRANSLATIONTRANSFORMER_HPP

#include "ATransformer.hpp"

#include <cmath>

namespace Math::Operators
{
    class TranslationTransformer : public ATransformer
    {
    public:
        TranslationTransformer(double x = 0., double y = 0., double z = 0.);

    protected:
        void setInvOperator(const std::vector<double> &);
    };

}

#endif /* !TRANSLATIONTRANSFORMER_HPP */
