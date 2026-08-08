#include <iostream>
using namespace std;
int main() {
   int age;
   cout << "Enter your age:";
   cin >> age ;
   if (age>=18){
      cout<<"Since age >=18 , you can get LICENSE"<<endl;
   } else {
      cout << "Sorry , you're under aged and can't get LICENSE" << endl;
   }
   return 0;
}  