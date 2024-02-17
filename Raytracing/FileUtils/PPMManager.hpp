/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** PPMManager
*/

#ifndef PPMMANAGER_HPP_
#define PPMMANAGER_HPP_

#include <fstream>
#include <vector>

namespace Files
{
    enum class Method
    {
        STREAM,
        DUMP
    };

    class PPMManager
    {
    public:
        PPMManager(const std::string &, size_t, size_t, Method method = Method::STREAM, size_t maxcolor = 255);

        ~PPMManager();

        PPMManager &operator<<(uint32_t);

        std::vector<size_t>& operator[](size_t);

    private:
        std::ofstream ofs;
        std::vector<std::vector<size_t>> data;
        size_t width_;
        size_t height_;
        Method method_;
    };
}

#endif /* !PPMMANAGER_HPP_ */
