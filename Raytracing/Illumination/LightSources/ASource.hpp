/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** ASource
*/

#ifndef ASOURCE_HPP_
#define ASOURCE_HPP_

#include "ISource.hpp"

#include <Basics/Vector3D.hpp>

namespace RayTracer
{

    class ASource : public ISource
    {
    protected:
        ASource(const Math::Vector3D &color)
            : color_(color) {}

    protected:
        Math::Vector3D color_;
    };

}

#endif /* !ASOURCE_HPP_ */
