#ifndef DIMENTIONS_DIMENTIONAL_CAL_HPP
#define DIMENTIONS_DIMENTIONAL_CAL_HPP
// intilizing the varibles

//int *cog = new(std::nothrow)int ,*vert = new(std::nothrow)int, *di = new(std::nothrow)int;

int out_cog(const int &d,const int &vert){
  return d * (vert/2);
}
int out_d(const int &cog,const unsigned long long int &vert){
  return (cog*2)/vert;
}

#endif // DIMENTIONS_DIMENTIONAL_CAL_HPP
