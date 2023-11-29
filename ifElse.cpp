#include <iostream>

//we are writing a one-condition if/else statement
int main(){
    //declares an integer variable
    int num;
    //asks user input for an integer
    cout << "Enter an integer: ";
    cin >> num;
    //if/else condition, as long as the number inputted is divisible by 2, it is an even number
    if (num % 2 == 0){
        cout << num << " is even" << endl;
    } else{
        cout << num << " is odd" << endl;
    }

    return 0;
}
