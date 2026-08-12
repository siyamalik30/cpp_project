//triangle pattern problem
#include <iostream>
using namespace std;
int main(){
   
   int n =4;
   for(int i=0;i<n;i++){
      int count=1;
      for(int j=0;j<i+1;j++){
         cout<<count<<" ";
         count++;
      }
      cout<<endl;
   }
   return 0;
}

//reverse triangle problem
#include <iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=0;i<n;i++){
      for (int j=i+1;j>0;j--){
         cout<<j<<" ";

      }
   cout << endl;
   }
return 0;
}