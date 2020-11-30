#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP
#include "escultor.hpp"

/**
 * @brief A classe FiguraGeometrica é uma classe que representar objetos primitivos genéricos
 * @details
 * - atributo r do tipo float referece a cor vermalha que vai de 0.00 a 1.00
 * - atributo g do tipo float referece a cor verde que vai de 0.00 a 1.00
 * - atributo b do tipo float referece a cor azul que vai de 0.00 a 1.00
 * - atributo a do tipo float referece a opacidade da cor que vai e 0.00 a 1.00
 */

class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
    /**
     * @brief FiguraGeometrica construtor da classe
     */

    FiguraGeometrica();
    /**
     * @brief ~FiguraGeometrica esse método é vitual destrutor ele ira chamar os destrutores das subclasse que devriar dessa classe
     */
    virtual ~FiguraGeometrica(){}
    /**
     * @brief draw método virtual puro que irá instruir o objeto a se desenhar em um objeto do tipo Sculptor.
     * @details
     *  Essa método deverá ser implementada nas subclasses da classe FiguraGeometrica, já que ele é virtual puro.
     * @param s é passado por referência  do tipo Sculptor que é uma classe com varios métodos
     */
    virtual void draw(Sculptor &s)=0; // metodo virtual puro
};

#endif // FIGURAGEOMETRICA_HPP
