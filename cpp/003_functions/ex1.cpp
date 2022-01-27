#include <iostream>

int fib(int N) {
  int first = 0;
  int second = 1;
  int next = 0;

  for(int i=1; i<=N; i++) {
    if(i == 1) {
      std::cout << first << " ";
      continue;
    }
    if(i == 2) {
      std::cout << second << " ";
      continue;
    }
      next = first + second;
      first = second;
      second = next;
      std::cout << next << " ";
  }
  std::cout << std::endl;
  std::cout << "ignore this: ";
  return 0;
}

int main(int argc, char** argv) {
  int N;

  std::cout << "How many Fibonacci integers would you like? -> ";
  std::cin >> N;

  int nints = fib(N);

  std::cout << nints << std::endl;

  return 0;
}