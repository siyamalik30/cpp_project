// cal_Sum:
#include <iostream>
using namespace std;
int main(){
   int n;
   int sum=0;
   cout<<"enter num: ";
   cin>> n;
   for(int i=1 ; i<=n ; i++ ){
      sum+=i ;
   }
   cout<< "sum= " <<sum ;
   return 0;
}