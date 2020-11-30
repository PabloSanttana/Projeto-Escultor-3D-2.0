#ifndef CUTBOX_HPP
#define CUTBOX_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"

/**
 * @brief A subclasse CutBox herdar propriedades da classe FiguraGeometrica, CutBox e responsavel por remove uma área de dimensões desejadas nas coordenadas indicadas desde que esteja
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
 *  <h4>cutbox x0 x1 y0 y1 z0 z1</h4>
 *
 *  <h3>Resultado</h3>
 *
 *  ![cutbox](cutbox.png)
 *
 *
 *
 */

class CutBox : public FiguraGeometrica{
      int x0,y0,z0,x1,y1,z1;
public:
      /**
     * @brief CutBox construtor da classe
     * @param x0 é um inteiro que representa o início no eixo x
     * @param x1 é um inteiro que representa o final  no eixo x
     * @param y0 é um inteiro que representa o início no eixo y
     * @param y1 é um inteiro que representa o final  no eixo y
     * @param z0 é um inteiro que representa o início no eixo z
     * @param z1 é um inteiro que representa o final  no eixo z
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     *@brief ~CutBox método destrutor da classe
     */
    ~CutBox(){}
    /**
     * @brief draw esse método aplica alogica para remove uma área de dimensões desejadas
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // CUTBOX_HPP
