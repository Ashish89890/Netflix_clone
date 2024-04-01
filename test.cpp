#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int setBits(int N){
    // Write your code here.
    int n = N ;
    int i=0 ; ;
    while (n>0){
         
        
         if ((n & 1) == 0)
         {
              break;
        }
        i++; 
        n=n>>1 ;
        
    }
    cout << i << endl;
    int m =1<<(i) ;
    N= N|m ;
    return N ;
}
int main()
{
  cout << setBits(10);
  return 0;
}