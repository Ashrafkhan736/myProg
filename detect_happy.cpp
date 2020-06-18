#include <iostream>
using namespace std;


int square(int number);
int power(int base , int exponent );
int numberTodigit(int number);

int square(int number){
  return number*number;
}

int power(int base , int exponent){
  int baseToexponent = 1;
  for(int i = 1; i<= exponent ; i++){
    baseToexponent *= base ;
  }
  return baseToexponent;
}

int numberTodigit(int number){
  int digit = 1;
  for( int i = 10; (number/i) != 0; i *= 10){
    digit += 1;
  }
  return digit;
}



int main(){
  int number,digit, sqdNumber_result1 = 0, sqdOFdigit,numberOFdigit;
  //numberOFdigit = numberTodigit(number);
  
  cout<<endl<<"Enter a intezer: "<<endl;
  cin>>number;

  int k = 0 ;
  //cout<<endl<<"k"<<k<<endl;
  for(k ; /*((number != 1)*/ (k<10) ; k++){ 

    if(number == 1) break ;
    numberOFdigit = numberTodigit(number);
    //cout<<"numberOFdigit: "<<numberOFdigit<<endl;

    for(int i = 1; i <= numberOFdigit; i++){

      digit = number / (power(10,(numberOFdigit - i))); // get the first digit of sqdnumber
      //cout<<endl<<"digit"<<digit<<endl;
      sqdOFdigit = square(digit);
      number = number - (digit * power(10,numberOFdigit - i));
      sqdNumber_result1 += sqdOFdigit;
      //cout<<endl<<"sqdNumber_result1: "<<sqdNumber_result1<<endl;
    }
    
    number= sqdNumber_result1;
    //cout<<endl<<"number"<<number<<endl;
    //if(number == 1) {break;}
    sqdNumber_result1 = 0;
  }

  cout<<endl<<"k: "<< k  <<endl;
  cout<<endl<<"number : "<<number<<endl;
  
  return 0;
}
