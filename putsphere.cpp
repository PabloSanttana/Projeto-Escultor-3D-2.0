#include "putsphere.hpp"
#include <math.h>

PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a){

    this->r=r; this->g=g; this->b=b; this->a=a;

    this ->xcenter=xcenter;
    this ->ycenter=ycenter;
    this ->zcenter=zcenter;
    this ->radius=radius;
}

void PutSphere::draw(Sculptor &s){
    int positionX,positionY,positionZ;
    float result;
    s.setColor(r,g,b,a);

    if((xcenter <s.getMatX()) &&(ycenter<s.getMatY()) && (zcenter <s.getMatZ())){

        for( int i=0 ;i<s.getMatX();i++){
            for( int j=0 ;j<s.getMatY();j++){
                for( int k=0 ;k<s.getMatZ();k++){

                    positionX = xcenter - i;
                    positionY = ycenter - j;
                    positionZ = zcenter - k;

                    result = pow(positionX,2) + pow(positionY,2) + pow(positionZ,2);

                    result = sqrt(result);
                    if(result <=radius){
                        s.putVoxel(i,j,k);
                    }


                }
            }
        }

    }else {
        s.errorInterval();
}


}
