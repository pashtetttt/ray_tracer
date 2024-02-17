/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** Scene
*/

#ifndef SCENE_HPP_
#define SCENE_HPP_

#include <Figures/AFigure.hpp>
#include <Illumination/LightSources/ISource.hpp>

#include <memory>
#include <vector>

namespace RayTracer
{
    struct Scene
    {
        std::vector<std::shared_ptr<Math::AFigure>> objects_;
        std::vector<std::shared_ptr<ISource>> lights_;
    };

}

#endif /* !SCENE_HPP_ */
