
#include <iostream>
#include "dimentional_cal.hpp"
#include "test.hpp"


unsigned long long int op,vert=1;

int main(){
  for(int i=0;i<65536;++i){
    op = out_cog(i,i);
      // testing case the valuse
    test_ver(i,i,op);
    //vert = vert*2;
  }
  return 0;
}
