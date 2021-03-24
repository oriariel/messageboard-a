//
// Created by ori on 21/03/2021.
//

#include <iostream>
#include <vector>
#include "Direction.hpp"
using namespace std;
namespace ariel {
    class Board {
    public:
        void post(int rows, int cols, Direction d, string ans);

        string read(int rows, int cols, Direction d, int length);

        void show();
    };
}
