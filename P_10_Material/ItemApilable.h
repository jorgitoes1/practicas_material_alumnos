/** 
 * @file    ItemApilable.h
 * @author  jrbalsas
 * 
 * @date    15 de abril de 2016
 */

#ifndef ITEMAPILABLE_H
#define ITEMAPILABLE_H

#include "Item.h"

/**@brief Clase abstracta para objetos apilables
*/
class ItemApilable: public Item {
public:
    ItemApilable(unsigned int cuantos=1);
    ItemApilable(const ItemApilable& orig);
    virtual ~ItemApilable();
    void incrementaNumElementos(unsigned int cantidad);
    void decrementaNumElementos(unsigned int cantidad);
    unsigned int getNumElementos() const;

    //Heredada de Item pero implementable en derivadas
    virtual std::string getDescripcion() const=0;

private:
    int _numElementos;

};

#endif /* ITEMAPILABLE_H */

