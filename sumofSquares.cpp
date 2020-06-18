#include <iostream>
using namespace std;

int square(int sqdnumber);
int power(int base , int exponent );
int numberTodigit(int sqdnumber);

int square(int sqdnumber){
  return sqdnumber*sqdnumber;
}

int power(int base , int exponent){
  int baseToexponent = 1;
  for(int i = 1; i<= exponent ; i++){
    baseToexponent *= base ;
  }
  return baseToexponent;
}

int numberTodigit(int sqdnumber){
  int digit = 1;
  for( int i = 10; (sqdnumber/i) != 0; i *= 10){
    digit += 1;
  }
  return digit;
}





int main(){

  int sqdOFdigit,digit,numberOFdigit,sqdnumber,sqdNumber_result = 0;
  cout<<endl<<"Enter a interzer"<<endl;
  cin>>sqdnumber;

  numberOFdigit = numberTodigit(sqdnumber);

  for(int i = 1; i <= numberOFdigit; i++){
    digit = sqdnumber / (power(10,(numberOFdigit - i))); // get the first digit of sqdnumber
    cout<<endl<<"digit: "<<digit<<endl;
    sqdOFdigit = square(digit);
    cout<<endl<<"sqdOFdigit: "<<sqdOFdigit<<endl;
    sqdnumber = sqdnumber - (digit * power(10,numberOFdigit - i));
    cout<<endl<<"sqdnumber: "<<sqdnumber<<endl;
    sqdNumber_result += sqdOFdigit;
    cout<<"sqdNumber_result: "<<sqdNumber_result<<endl;
  }
			 



  cout <<endl<<sqdNumber_result<<endl;
}
