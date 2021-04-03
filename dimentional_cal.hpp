#ifndef DIMENTIONS_DIMENTIONAL_CAL_HPP
#define DIMENTIONS_DIMENTIONAL_CAL_HPP
#define MAX 1000
#include <iostream>

class Dcal{
public:
    Dcal(){
      start();
    }
private:
	// initializing the variables
	int *dime_arr = new int[MAX],*dimen_nums = new int,row_nodes,n,N;
	bool yes_or = true;
	// as the starter point
	void start(){
    
		get_dimension_info(2);
		//dimen_axis_arr();
    calcualtion();
	}
	//get dimensions 
	void get_dimension_info(int type){
    if(type ==1){
      std::cout<<"one row nodes";
      std::cin>>row_nodes;
      std::cout<<"Dimention number";
      std::cin>>*dimen_nums;
    }else if (type ==2){
      std::cout<<"Enter N";
      std::cin>>n;
      std::cout<<"Enter n";
      std::cin>>n;
    }
	}
	void dimen_axis_arr(){
		for(int i =0;i<*dimen_nums; ++i){
			std::cout<<"Axal "<<i<<"\t";
			std::cin>>dime_arr[i];
			std::cout<<"\n";
		}
	}
	int calcualtion(){
    dime_arr[0]=N-1;
    dime_arr[1]=n;
    // second cal
    dime_arr[2]=dime_arr[0];
    dime_arr[3]=n-1;
    return 0;
  }
};
#endif // DIMENTIONS_DIMENTIONAL_CAL_HPP
