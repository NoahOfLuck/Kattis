#include <cmath>
#include <iostream>
using namespace std;

const int M = 23;

int hash_function(string v) { // assumption 1: v uses ['A'..'Z'] only
  int sum = 0;                // assumption 2: v is a short string
  for (auto& c : v) // for each character c in v
    sum = ((sum*26)%M + (c-'A'+1))%M; // M is table size
  return sum;
}

int main() {
    cout << hash_function("WGL") << endl;

    return 0;
}
