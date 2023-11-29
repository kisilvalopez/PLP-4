#include <iostream>

//we are writing a multi-condition if-else statement
int main(){
    int x, y;
    cout << "Enter a value for x: " << endl;
    cin >> x;

    cout << "Enter a value for y: " << endl;
    cin >> y;

    //our multi condition if/else statement
    if(x > 0 && y < 5){
        cout << "Both conditions are met, x is greater than 0 and y is less than 5." << endl;
    }else{
        cout << "At least one condition is false." << endl;
    }
    return 0;
}
