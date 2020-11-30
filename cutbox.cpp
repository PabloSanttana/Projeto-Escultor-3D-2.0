#include "cutbox.hpp"

CutBox::CutBox(int x0, int x1, int y0, int y1, int z0, int z1){

    this ->x0=x0;
    this ->x1=x1;
    this ->y0=y0;
    this ->y1=y1;
    this ->z0=z0;
    this ->z1=z1;
}

void CutBox::draw(Sculptor &s){
    if((x0>= 0 && x1<s.getMatX()) && (y0>= 0 && y1<s.getMatY()) && (z0>= 0 && z1<s.getMatZ())){

        for( int i=x0 ;i<=x1;i++){
            for( int j=y0 ;j<=y1;j++){
                for( int k=z0 ;k<=z1;k++){
                    s.cutVoxel(i,j,k);
                }
            }
        }
    }else {
        s.errorInterval();
    }

}
