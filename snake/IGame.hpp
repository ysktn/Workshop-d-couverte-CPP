#ifndef IGAME_HPP_
#define IGAME_HPP_
#include "IGraphical.hpp"

class IGame {
    public:
        IGame() = default;
        virtual ~IGame() = default;
        virtual const char *getName() = 0;
        virtual void init(IGraphical &graphical) = 0;
        virtual void update(IGraphical &graphical) = 0;
        virtual void handle_event() = 0;
        virtual void check_end() = 0;
        virtual void close() = 0;
};
#endif