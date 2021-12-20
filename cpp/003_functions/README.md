# C++ functions

A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

## Syntax
```c++
type name(parameter1, parameter2, ...){
    //execute your code here
}
```

- `type` is the type of the value returned by the function
- `name` is the identifier by which the function can be called
- `parameters`: each parameter consists of a <em>type</em> followed by and <em>identifier</em>. Each parameter is separated from the next by a comma. Each parameters works within a function as a regular variable which is local to the function.


### Example
```c++
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}

int main () {

    int z;
    z = sum(5,3);
    std::cout << "The result of the addition is : " << z << std::endl;
    
    return 0;
}
```
## Exercise 0

- Write a program (`ex0.cpp`) that asks the user for an integer number and find the sum of all natural numbers up to that number
- Write and use a function that sums the numbers and return the result

## Exercise 1 
- Write a program that finds the first `N` integer of the Fibonacci sequence. The program should ask the user for the integer `N`
- Write a recursive function that takes `N` as argument and returns the final result (i.e. the function calls itself)

## Exersice 2
- Write a program that finds all the perfect numbers in a given range. The program should ask the user for the range (`start`, `stop`)
- Write a function to find whether a number is perfect or not

A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
Example: 6 has divisors 1,2,3 (exluding itsel), 1+2+3 = 6. 6 is a perfect number.

## Pull Request
Once you have completed the exercises:

- `clang-format` your files
- send a pull request with your implementation in your dedicated branch at https://github.com/cms-patatrack/training
