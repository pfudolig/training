# Flow Control

## for loop
### Syntax
```c++
for{statement1; statement2; statement3}{
    //execute your code
}
```
#### Example
```c++
for(int i = 0; i < 100; i++){
    std::cout << 'Loop index ' << i << std::endl;
}
```
- Statement 1 : initializes an integer variable to 0
- Statement 2 : defines the condition for the code execution
- Statement 2 : defines the increment (decrement) of the variable `i` 

## while loop
### Syntax
```c++
while(condition){
  //execute code block
}
```
The while loop loops through a block of code as long as a specified `condition` is true

## Exercise 0
- Modify `ex0.cpp` and write a program that takes two integers (`start`, `stop`) from command line, write a for loop from `start` to `stop`, print the values
- Compile and execute


## if-else condition

C++ has the following conditional statements:

- Use `if` to specify a block of code to be executed, if a specified condition is true
- Use `else` to specify a block of code to be executed, if the same condition is false
- Use `else if` to specify a new condition to test, if the first condition is false
- Use `switch` to specify many alternative blocks of code to be executed


### Syntax
#### if - else
```c++
if{condition}{
    //execute code block if condition is true
}
else{
    //execute code block if condition is false
}
```

#### if - else if
```c++
if(condition){
    //execute code block if condition is true
}
else if{condition2}{
    //execute code block if condition is false and condition2 is true
}
else if{condition3}{
    //execute code block if condition is false, condition2 is false and condition3 is true
}
else{
    //execute code block if the previous conditions are false
}
```

#### switch

```c++
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
- `break` breaks out of the switch block, if you find the case you don't need to compare anymore
- `default` will execute the code block if there is not case match
#### Example

```c++
int day = 4;
switch (day) {
  case 1:
    std::cout << "Monday";
    break;
  case 2:
    std::cout << "Tuesday";
    break;
  case 3:
    std::cout << "Wednesday";
    break;
  case 4:
    std::cout << "Thursday";
    break;
  case 5:
    std::cout << "Friday";
    break;
  case 6:
    std::cout << "Saturday";
    break;
  case 7:
    std::cout << "Sunday";
    break;
  default:
    std::cout << "No day found";

}
// Outputs "Thursday" (day 4) 
```
## Exercise 1
- Modify `ex1.cpp`, implement a for loop as in exercise 0
- Use control flow statements to print the odd numbers between `start` and `stop`
  - if the number is odd, check whether it is a prime number or not
  - otherwise print its divisors
- Compile and execute

## Exercise 2
- Modify `ex2.cpp`
- Write a program in C++ to produce a NxN matrix (take N from command line) with 0's down the main diagonal, 1's in the entries just above and below the main diagonal, 2's above and below that, etc.
- Compile and execute

### Example
```
Input N = 8
Output:
0  1  2  3  4  5  6  7                                                                                        
1  0  1  2  3  4  5  6                                                                                        
2  1  0  1  2  3  4  5                                                                                        
3  2  1  0  1  2  3  4                                                                                        
4  3  2  1  0  1  2  3                                                                                        
5  4  3  2  1  0  1  2                                                                                        
6  5  4  3  2  1  0  1                                                                                        
7  6  5  4  3  2  1  0 
```

## Pull Request
Once you have completed the exercises:

- `clang-format` your files
- send a pull request with your implementation in your dedicated branch at https://github.com/cms-patatrack/training





