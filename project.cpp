// mini tournament result...
#include <iostream>
#include <string>
using namespace std;
int main(){
   int N;
   cout<<"enter number of player: ";
   cin>> N;
   for(int i=1;i<=N;i++){  // for player i
      int score , total = 0;
      cout<<"for "<< i <<" player:"<<endl;
      for(int j=0;j<3;j++){
         
         cout<<"enter score of "<<j+1<<" round: ";
         cin>> score ;
         total+= score;
         
      }
      float avg = total/3.0;
      string medal ;
      if(avg >= 80){
         medal ="Gold";
      }
      else if(avg>=60){
         medal ="Silver";
      }
      else if(avg>=40){
         medal = "Bronze";
      }
      else{
         medal ="eliminated";
      }
      cout<< "player "<<i<<"---> Total: "<<total<<"---> "<< medal <<endl;

   }
   return 0;
}
