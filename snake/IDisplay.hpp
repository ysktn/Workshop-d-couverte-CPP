
#ifndef DISPLAY_HPP_


#define DISPLAY_HPP_



class IDisplay {
    public:
        IDisplay() = default;
        virtual ~IDisplay() = default;
        virtual void start() = 0;
        virtual void close() = 0;
};


#endif 