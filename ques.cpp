//atm machine simulator
#include <iostream>
using namespace std;
int depo ;
int withd;
int deposite(){
   cout<<"enter amount you want to deposite:";
   cin>> depo;
   return depo;
}
int withdrawal(){
   
   cout<<"enter amount you want to withdrawal(must be multiple of 100):";
   cin>> withd;
   return withd;
}


int main (){
   int balance = 40000;
   int a=0;
   while(a!=4){
      
      cout<< "----Menu----"<<endl;
      cout<<"1. check balance "<<endl;
      cout<<"2. deposite "<<endl;
      cout<<"3. withdrawal"<<endl;
      cout<<"4. Exist" << endl;
      cin>>a;
      if(a==1){
         cout<<"your current balance is:" << balance <<endl;
      }
      else if(a==2){
         cout<< deposite();
         cout<< "amount added.";
         balance+= depo;
         cout<<"total balance : "<<balance;
      }
      else if(a==3){
         cout<< withdrawal();
         cout<< " amount deducted.";
         balance-=withd;
         cout<<"remaining balance is:"<<balance<<endl;

      }
      else if (a==4){
         cout<<" thank you..";
         break;
      }
      cout<<"thank you for visiting....";
      return 0;

   }
}


//restaurant ordering system....
#include <iostream>
using namespace std;
int main(){
   int bill =0;
   for(;;){
      int i;
      int item_qtty;
      cout<<"-----Menu-----"<<endl;
      cout<<"1. Pizza      Rs250"<<endl;
      cout<<"2. Burger     Rs150"<<endl;
      cout<<"3. pasta      Rs200"<<endl;
      cout<<"4. sandwich   Rs120"<<endl;
      cout<<"5. exit "<<endl;
      cout<<"enter the sno. of item you wanted to order:";
      cin>> i;
      if(i==1){
         cout<<"how many pizza you would like to order? ";
         cin>> item_qtty;
         cout<<"Order Placed. (anything else ?)"<<endl; 
         bill += (250*item_qtty);

      }
      else if(i==2){
         cout<<"how many burger you wanted to order? ";
         cin>> item_qtty;
         cout<<"Order Placed . (anything else? )"<<endl;
         bill+=(150*item_qtty);
      }
      else if(i==3){
         cout<<"how many plates of pasta you wanted to order? ";
         cin>> item_qtty;
         cout <<"order placed. (anything else? )"<<endl;
         bill+=(200*item_qtty);
      }
      else if(i==4){
         cout<<"how many sandwiches you wanted to order? ";
         cin>> item_qtty;
         cout<<"order placed. (anything else?)"<<endl;
         bill+= (120*item_qtty);
      }
      else if(i==5){
         cout<<"Thankyou for your order.";
         break ;
      }

   }
   cout<<"---billing---"<<endl;
   cout<< "total bill : "<< bill<<endl;
   if(bill>=1000 && bill<=2000){
      int discount = bill-(bill/10);
      cout<<"After discount"<<endl;
      cout<<"Edited bill :"<< discount <<endl;
      cout<<"with GST , final bill is: "<<discount/20<<endl;
      cout<<"thank you .";

   }
   else if(bill>=2000){
      int discount =bill-(bill/5);
      cout<<"After discount."<<endl;
      cout<<"final bill : "<< discount <<endl;
      cout<<"with GST, Final bill is : "<<discount/20<< endl;
      cout<<"Thank you. ";
   }

   return 0;
}