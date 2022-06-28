#include <iostream>
#include <cstdlib>//random
#include <ctime>
#include <cmath>
using namespace std;

int main(){
    cout<<"RAND_MAX: "<<RAND_MAX<<endl;
    cout<<"Enter number of times to loop: ";
    size_t loop_count{};
    cin>>loop_count;
    int min{1},max{6};
    srand(time(nullptr));//seeding the rand() for change in time 
    int random_number{};

    for (size_t i{};i<=loop_count;i++){
        random_number=rand()%(max-min+1)  +min;//generate a random number between min and max
        cout<<random_number<<endl;
    }
    return 0;
    




    
    // double bill_total {102.78};
    // int number_of_guests {5};
    
    // //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    // //----WRITE YOUR CODE BELOW THIS LINE----
    // double individual_bill{bill_total/number_of_guests};
    // double individual_bill_1{floor(individual_bill)};
    // double individual_bill_2{round(individual_bill)};
    // double individual_bill_3{ceil((individual_bill*100)/100)};
    
    // //----WRITE YOUR CODE ABOVE THIS LINE----
    // //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    // cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;

}