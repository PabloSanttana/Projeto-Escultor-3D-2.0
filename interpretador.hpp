#ifndef INTERPRETADOR_HPP
#define INTERPRETADOR_HPP
#include <vector>
#include "figurageometrica.hpp"
#include <string>

/**
 * @brief A classe Interpretador é responsavel por implmentar os métodos de leitura dos arquivos
 * @details
 * - atributo r do tipo float referece a cor vermalha que vai de 0.00 a 1.00
 * - atributo g do tipo float referece a cor verde que vai de 0.00 a 1.00
 * - atributo b do tipo float referece a cor azul que vai de 0.00 a 1.00
 * - atributo a do tipo float referece a opacidade da cor que vai e 0.00 a 1.00
 * - atibuto dimx dimensão da matriz no eixo x
 * - atibuto dimy dimensão da matriz no eixo y
 * - atibuto dimz dimensão da matriz no eixo z
 */


class Interpretador{
    int dimx,dimy,dimz;
    float r,g,b,a;
public:
    /**
     * @brief Interpretador contrutor da classe
     */
    Interpretador();
    /**
     * @brief parse método gabarito
     * @param filename nome do arquivo
     * @return retorna um array de figuras geometricas de tipos diferente, já que é um método gabarito
     */
    std::vector<FiguraGeometrica*> parse(std::string filename);
    /**
     * @brief getDimx método para recuperar a dimensão da matriz no eixo x
     * @return dimensão no eixo x
     */
    int getDimx();
    /**
     * @brief getDimx método para recuperar a dimensão da matriz no eixo y
     * @return dimensão no eixo y
     */
    int getDimy();
    /**
     * @brief getDimx método para recuperar a dimensão da matriz no eixo z
     * @return dimensão no eixo z
     */
    int getDimz();
};

#endif // INTERPRETADOR_HPP
