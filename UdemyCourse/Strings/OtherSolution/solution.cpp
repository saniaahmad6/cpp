#include <iostream>
#include <string>
using namespace std;
int main(){   
    do

        {

            size_t l3_l{0};

            size_t l3{0};

            size_t l2_l{1};

    

            cout << "Enter 's' to start or 'q' to quit: " << endl;

            cin >> choice;

        

            switch (choice)

            {

                case 's':

                {

                    cout << "Enter seed: ";

                    cin.ignore();

                    getline(cin, seed);

                

                    space_num = seed.length() - 1;

                

                    for(size_t i_0{0}; i_0 < seed.length(); i_0++)

                    {

                        for (size_t i_1{0}; i_1 < space_num; i_1++)

                        {

                            cout << " ";

                        }

                    

                        space_num--;

                    

                        for (size_t i_2{0}; i_2 < l2_l; i_2++)

                        {

                            cout << seed[i_2];

                        }

                    

                        l2_l++;

                    

                        for(size_t i_3{l3}; i_3 > l3_l; i_3--)

                        {

                            cout << seed[i_3-1];

                        }

                    

                        l3++;

                        cout << endl;

                    }                 

                }

            }       

        } while (choice != 'q');

    }
    
}