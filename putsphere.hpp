#ifndef PUTSPHERE_HPP
#define PUTSPHERE_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"

/**
 * @brief A subclasse PutSphere herdar propriedades da classe FiguraGeometrica, PutSphere é responsavel por criar uma esfera de raio desejado nas coordenadas indicadas desde que esteja
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
 *  <h4>putsphere x0 y0 z0 raio r g b a</h4>
 *
 *  <h3>Resultado</h3>
 *
 *  ![putsphere](putsphere.png)
 *
 */
class PutSphere : public FiguraGeometrica{
   int xcenter, ycenter, zcenter, radius;
public:
   /**
    * @brief PutSphere esse método é o construtor da classe
    * @param xcenter é um inteiro que é a coordenada do centro da esfera no eixo x
    * @param ycenter é um inteiro que é a coordenada do centro da esfera no eixo y
    * @param zcenter é um inteiro que é a coordenada do centro da esfera no eixo z
    * @param radius é um inteiro que é o raio da esfera
    * @param r é um float que vária de 0.00 a 1.00 que representa a intensidade da cor vermalha
    * @param g é um float que vária de 0.00 a 1.00 que representa a intensidade da cor verde
    * @param b é um float que vária de 0.00 a 1.00 que representa a intensidade da cor azul
    * @param a é um float que vária de 0.00 a 1.00 que representa a opacidade
    */
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    /**
     * @brief ~PutSphere esse método é o destrutor da classe
     */
    ~PutSphere(){}
    /**
     * @brief draw esse método aplica alogica para criar uma esfera de raio desejado
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_HPP
