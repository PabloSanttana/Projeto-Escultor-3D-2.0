#ifndef CUTVOXEL_HPP
#define CUTVOXEL_HPP

#include <figurageometrica.hpp>
#include "escultor.hpp"
/**
 * @brief A subclasse CutVoxel herdar propriedades da classe FiguraGeometrica, CutVoxel é responsavel por remove um voxel desejado nas coordenadas indicadas desde que esteja
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
 *  <h4>cutvoxel x0 y0 z0</h4>
 *
 *  ![codigoCutVoxel](codigoCutVoxel.png)
 *
 *  <h3>Resultado</h3>
 *
 *  ![cutvoxel](cutvoxel.png)
 *
 */
class CutVoxel : public FiguraGeometrica{
    int x,y,z;
public:
    /**
     * @brief CutVoxel esse método é o construtor da classe
     * @param x é um inteiro que representa a coordenada no eixo x
     * @param y é um inteiro que representa a coordenada no eixo y
     * @param z é um inteiro que representa a coordenada no eixo z
     */
    CutVoxel(int x, int y, int z);
    /**
     * @brief ~CutVoxel esse método é o destrutor da classe
     */
    ~CutVoxel(){}
    /**
     * @brief draw esse método remove um cubo unico nas coordenadas desejadas
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_HPP
