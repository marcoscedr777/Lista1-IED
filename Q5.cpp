#include <iostream>

using namespace std;

int main() {
  
  int n;

  cout << "Digite o número\n";
  cin >> n;

  if(n%2==0){
    cout << n << " é par";
  }
  else{
    cout << n << " é ímpar";
  }

}