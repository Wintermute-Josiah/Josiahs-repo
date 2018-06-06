#include <iostream>

using namespace std;

int main(){
    
    int numberCats = 5;
    int numberDogs = 7;

    cout << "Number of catz: " << numberCats << endl;
    cout << "Number of dogz: " << numberDogs << endl;
    cout << "Total number of animals: " << numberCats + numberDogs << endl;
    cout << "Congrats you got a new dog!" << endl;

    numberDogs = numberDogs + 1;
    
    cout << "New number of dogs: " << numberDogs << endl; 
    
    return 0;

}
