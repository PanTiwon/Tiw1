#include<iostream>
using namespace std;

int main(){
    int number;
    float odd,even;
    even = 0;
    odd = 0;
    while (true){
    cout << "Enter an integer: ";
    cin >> number;
    if (number == 0)
    {
        break;
    }
    
    if ( number %2 == 0){
        even++;
       }
       else{
        odd++;
       }
    }
    cout << "#Even numbers = " << even;
    cout << "\n#Odd numbers = "<< odd;
    return 0;
}
