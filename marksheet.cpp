#include <iostream>
using namespace std;

int main(){

  int marks, sum = 0, min, max, numStudent;
  float avg;

  cout<<"Enter number of students:";
  cin>> numStudent;
  cout<<numStudent<<endl;

  float count = 1.0;
  while(count <= numStudent){
    cout<<"Enter mark of student "<<count<<":"<<endl;
    cin>>marks;
    
    if(count == 1){
      max = marks;
      min = marks;
      sum =sum + marks;
    }
    else{
      sum = sum + marks;
      max = (marks>max)? marks:max;
      min = (marks<min)? marks:min;
    }
    count = count + 1;
  }

  avg = sum/(count-1);
  
  cout<<endl<<"Total marks of "<<numStudent<<" student is:"<<sum<<endl<<endl;
  cout<<"Maximum mark is: "<<max<<endl<<endl;
  cout<<"Minimum mark is: "<<min<<endl<<endl;
  cout<<"Average mark of students is: "<<avg<<endl<<endl;

  return 0;
}
