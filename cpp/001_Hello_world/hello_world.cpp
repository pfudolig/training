#include <iostream>  // Cout
#include <string>

int main() {
  std::string firstName;
  std::cout << "Type your first name: ";
  std::cin >> firstName;
  std::cout << "Hello world, hello " << firstName << std::endl;
}