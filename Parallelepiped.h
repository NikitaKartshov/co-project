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
		~Parallelepiped() {
			std::cout << "Deleted";
		}
	};

}