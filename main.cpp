#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void displayPrimes(int start, int end) {
  for (int i = start; i <= end; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main() {
  int start, end;
  cout << "Enter the start and end numbers: ";
  cin >> start >> end;
  cout << "Prime numbers between " << start << " and " << end << " are: ";
  displayPrimes(start, end);
  return 0;
}
