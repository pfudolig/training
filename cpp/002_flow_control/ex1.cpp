#include <iostream>
#include <assert.h>
using namespace std;

int main(int argc, char** argv) {
  assert(argc==3);
  int start = stoi(argv[1]);
  int end = stoi(argv[2]);

  for(int i = start; i <= end; i++){
    if(i%2 != 0){
      cout << i << " ";
      cout << " -- divisors: ";
      
      for(int j = 2; j < i; j++){
        if(i%j == 0){
          cout << j << " ";
        }
      }
      cout << endl;
    }

  }

  return 0;
}