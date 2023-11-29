#include <iostream>

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0){
        cout << "This number is a positive number." << endl;
    }else if(num < 0){
        cout << "This number is negative." << endl;
    } else{
        cout << "This number is 0." << endl;
    }
    return 0;
    
}
