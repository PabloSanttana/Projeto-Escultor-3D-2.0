#include "putvoxel.hpp"
#include <iostream>

PutVoxel::PutVoxel(int x, int y, int z, float r, float g, float b, float a){

    std::cout<<"PutVoxel "<< x <<" "<< y <<" "<< z <<" "<< r <<" "<< g <<" "<< b <<" "<< a << std::endl;

    this->x=x;
    this->y=y;
    this->z=z;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;

}

void PutVoxel::draw(Sculptor &s){
    s.setColor(r,g,b,a);

    if(((x>= 0 && x<s.getMatX()) && (y>= 0 && y<s.getMatY()) && (z>= 0 && z<s.getMatZ())) ){

        s.putVoxel(x,y,z);

    }else{
      s.errorInterval();
    }

}
