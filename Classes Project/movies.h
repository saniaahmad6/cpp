#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "movie.h"
class Movies{
    private: 
    std::vector <Movie> vec;

    public: 

    bool add_movie( std::string name, std::string rating, int watched);
    bool increment_watched(std::string name_val);
    void display();
};

#endif



