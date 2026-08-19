//shopping bill
#include <iostream>
using namespace std;
int main(){
   int total_price =0;
   int a,b;
   cout<<"enter price of product 1 =";
   cin>>a ;
   cout<< "enter quantity of product 1st =";
   cin>>b;
   
   total_price += (a*b);
   int c,d;
   cout<<"enter price of 2nd product=";
   cin>> c;
   cout<< "enter quantity of 2nd product=";
   cin>>d;
   total_price+= (c*d);
   
   int e,f;
   cout<<"enter price of 3rd product=";
   cin>> e;
   cout<<"enter quantity of 3rd product=";
   cin>>f;
   total_price+= (e*f);

   cout<<"-------your bill-------"<<endl;
   cout<< b<<" items of 1st Product costs "<< (a*b)<<endl;
   cout<<d<<" items of 2nd product cost "<< (c*d) <<endl;
   cout<<f<<" items of 3rd product cost "<<(e*f) <<endl;
   cout<< "total price ="<< total_price <<endl;
   cout <<"---after applying 10 percent discout---"<<endl;
   cout<<"final bill to pay = "<< total_price - (total_price/10)<< endl;
   return 0;

}


//student result :
#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"enter marks of maths = ";
   cin>>a;
   cout <<"enter physics marks = ";
   cin >>b;
   cout <<"enter chemistry marks = ";
   cin>> c;
   float per=(a+b+c)/3;
   
   cout <<"---result----"<< endl;
   cout <<"you got "<<per <<"% " <<"marks in pcm" <<endl;
   if (per>=40){
      cout<<"Result - Pass";
   }else{
      cout<<"Result - Fail";
   }
}



//electricity bill for n num of consumers
#include <iostream>
using namespace std;
int main(){
   int n = 5; // n is no. of consumer getting bill
   for(int i=0;i<n;i++){
      cout<<"for consumer number "<<i+1<<endl;
      int unit_cons;
      int bill=0;
      cout<<"enter your consumed units: ";
      cin>> unit_cons;
      if(unit_cons<=100 && unit_cons>0 ){
         bill += (unit_cons*5);
      }
      else if(unit_cons<=200 && unit_cons>100 ) {
         bill = 100*5 + (unit_cons -100)*7 ;
      }
      else{
         bill=100*5+ 100*7+ (unit_cons -200)*10 ;
      }

      cout<< "your total bill is "<< bill<<endl;
   }
   return 0;
}