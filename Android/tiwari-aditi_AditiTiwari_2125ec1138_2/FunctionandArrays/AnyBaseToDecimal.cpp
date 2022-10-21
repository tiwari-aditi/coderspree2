#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n, int b) {
    int rem,res=0,c=0;
    while(n!=0){
        rem = n%10;
        res= res+ rem*pow(b,c);
        c++;
        n=n/10;
    }
    return res;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}