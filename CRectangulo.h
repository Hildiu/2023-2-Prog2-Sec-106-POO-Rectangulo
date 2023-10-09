//
// Created by mbermejo on 09/10/2023.
//

#ifndef INC_01_PROG_CRECTANGULO_H
#define INC_01_PROG_CRECTANGULO_H

#include <iostream>
using namespace std;

class CRectangulo
{
  private:
    double largo;
    double ancho;
  public:
    CRectangulo() {};   //--- es el constructor por defecto, solo crea el objeto
    CRectangulo(double _largo, double _ancho): largo(_largo), ancho(_ancho){}
    virtual ~CRectangulo(){ cout << "\nMe estoy destruyendo....";  }
    double area();
    double perimetro();
    //--- metodos de acceso------
    void setLargo(double _largo){ largo = _largo; }
    double getLargo() { return largo; }
    void setAncho(double _ancho) { ancho = _ancho; }
    double getAncho() { return ancho;}
};




#endif //INC_01_PROG_CRECTANGULO_H
