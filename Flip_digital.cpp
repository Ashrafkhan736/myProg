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

int sumOFsqdOFdigit(int number){
  int digit, sqdNumber_result = 0, sqdOFdigit,numberOFdigit;

  numberOFdigit = numberTodigit(number);
  
  for(int i = 1; i <= numberOFdigit; i++){

      digit = number / (power(10,(numberOFdigit - i))); // get the first digit of sqdnumber
      //cout<<endl<<"digit"<<digit<<endl;
      sqdOFdigit = square(digit);
      number = number - (digit * power(10,numberOFdigit - i));
      sqdNumber_result += sqdOFdigit;
      //cout<<endl<<"sqdNumber_result1: "<<sqdNumber_result1<<endl;
    }

  return sqdNumber_result;
}


int cyclicRightShift(int rpm){

  int digits,/*first_digit,rem_digit,*/B;
  int rem_digit,last_digit;
  digits = numberTodigit(rpm);

  last_digit = rpm % 10;
  rem_digit = rpm / 10;
  B = last_digit*power(10,digits-1) + rem_digit;
  /*  first_digit = rpm / power(10,(digits-1));*/
  cout<<last_digit<<endl;
  //rem_digit = (rpm - (first_digit * power(10,(digits-1)))) *1.0;
  cout<<"rem_digit: "<<rem_digit<<endl;
  //B = (rem_digit ) + first_digit;
  return B;
}
		     
		     
int main(){
  long long int rpm,SSD,A,B,result = 0;
  int year =0;
  cout<<endl<<"enter a rpm"<<endl;
  cin>>rpm;

  long long int limit = rpm *8; 

  for (year; year <10;year++){ 

    if (rpm > limit) break;
    SSD = sumOFsqdOFdigit(rpm);
    cout<<endl<<"SSD: "<<SSD<<endl;

    A = SSD * 323;

    B = cyclicRightShift(rpm);
    cout<<endl<<"B: "<<B<<endl;
  
    result = A + B%100;
    cout<<endl<<"result: "<<result<<endl;
    rpm = result;
  }

  cout<<"Final result: "<<rpm<<endl;
  cout<<"Year: "<<year<<endl;

  return 0;
}

  
    
    
