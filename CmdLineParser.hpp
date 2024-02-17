/*
** EPITECH PROJECT, 2023
** Raytracer
** File description:
** CmdLineParser
*/

#ifndef CMDLINEPARSER_HPP_
#define CMDLINEPARSER_HPP_

#include <string>
#include <stdexcept>

class Settings {
    private:
        inline static bool fast{false};

    public:
        inline static bool isFast() { return fast; }

        class CmdLineParser {
            public:
                static void Parse(int, char **, std::string&, std::string&);
        };

};

#endif /* !CMDLINEPARSER_HPP_ */
