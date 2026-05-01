#pragma once
#include <iostream>

namespace rectangle {
    template <typename T>
    class Parallelepiped {
    protected:
        T length;
        T width;
        T height;
    public:
        Parallelepiped() : length(0), width(0), height(0) {};
        Parallelepiped(T l, T w, T h) : length(l), width(w), height(h) {};
        virtual ~Parallelepiped() {
            std::cout << "Deleted";
        }

        void set(T l, T w, T h) { length = l; width = w; height = h; }
        void get(T& l, T& w, T& h) const { l = length; w = width; h = height; }
        void show() const {
            std::cout << "Длина: " << length << " Ширина: " << width << " Высота: " << height << std::endl;
        }

        void setLength(T l) { length = l; }
        void setWidth(T w) { width = w; }
        void setHeight(T h) { height = h; }

        virtual T area() const {
            return 2 * (length * width + length * height + width * height);
        }

        virtual T volume() const {
            return length * width * height;
        }
    };

}