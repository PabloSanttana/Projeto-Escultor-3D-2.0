#include "escultor.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;
    r=1.00;
    g=1.00;
    b=1.00;
    a=1.00;


    cout<< "Inicio da alocacao"<< endl;
    cout<< "nx: "<<nx<< endl;
     cout<< "ny: "<<ny<< endl;
      cout<< "nz: "<<nz<< endl;


    v = new Voxel**[nx];
    for(int i=0; i<nx;i++){
        v[i] = new Voxel*[ny];
        for(int j=0;j<ny;j++){
            v[i][j] = new Voxel[nz];
            for(int k =0; k<nz;k++){
                v[i][j][k].isOn = false;
            }
        }
    }




    cout<< "fim da alocacao"<< endl;


}

Sculptor::~Sculptor()
{

    for(int i=0; i<nx;i++){
        for(int j=0;j<ny;j++){
           delete[] v[i][j];
        }
        delete[] v[i];
    }

    delete[] v;

    cout<<"delete V"<< endl;
}
void Sculptor::setColor(float red, float green, float blue, float alpha)
{
    r = red;
    g = green;
    b = blue;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
        if(!((x>= 0 && x<nx) && (y>= 0 && y<ny) && (z>= 0 && z<nz)) ){

            errorInterval();

        }else{
            v[x][y][z].isOn = true;
            v[x][y][z].r = r;
            v[x][y][z].g = g;
            v[x][y][z].b = b;
            v[x][y][z].a = a;
        }

}

void Sculptor::cutVoxel(int x, int y, int z)
{
    if(!((x>= 0 && x<nx) && (y>= 0 && y<ny) && (z>= 0 && z<nz)) ){

        errorInterval();

    }else {
    v[x][y][z].isOn = false;
}

}
void Sculptor::writeOFF(char *filename)
{
     cout<<"Arquivo"<< endl;
    ofstream arquivo;
     arquivo.open(filename);

     if(arquivo.is_open() == true){
         cout << "Iniciando" << endl;
     }

     arquivo << "OFF" << endl;

     int numeros_Vox = 0;
     int numeros_Face = 0;

     for(int i = 0; i < nx; i++){
         for(int j = 0; j < ny; j++){
             for(int k = 0; k < nz; k++){
                 if (v[i][j][k].isOn == true){
                     numeros_Vox++;
                 }
             }
         }
     }

     arquivo << 8*numeros_Vox << " " << 6*numeros_Vox << " " << 0 << endl;

     for(int i = 0; i < nx; i++){
         for(int j = 0; j < ny; j++){
             for (int k = 0; k < nz; k++) {
                 if(v[i][j][k].isOn == true){
                     arquivo<<-0.5+i<<" "<<0.5+j<<" "<<-0.5+k<<endl;
                     arquivo<<-0.5+i<<" "<<-0.5+j<<" "<<-0.5+k<<endl;
                     arquivo<<0.5+i<<" "<<-0.5+j<<" "<<-0.5+k<<endl;
                     arquivo<<0.5+i<<" "<<0.5+j<<" "<<-0.5+k<<endl;
                     arquivo<<-0.5+i<<" "<<0.5+j<<" "<<0.5+k<<endl;
                     arquivo<<-0.5+i<<" "<<-0.5+j<<" "<<0.5+k<<endl;
                     arquivo<<0.5+i<<" "<<-0.5+j<<" "<<0.5+k<<endl;
                     arquivo<<0.5+i<<" "<<0.5+j<<" "<<0.5+k<<endl;
                 }
             }
         }
     }

       arquivo << fixed << setprecision(2); // numeros floats vão sair com 2 casa
     for(int i = 0; i < nx; i++){
         for(int j = 0; j < ny; j++){
             for (int k = 0; k< nz; k++) {
                 if(v[i][j][k].isOn == true){
                      arquivo<<"4 "<<0+numeros_Face*8<<" "<<3+numeros_Face*8<<" "<<2+numeros_Face*8<<" "<<1+numeros_Face*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                             <<"4 "<<4+numeros_Face*8<<" "<<5+numeros_Face*8<<" "<<6+numeros_Face*8<<" "<<7+numeros_Face*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                             <<"4 "<<0+numeros_Face*8<<" "<<1+numeros_Face*8<<" "<<5+numeros_Face*8<<" "<<4+numeros_Face*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                             <<"4 "<<0+numeros_Face*8<<" "<<4+numeros_Face*8<<" "<<7+numeros_Face*8<<" "<<3+numeros_Face*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                             <<"4 "<<3+numeros_Face*8<<" "<<7+numeros_Face*8<<" "<<6+numeros_Face*8<<" "<<2+numeros_Face*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl
                             <<"4 "<<1+numeros_Face*8<<" "<<2+numeros_Face*8<<" "<<6+numeros_Face*8<<" "<<5+numeros_Face*8<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                     numeros_Face++;
                 }
             }
         }
     }



     arquivo.close();
}
void Sculptor::errorInterval()
{
    cout<<"Erro, algum valor esta fora do intervalo da matriz, nao e possivel realizar a operacao"<<endl;
    cout<<"intervalo aceitavel"<<endl;
    cout<<"X: "<<0 <<" a " << nx-1<<" Y: "<<0<<" a " << ny-1<<" Z: "<<0<<" a " << nz-1<<endl;
    exit(0);
}

int Sculptor::getMatX()
{
    return nx;
}
int Sculptor::getMatY()
{
    return ny;
}
int Sculptor::getMatZ()
{
    return nz;
}
