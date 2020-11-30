#ifndef ESCULTOR_HPP
#define ESCULTOR_HPP
#include "Voxel.hpp"
#include <string>
#include <vector>

/**
 * @brief A classe Sculptor serve para criar matriz 3D do tipo Voxel
 *
 * @details Dados 3 valores para o construtor a matriz 3D do tipo Voxel é alocada na memoria da maquina
 * e os valores da dimansão da matriz será armazenados e um estado interno nx , ny e nz,
 * a cor da matriz será branco por padrão
 */

class Sculptor{

protected:
    Voxel ***v; // matriz 3D

    int nx,ny,nz; // Dimensions
    float r,g,b,a; // colors

public:
    /**
     * @brief Sculptor é o construtor da classe e gera uma matriz com as dimensões desejadas
     * @param _nx é a dimensão no eixo x
     * @param _ny é a dimensão no eixo y
     * @param _nz é a dimensão no eixo z
     *
     */
    Sculptor(int _nx, int _ny, int _nz);
    /**
     * @brief ~Sculpor destrutor da classe
     */
    ~Sculptor();
    /**
     * @brief setColor selecionar a cor que será aplicadas nos próximos metodos e a opacidade deles
     * @param r é um float que vária de 0.00 a 1.00 que representa a intensidade da cor vermalha
     * @param g é um float que vária de 0.00 a 1.00 que representa a intensidade da cor verde
     * @param b é um float que vária de 0.00 a 1.00 que representa a intensidade da cor azul
     * @param alpha é um float que vária de 0.00 a 1.00 que representa a opacidade
     *
     */
     void setColor(float r, float g, float b, float alpha);
     /**
      * @brief putVoxel esse método cria um cubo unico nas coordenadas desejadas
      * @param x é um inteiro que representa a coordenada no eixo x
      * @param y é um inteiro que representa a coordenada no eixo y
      * @param z é um inteiro que representa a coordenada no eixo z
      */
     void putVoxel(int x, int y, int z);
     /**
      * @brief cutVoxel esse método remove um cubo unico nas coordenadas desejadas
      * @param x é um inteiro que representa a coordenada no eixo x
      * @param y é um inteiro que representa a coordenada no eixo y
      * @param z é um inteiro que representa a coordenada no eixo z
      */
     void cutVoxel(int x, int y, int z);
     /**
      * @brief writeOFF esse método criar um arquivo com a extessão .OFF que serve para vizualizar as esculturas que fazemos.
      * @param filename é um ponteiro pra char que é basicamento o nome do arquivo mais .of
      */
     void writeOFF(char* filename);
     /**
      * @brief errorInterval método para alerta algum erro de parametro
      */
     void errorInterval(void);
     /**
      * @brief getMatX método para recuperar a dimensão do eixo x
      * @return dimensão no eixo x
      */
     int getMatX();
     /**
      * @brief getMatY método para recuperar a dimensão do eixo y
      * @return dimensão no eixo y
      */
     int getMatY();
     /**
      * @brief getMatX método para recuperar a dimensão do eixo z
      * @return dimensão no eixo z
      */
     int getMatZ();
};

#endif // ESCULTOR_HPP
