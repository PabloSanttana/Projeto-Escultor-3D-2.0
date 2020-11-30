#ifndef PUTVOXEL_HPP
#define PUTVOXEL_HPP

#include "figurageometrica.hpp"
#include "escultor.hpp"

/**
 * @brief A subclasse PutVoxel herdar propriedades da classe FiguraGeometrica, PutVoxel é responsavel por criar um voxel desejado nas coordenadas indicadas desde que esteja
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
 *  <h4>putvoxel x y z r g b a</h4>
 *
 *  ![codPutvoxel](codPutvoxel.png)
 *
 *  <h3>Resultado</h3>
 *
 *  ![putvoxel](putvoxel.png)
 *
 */

class PutVoxel : public FiguraGeometrica {
    int x,y,z;
public:
    /**
     * @brief CutVoxel esse método é o construtor da classe
     * @param x é um inteiro que representa a coordenada no eixo x
     * @param y é um inteiro que representa a coordenada no eixo y
     * @param z é um inteiro que representa a coordenada no eixo z
     * @param r é um float que vária de 0.00 a 1.00 que representa a intensidade da cor vermalha
     * @param g é um float que vária de 0.00 a 1.00 que representa a intensidade da cor verde
     * @param b é um float que vária de 0.00 a 1.00 que representa a intensidade da cor azul
     * @param a é um float que vária de 0.00 a 1.00 que representa a opacidade
     */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    /**
     * @brief ~PutVoxel esse método é o destrutor da classe
     */
    ~PutVoxel(){}
    /**
     * @brief draw esse método criar um cubo unico nas coordenadas desejadas
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_HPP
