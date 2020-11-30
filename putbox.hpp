#ifndef PUTBOX_HPP
#define PUTBOX_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"

/**
 * @brief A subclasse PutBox herdar propriedades da classe FiguraGeometrica, PutBox é responsavel por criar uma área de dimensões desejadas nas coordenadas indicadas desde que esteja
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
 *  <h4>putbox x0 x1 y0 y1 z0 z1 r g b a</h4>
 *
 *  <h3>Resultado</h3>
 *
 *  ![putbox](putbox.png)
 *
 */

class PutBox : public FiguraGeometrica {
    int x0,y0,z0,x1,y1,z1;
public:
    /**
     * @brief PutBox construtor da classe
     * @param x0 é um inteiro que representa o início no eixo x
     * @param x1 é um inteiro que representa o final  no eixo x
     * @param y0 é um inteiro que representa o início no eixo y
     * @param y1 é um inteiro que representa o final  no eixo y
     * @param z0 é um inteiro que representa o início no eixo z
     * @param z1 é um inteiro que representa o final  no eixo z
     * @param r é um float que vária de 0.00 a 1.00 que representa a intensidade da cor vermalha
     * @param g é um float que vária de 0.00 a 1.00 que representa a intensidade da cor verde
     * @param b é um float que vária de 0.00 a 1.00 que representa a intensidade da cor azul
     * @param a é um float que vária de 0.00 a 1.00 que representa a opacidade
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    /**
     * ~PutBox esse método é o destrutor da classe
     */
    ~PutBox(){}
    /**
     * @brief draw esse método faz uma área de dimensões desejadas nas coordenadas indicadas
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // PUTBOX_HPP
