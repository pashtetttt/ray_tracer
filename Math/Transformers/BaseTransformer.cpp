/*
** EPITECH PROJECT, 2023
** BaseTransformer
** File description:
** BaseTransformer
*/

#include "BaseTransformer.hpp"

Math::Operators::BaseTransformer::BaseTransformer()
    : ATransformer(Math::Operators::Id<4>()) {
        setInvOperator({});
    }

void Math::Operators::BaseTransformer::setInvOperator(const std::vector<double>&) {
    inv_operator_ = Math::Operators::Id<4>();
}
