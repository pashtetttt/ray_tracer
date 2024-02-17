/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** Slicer
*/

#ifndef SLICER_HPP_
#define SLICER_HPP_

#include <vector>
#include <cstddef>

namespace RayTracer
{

    class Slicer
    {
    public:
        static std::vector<size_t> Slice(size_t width, size_t height, size_t workers);
    };

}

#endif /* !SLICER_HPP_ */
