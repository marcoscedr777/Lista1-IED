#include <iostream>

using namespace std;

int main() {
  
  int a, b, c, x;

  cout << "Digite os três números:\n";
  cin >> a;
  cin >> b;
  cin >> c;

  if(a>c){
    x=c;
    c=a;
    a=x;
  }

  if(a>b){
    x=b;
    b=a;
    a=x;
  }

  if(b>c){
    x=c;
    c=b;
    b=x;
  }
  
  cout << a << b << c;


  return 0;
}