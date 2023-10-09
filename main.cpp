//-------------------------------------------------------
// Dato de entrada: largo, ancho (double)
// Dato de salida: area , perimetro (double)
//-------------------------------------------------------

#include "CRectangulo.h"

int main()
{
  CRectangulo   R1;

  R1.setLargo(50);
  R1.setAncho(25);
  cout << "El perimetro es: " <<  R1.perimetro() << "\n";
  cout << "El area es     : " << R1.area() << "\n";
  cout << "\n";

  cout << "Ahora creremos un segundo objeto, pero los valores del largo y del ancho los leemos desde el teclado\n";
  CRectangulo  R2;
  double l, a;

  cout << "Largo: ";
  cin >> l;
  cout << "Ancho: ";
  cin >> a;
  R2.setLargo(l);
  R2.setAncho(a);
  cout << "El perimetro es: " << R2.perimetro() << "\n";
  cout << "El area es     : " << R2.area() << "\n";
  cout << "\nAhora incrementamos los valores del largo y del ancho de R2 en 10 unidades\n";
  cout << "Y repetimos el calculo de area y del perimetro\n";

  R2.setLargo(R2.getLargo() + 10);
  R2.setAncho(R2.getAncho() + 10);
  cout << "El perimetro es: " << R2.perimetro() << "\n";
  cout << "El area es     : " << R2.area() << "\n";

  cout << "\n";
  cout << "Utilizamos el constructor sobrecargado que crea el objeto y ademas da valor a los atributos\n";

  double l3, a3;
  cout << "Valor de Largo : ";
  cin >> l3;
  cout << "Valor del ancho: ";
  cin >> a3;

  CRectangulo R3(l3, a3);
  cout << "El area es: " << R3.area() << "\n";
  cout << "El perimetro es: " << R3.perimetro() << "\n";


  return 0;
}
