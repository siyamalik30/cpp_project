//finding minimum num:
// #include <iostream>
// using namespace std;

// int find_min(int a,int b){
//    if(a>b){
//       return b;
//    } else {
//       return a;
//    }
// }
// int main(){
//    cout<< find_min(6,10)<<endl;


//    return 0;
// }

//sum of nums 1 to N
// #include <iostream>
// using namespace std;

// int sum(int N){
//    int sum=0;
//    for(int i=1;i<=N;i++){
//       sum+= i;
//    }
//    return sum;
// }
// int main(){
//    cout<< "sum = "<< sum(9)<<endl;
//    return 0;
// }


// cal N factorial
#include <iostream>
using namespace std;
int calc_fact(int N){
   int fact=1;
   for(int i=1;i<=N;i++){
      fact *= i;
   }
   return fact;
}

// int main(){
//    cout<< calc_fact(8) << endl;
//    return 0;

// }

int binomial_coeff(int n,int r){
   int a= calc_fact(n);
   int b= calc_fact(r);
   int c= calc_fact(n-r);
   return a/(b*c);
}
int main(){
   cout<< binomial_coeff(8,2)<<endl;
   return 0;
}