#include "interpretador.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include "putvoxel.hpp"
#include "cutvoxel.hpp"
#include "putbox.hpp"
#include "cutbox.hpp"
#include "putsphere.hpp"
#include "cutsphere.hpp"
#include "putellipsoid.hpp"
#include "cutellipsoid.hpp"



Interpretador::Interpretador()
{

}

std::vector<FiguraGeometrica *> Interpretador::parse(std::string filename)
{
    std::vector<FiguraGeometrica *> figs;
    std::ifstream fin;
    std::stringstream ss;
    std:: string s, token;

    fin.open(filename.c_str());
    // verificar se o fluxo foi aberto com sucesso

    if(!fin.is_open()){
        std:: cout<<"error falha no arquivo"<< filename << std::endl;
        exit(0);
    }

    while(fin.good()){

        std::getline(fin, s); // ler a linha toda e grava em uma string
        if(fin.good()){
            ss.clear();
            ss.str(s);
            ss >> token; // pegando token

            if(ss.good()){
                // pegando a dimansão da tela
                if(token.compare("dim")==0){
                    std::cout<<"achou um dim \n";

                    ss >>  dimx >> dimy >> dimz;
                }
                else if (token.compare("putvoxel")==0) {

                    std::cout<<"achou um putvoxel \n";
                    int x0,y0,z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                    figs.push_back(new PutVoxel(x0,y0,z0,r,g,b,a));
                }
                else if (token.compare("cutvoxel")==0) {

                    std::cout<<"achou um cutvoxel \n";
                    int x0,y0,z0;
                    ss >> x0 >> y0 >> z0;
                    figs.push_back(new CutVoxel(x0,y0,z0));
                }
                else if (token.compare("putbox")==0) {

                    std::cout<<"achou um putbox \n";
                    int x0,y0,z0,x1,y1,z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a));
                }
                else if (token.compare("cutbox")==0) {

                    std::cout<<"achou um cutbox \n";
                    int x0,y0,z0,x1,y1,z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new CutBox(x0,x1,y0,y1,z0,z1));
                }
                else if (token.compare("putsphere")==0) {

                    std::cout<<"achou um putsphere \n";
                    int xcenter,ycenter,zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                    figs.push_back(new PutSphere(xcenter,ycenter,zcenter,radius,r,g,b,a));
                }
                else if (token.compare("cutsphere")==0) {

                    std::cout<<"achou um cutsphere \n";
                    int xcenter,ycenter,zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figs.push_back(new CutSphere(xcenter,ycenter,zcenter,radius));
                }
                else if (token.compare("putellipsoid")==0) {

                    std::cout<<"achou um putellipsoid \n";
                    int xcenter,ycenter,zcenter, rx,ry,rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
                    figs.push_back(new PutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz,r,g,b,a));
                }
                else if (token.compare("cutellipsoid")==0) {

                    std::cout<<"achou um cutellipsoid \n";
                    int xcenter,ycenter,zcenter, rx,ry,rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                    figs.push_back(new CutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz));
                }
            }

        }
    }

    return figs;
}

int Interpretador::getDimx()
{
    return dimx;
}
int Interpretador::getDimy()
{
    return dimy;
}
int Interpretador::getDimz()
{
    return dimz;
}
