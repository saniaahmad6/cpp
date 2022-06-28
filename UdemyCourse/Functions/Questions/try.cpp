#include <iostream>
#include <cmath>//for power fucntion
using namespace std;

//Function prototype
void area_circle();
double calc_area_circle(double radius);
double calc_vol_cylinder(double radius,double );
void volume_cylinder();



int main(){
    area_circle();
    volume_cylinder();
    return 0;
}


void area_circle(){
    cout<<"Enter radius of circle: ";
    double radius_of_circle;
    cin>>radius_of_circle;
    cout<<"Area of circle: "<<calc_area_circle(radius_of_circle)<<endl;
    cout<<"==============\n"<<endl;
}
double calc_area_circle(double radius){
    return 3.14*pow(radius,2);
}

double calc_vol_cylinder(double radius,double height){
    return calc_area_circle(radius)*height;
}
void volume_cylinder(){
    cout<<"Enter radius and height of cylinder: ";
    double radius_of_cylinder,height_of_cylinder;
    cin>>radius_of_cylinder>>height_of_cylinder;

    cout<<"Volume of cylinder: "<<calc_vol_cylinder(radius_of_cylinder,height_of_cylinder)<<endl;
    cout<<"==============\n"<<endl;
}



