#include <iostream>

using namespace std;

int fact;
int i;

int main(){

    cout << "Please enter your factorial: " << flush;
    cin >> fact;
    
    if(fact == 0){

        fact = 1;

    }else  if(fact > 31) {

        cout << "Out of range please enter between 0 and 31: " << flush;
        cin >> fact;

    }

    i = fact - 1;
    while( i>1 )  {

        fact = fact * i;
        i--;

    }
    
    cout << fact << endl;

    return 0;

}
