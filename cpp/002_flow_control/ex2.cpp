#include <iostream>
#include <assert.h>

using namespace std;

int abs_val(int num) {
  if (num >= 0) {
    return num;
  } else {
    return num * -1;
  }
}

int main(int argc, char** argv) {
  assert(argc == 2);
  int N = stoi(argv[1]);

  for (int y = 0; y < N; y++) {
    for (int x = 0; x < N; x++) {
      cout << abs_val(x - y) << " ";
    }
    cout << endl;
  }

  return 0;
}