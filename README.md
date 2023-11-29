# PLP-4

## Boolean Values

A boolean value represents a truth value such as true or false, these variables are a special type of memory that is stored in a computer only as true or false. C++ uses the ‘bool’ data type that represents two possible values: ‘true’(1) and ‘false’(0):
```
bool isTrue = true;
cout << isTrue; //will output true(1)
bool isFalse = false;
cout << isFalse; //will out false(0)
```

## Conditional Statements

C++ uses ‘if’ statements:
```
if (condition){
	//code that is execute if the condition is true 
}
```

C++ has else statements that can be executed if the condition is false:
```
if (condition){
	//code that is executed if the condition is true
} else {
	//code that is executed if the condition is false
}
```

C++ also uses the else if statement:
```
if (condition1){
	//code that is executed if the condition is true
} else if (condition2) {
	//code that is executed if condition1 is false and condition2 is true
} else{
 	// code that is executed if neither condition1 and condition2 is true
}
```

C++ also uses switch statements that perform multi-way branching based on the value of the expression:
```
switch (expression){
	case value1:	
		//code executed if expression == value1
		break;
	case value2:
		//code executed if expression ==value2
		break;
	default: 
		//code executed if none of the expressions match the case
}
```
## How Does C++ Delimit Code Blocks

C++ uses curly braces {} to code block under each condition, typically each condition will be encased within the curly braces but switch statements will have every case within that one curly brace.

## Short Circuit Evaluation

Short-circuit evaluation is a behavior in which the second part of a logical expression is not evaluated if the result of the logical expression can be determined by the first part. Short circuiting in C++ occurs when a logical expression evaluates ‘&&’ (AND) and ‘||’ (OR) logical operators.

## The 'Dangling Else' Problem
The “dangling else” problem is a potential ambiguity in programming that uses multiple ‘if’-’else’ statements. It’s when a programmer loses track of code indentation and makes it unclear where an else part matches with the if statement
C++ deals with this problem by using a rule called the “matching ‘else’ rule” in which it specifies that an ‘else’ code block will be associated with the closest proceeding unmatched ‘if’ statement.
 The use of curly braces is highly encouraged to avoid indicate what ‘else’ belongs to which ‘if’ and avoid confusion.

## Switch/Case Statements

C++ uses ‘break’ to exit a switch statement after a case has been evaluated and executed. Without the use of the ‘break’ statement, this will allow the control to flow through the other cases within the program which can cause confusion. The statement ‘continue’ is not applicable for ‘switch’ statements because the ‘continue’ statement is used in loops(‘for’ and ‘while’ loops) to skip the rest of the loop body and continue on to the next iteration.

## Loop Code Block Variables vs Function Code Blocks

Variables that are declared within loops and functions both have block scope which means their visibility is limited to the block in which they were declared. They are the same in order to keep variables within their own scopes so to avoid compilation errors. 


