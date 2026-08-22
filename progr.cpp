#include <iostream>
using namespace std;
int main(){
   int employee,basic_salary,working_hr,overtime_hr,tax;
   cout<<"enter no. of employee's registering their salary: ";
   cin>>employee;
   for(int i=1;i<=employee;i++){
      cout<<"for employee no."<<i<<endl;
      cout<<"Enter your basic salary= ";
      cin>> basic_salary;
      cout<<"Enter your Working hour = ";
      cin>> working_hr;
      cout<<"how many hour you overtime: ";
      cin>> overtime_hr;   
         
         // overtime 
      if (overtime_hr>0){
         cout<<"for overtime,extra salary you'll get: "<< (overtime_hr*200)<<endl;
      }else{
         cout<<"No increment in salary.."<<endl;
      }
      // bonus
      int bonus_salary;
      if (basic_salary<30000){
         bonus_salary = basic_salary/20 ;
         cout<< "5%  bonus you'll get this month i.e : "<<bonus_salary<< endl;
      }
      else if(basic_salary>30000){
         bonus_salary = basic_salary/10;
         cout<<"10% bonus you'll get this month "<<endl;
      
      }
       //....final output.....
      cout<< "Basic salary :" << basic_salary<<endl;
      cout<< "overtime income earned : "<< overtime_hr*200<<endl;
      cout<< "bonus money : "<< bonus_salary<<endl;

      double final_salary = basic_salary + bonus_salary +( overtime_hr*200) ;
      if(basic_salary<=30000){
         cout<<"no tax apllied."<<endl;
      }
      else if(basic_salary>30000 && basic_salary<=60000){
         cout<<"10 percent tax applied..."<<endl;
         tax =(0.1*final_salary);
         final_salary-=tax;
      }
      else if(basic_salary > 60000){
         cout<<"20 percent tax applied..." <<endl;
         tax = (0.2*final_salary) ;
         final_salary-=tax;
         
      }
      

   
      cout<<" Final in-hand salary = "<< final_salary<<endl;
    
   } 
   return 0; 
}
