/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** ISource
*/

#ifndef ISOURCE_HPP_
#define ISOURCE_HPP_

#include <optional>
#include <vector>

#include <Illumination/Ray.hpp>
#include <Figures/AFigure.hpp>

namespace RayTracer
{
    class ISource
    {
    public:
        virtual ~ISource() = default;

        // get the color if the ray hits the source
        virtual std::optional<Math::Vector3D> getColor(const Ray &, const Math::Vector3D &, double,
                                                       const std::vector<std::shared_ptr<Math::AFigure>> &) = 0;
    };

}

#endif /* !ISOURCE_HPP_ */
