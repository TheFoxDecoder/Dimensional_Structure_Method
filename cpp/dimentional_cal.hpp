#ifndef DIMENTIONS_DIMENTIONAL_CAL_HPP
#define DIMENTIONS_DIMENTIONAL_CAL_HPP
#define MAX 1000
#include <iostream>
#include <math.h>

class DCal{
public:
	void run(){
		std::cout<<"Get Length:";
		std::cin>>l;
		std::cout<<"Total Dimensions:";
		std::cin>>*dimension_num;
		dimension_call();
		display();
	}
private:
	int *dimension_num = new int,l=16;
	long long int *faces=new long long int[*dimension_num],*vol=new long long int[*dimension_num],*perdime=new long long int[*dimension_num];
	void dimension_call(){
		for (int i=0;i<*dimension_num;++i){
			vol[i]= pow(l,i+1);
			faces[i]=i*2;
			perdime[i]= faces[i]*pow(l,i);
		}
	}
	void display(){
		std::string line = "--------------------------------------------------------------------------------------------------------";
		std::cout<<"Dimension\t\tFaces\tVolume\tsurface_perimeter"<<std::endl;
		std::cout<<line<<std::endl;
		for(int i=0;i<*dimension_num;++i){
			//printf("%d\t\t%d\t%d\t%d",i,faces[i],vol[i],perdime[i]);
			std::cout<<i<<"\t\t"<<faces[i]<<"\t"<<vol[i]<<"\t"<<perdime[i]<<std::endl;
		}
		std::cout<<line<<std::endl;
	}
};
#endif // DIMENTIONS_DIMENTIONAL_CAL_HPP
