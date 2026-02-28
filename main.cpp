#include <iostream>
using namespace std;

void print( int n){
if (n >= 1 && n <= 100)

{

 print (n-1);
cout << "I love Recursion"  << endl;
}};
int main() {
int n;
  cin  >> n ;
  print (n);
    return 0;
}
