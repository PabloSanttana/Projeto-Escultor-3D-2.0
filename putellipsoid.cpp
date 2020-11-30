#include "putellipsoid.hpp"
#include <math.h>


PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a){

    this->r=r; this->g=g; this->b=b; this->a=a;

    this ->xcenter=xcenter;
    this ->ycenter=ycenter;
    this ->zcenter=zcenter;

    this ->rx=rx;
    this ->ry=ry;
    this ->rz=rz;

}
void PutEllipsoid::draw(Sculptor &s){
    float positionX,positionY,positionZ;
    float result;
    s.setColor(r,g,b,a);

    if((xcenter <s.getMatX()) &&(ycenter<s.getMatY()) && (zcenter <s.getMatZ())){

        for( int i=0 ;i<s.getMatX();i++){
            for( int j=0 ;j<s.getMatY();j++){
                for( int k=0 ;k<s.getMatZ();k++){

                    positionX = (i - xcenter);
                    positionY = (j - ycenter);
                    positionZ = (k - zcenter);

                   result = (pow(positionX,2))/pow(rx,2) + (pow(positionY,2))/pow(ry,2) + (pow(positionZ,2))/pow(rz,2);

                    result = sqrt(result);
                    if(result <=1){
                        s.putVoxel(i,j,k);
                    }


                }
            }
        }

    }else {
        s.errorInterval();
}



}
