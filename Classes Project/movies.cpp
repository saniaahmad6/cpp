#include "movies.h"
#include "movie.h"
#include  <string>

bool Movies::add_movie( std::string name, std::string rating, int watched){
    
    for (Movie &movie:vec){
        if (movie.get_name()==name){
            return false;
        }
    }   
    Movie m{name,rating,watched};
    vec.push_back(m);
    return true;
        
    
}
bool Movies::increment_watched(std::string name_val){
    for (Movie &movie:vec){
        
        if (movie.get_name()==name_val){
            movie.increment_watched();
            return true;
        }
    }
    return false;
}



    
void Movies::display(){
    for (auto i: vec){
        i.display();
    }
}