#ifndef PUTELLIPSOID_HPP
#define PUTELLIPSOID_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"

/**
 * @brief A subclasse PutEllipsoid herdar propriedades da classe FiguraGeometrica, PutEllipsoid é responsavel por criar uma elipse de raios desejados nas coordenadas indicadas desde que esteja
 * dentro dos limites da matriz 3D.
 * @details
 *
 * exemplo da classe
 *
 *  <h3>arquivo no formato .txt</h3>
 *
 *  dim largura altura profundidade referente a dimensão da matriz :<strong> dim 60 40 55 </strong>
 *
 *
 *  <h4>putellipsoid x0 y0 z0 raiox raioy raioz r g b a</h4>
 *
 *  <h3>Resultado</h3>
 *
 *  ![putellipsoid](putellipsoid.png)
 *
 */

class PutEllipsoid : public FiguraGeometrica{
        int xcenter, ycenter, zcenter,  rx,  ry, rz;
public:
        /**
         * @brief PutEllipsoid esse método é o construtor da classe
         * @param xcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
         * @param ycenter  é um inteiro que é a coordenada do centro da elipse no eixo x
         * @param zcenter  é um inteiro que é a coordenada do centro da elipse no eixo x
         * @param rx é um inteiro que é o raio da elipse no eixo x
         * @param ry é um inteiro que é o raio da elipse no eixo y
         * @param rz é um inteiro que é o raio da elipse no eixo z
         * @param r é um float que vária de 0.00 a 1.00 que representa a intensidade da cor vermalha
         * @param g é um float que vária de 0.00 a 1.00 que representa a intensidade da cor verde
         * @param b é um float que vária de 0.00 a 1.00 que representa a intensidade da cor azul
         * @param a é um float que vária de 0.00 a 1.00 que representa a opacidade
         */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    /**
     * @brief ~PutEllipsoid destrutor da classe
     */
    ~PutEllipsoid(){}
    /**
     * @brief draw esse método aplica alogica para criar uma elipse de raios desejados
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_HPP
