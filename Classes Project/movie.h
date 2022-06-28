#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
class Movie{

    private: 
    std::string name;
    std::string rating;
    int watched;

    public: 
    Movie(std::string name_val="None",std::string rating_val="NA", int watched_val=0);
    Movie(const Movie &source);
    ~Movie();
    std::string get_name() const{return name;}
    void set_name(std::string name_val) {name=name_val;}

    std::string get_rating(){return rating;}
    void set_rating(std::string rating_val) {rating=rating_val;}

    int get_watched(){return watched;}
    void set_watched(int watched_val) {watched=watched_val;}

    void increment_watched();

    void display();
};

#endif






