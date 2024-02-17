/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** ISolver
*/

#ifndef ISOLVER_HPP_
#define ISOLVER_HPP_

#include <optional>
#include <vector>
#include <cmath>

namespace Math
{

    template <typename... Args>
    class ISolver
    {
    public:
        virtual ~ISolver() = default;

        static bool hasSolution(Args &&...args);

        static std::optional<std::vector<double>> getSolution(Args &&...args);
    };

}

#endif /* !ISOLVER_HPP_ */
