#include <iostream>
#include <assert.h>
using namespace std;

int main(int argc, char** argv) {
  assert(argc==3);
  int start = stoi(argv[1]);
  int stop = stoi(argv[argc-1]);

  for(int i = start; i <= stop; i++){
    cout << i << endl;
  }
}