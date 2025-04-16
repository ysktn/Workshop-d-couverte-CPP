#ifndef IGRAPHICAL_HPP_
#define IGRAPHICAL_HPP_
#include <string>


class IGraphical {
    public:
        virtual ~IGraphical() = default;
        enum Key {
            UP,
            DOWN,
            LEFT,
            RIGHT,
            ENTER,
            ESCAPE,
            SPACE,
            NONE
        };
        Key direction = RIGHT;
        virtual const char *getName() = 0;
        virtual void init() = 0;
        virtual void close() = 0;
        virtual void clearScreen() = 0;
        virtual void refreshScreen() = 0;
        virtual void drawText(int x, int y, const std::string &text) = 0;
        virtual Key getInput() = 0;
};


#endif /* !IGRAPHICAL_HPP_ */