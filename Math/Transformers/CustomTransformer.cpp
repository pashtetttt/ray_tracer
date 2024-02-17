/*
** EPITECH PROJECT, 2023
** CustomTransformer
** File description:
** CustomTransformer
*/

#include "CustomTransformer.hpp"

Math::Operators::CustomTransformer::CustomTransformer(const Math::Operators::Matrix<4, 4>& op)
    : ATransformer(op) {
        setInvOperator({});
    }
