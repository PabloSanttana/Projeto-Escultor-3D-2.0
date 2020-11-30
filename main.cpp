#include <iostream>
#include "figurageometrica.hpp"
#include "interpretador.hpp"
#include "putvoxel.hpp"
#include "cutvoxel.hpp"
#include "putbox.hpp"
#include "cutbox.hpp"
#include "putsphere.hpp"
#include "cutsphere.hpp"
#include "putellipsoid.hpp"
#include "cutellipsoid.hpp"

using namespace std;

int main()
{
    Sculptor *s1;

    vector<FiguraGeometrica*> figs;

    Interpretador parser;

    figs = parser.parse("../escultor.txt");

    s1 = new Sculptor(parser.getDimx(),parser.getDimy(),parser.getDimz());

    for(size_t i=0; i<figs.size();i++){
        cout<<"draw \n";
        figs[i] ->draw(*s1);
    }

    s1 ->writeOFF((char*)"ClasseAbstrada.off");

    for(size_t i=0; i<figs.size();i++){

        delete figs[i];
    }

    delete s1;

    cout << "Hello World!" << endl;
    return 0;
}
