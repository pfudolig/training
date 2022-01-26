#include <iostream>
#include <assert.h>
#include <string>

int sum(int n);

int sum(int n) {
  if (n != 0) {
    return n + sum (n-1);
  }
  return 0;
}


int main() {
  int n;

  std::cout << "Enter an integer number: ";
  std::cin >> n;

  int num = sum(n);

  std::cout << num << std::endl;

}