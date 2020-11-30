#ifndef CUTSPHERE_HPP
#define CUTSPHERE_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"
/**
 * @brief A subclasse CutSphere herdar propriedades da classe FiguraGeometrica, CutSphere é responsavel por remove uma esfera de raio desejado nas coordenadas indicadas desde que esteja
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
 *  <h4>cutsphere x0 y0 z0 raio</h4>
 *
 *  <h3>Resultado</h3>
 *
 *  ![cutsphere](cutsphere.png)
 *
 */
class CutSphere : public FiguraGeometrica{
     int xcenter, ycenter, zcenter, radius;
public:
     /**
      * @brief CutSphere esse método é o construtor da classe
      * @param xcenter é um inteiro que é a coordenada do centro da esfera no eixo x
      * @param ycenter é um inteiro que é a coordenada do centro da esfera no eixo y
      * @param zcenter é um inteiro que é a coordenada do centro da esfera no eixo z
      * @param radius é um inteiro que é o raio da esfera
      */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief ~CutSphere esse método é o destrutor da classe
     */
    ~CutSphere(){}
    /**
     * @brief draw esse método aplica alogica para remove uma esfera de raio desejado
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_HPP
