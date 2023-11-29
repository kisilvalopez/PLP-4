#include <iostream>

//Short circuiting in C++ typically occurs when we're evaluating a statement that involves the logical operators '&&' (AND) and '||' (OR).
//The second part of the logical expression won't be evaluated if the result of our expression is determined by the first part.

int main(){
    int x = 5;
    int y = 10;
    //short-circuit logic statement with '&&' operators
    if (x > 0 && y/ x > 2){
        cout << "Both conditions are true." << endl;
    } else{
        cout << "At least one condition is false." << endl;
    }
    return 0;
}
