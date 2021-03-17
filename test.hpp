#ifndef DIMENTIONS_TEST_HPP
#define DIMENTIONS_TEST_HPP

int ver_arr[5] = {1,2,4,8,16};
int cog_arr[5] = {0,1,4,12,32};

void test_ver(const int &in,const int &op);
void test_ver(const int &dimen,const int &verts,const int &op);


void test_ver(const int &dimen,const int &verts,const unsigned long long int &op){
  std::cout<<"Dimentions= "<<dimen<<"\t\t\t vertexes = "<<verts<<"\t\t\t conjugates= "<<op<<std::endl;
}

void test_ver(const int &in,const int &op){
  if(in==op){
      std::cout<<"conjugate: "<<in<<"\t---> function out = "<<op<<" ------PASS-----"<<std::endl;
    }else{
      std::cout<<"conjugate: "<<in<<"\t---> function out = "<<op<<" ------FAIL-----"<<std::endl;
    }
}


#endif // DIMENTIONS_TEST_HPP
