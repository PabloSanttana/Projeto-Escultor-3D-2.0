#ifndef CUTELLIPSOID_HPP
#define CUTELLIPSOID_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"

/**
 * @brief A subclasse CutEllipsoid herdar propriedades da classe FiguraGeometrica, CutEllipsoid é responsavel por remove uma elipse de raios desejados nas coordenadas indicadas desde que esteja
 * dentro dos limites da matriz 3D.
 * @details
 *
 * exemplo da classe
 *
 *  <h3>arquivo no formato .txt</h3>
 *
 *  dim largura altura profundidade referente a dimensão da matriz :<strong> dim 60 40 55 </strong>
 *
 *  <h4>cutellipsoid x0 y0 z0 raiox raioy raioz</h4>
 *
 *  <h3>Resultado</h3>
 *
 *  ![cutellipsoid](cutellipsoid.png)
 *
 */

class CutEllipsoid : public FiguraGeometrica{
    int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
public:
    /**
     * @brief cutEllipsoid esse método é o construtor da classe
     * @param xcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param ycenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param zcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
     * @param rx é um inteiro que é o raio da elipse no eixo x
     * @param ry é um inteiro que é o raio da elipse no eixo y
     * @param rz é um inteiro que é o raio da elipse no eixo z
     */
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief ~CutEllipsoid destrutor da classe
     */
    ~CutEllipsoid(){}
    /**
     * @brief draw esse método aplica alogica para remove uma elipse de raios desejados
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_HPP
