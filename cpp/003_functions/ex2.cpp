#include <iostream>

bool perf(int n) {
  int sum = 0;
  for(int i=1; i<n; i++) {
    if(n % i == 0) {
      sum = sum + i; //sum += i
    }
  }
  if(sum == n) {
    return true;
  }
  else {
    return false;
  }
}

int main(int argc, char** argv) {
  int start;
  std::cout << "enter start: ";
  std::cin >> start;

  int stop;
  std::cout << "enter stop: ";
  std::cin >> stop;

  for(int i=start; i<=stop; i++) {
    if(perf(i)) {
      std::cout << "Perfect number in range: " << i << std::endl;
    }
  }
  return 0;
}

