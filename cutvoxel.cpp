#include "cutvoxel.hpp"
#include <iostream>



CutVoxel::CutVoxel(int x, int y, int z)
{
    std::cout<<"CutVoxel "<< x <<" "<< y <<" "<< z << std::endl;
    this -> x=x;
    this -> y=y;
    this -> z=z;
}

void CutVoxel::draw(Sculptor &s)
{
    if(((x>= 0 && x<s.getMatX()) && (y>= 0 && y<s.getMatY()) && (z>= 0 && z<s.getMatZ())) ){

          s.cutVoxel(x,y,z);

    }else{
      s.errorInterval();
    }
}
