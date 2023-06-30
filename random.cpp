#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main(void){
    // int i,j;
    // srand( (unsigned)time(NULL));
    // for ( i = 0; i < 15; i++)
    // {
    // j = rand();
    // cout<<"random number is: "<<j<<endl;
    //     /* code */
    // }
    srand(time(0));
    cout<<(rand() % 6)+1;

}

// int main(void){
//     int max, randomNumber;

//     cout<<"enter input max integer : ";
//     cin>>max;
//     srand(time(0));
//     randomNumber = (rand() % max );
//     cout<<randomNumber << endl;
// }
// #include <iostream>
// #include <random>

// int main() {
//     // Create a random number generator engine
//     std::random_device rd;
//     std::mt19937 generator(rd()); // Mersenne Twister engine with seed from random_device

//     // Define the range for the random number
//     int lower_bound = 1;
//     int upper_bound = 100;

//     // Create a uniform distribution of integers within the specified range
//     std::uniform_int_distribution<int> distribution(lower_bound, upper_bound);

//     // Generate the random number
//     int random_number = distribution(generator);

//     // Print the random number
//     std::cout << "Random number between " << lower_bound << " and " << upper_bound << ": " << random_number << std::endl;

//     return 0;
// }


