#include <stdio.h>


int main(void){

  int a =0 ;
  double b =0;
  float c =0;
  char d = 'q';
  short e =0;
  long f =0l;
  unsigned g = 0u;
  
  printf("my machine have following bit sizes for ");
  printf("int - %lu, float -%lu, double -%lu, char -%lu, short -%lu, long -%lu, unsigned -%lu \n",            sizeof(a ), sizeof(c), sizeof(b), sizeof(d), sizeof(e), sizeof(f), sizeof(g));
	 return 0;

}
