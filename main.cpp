#include <iostream>
#include "arreglo.h"

using namespace std;

int main() {
  Arreglo<string> arreglo;

  arreglo.insertar_final("Edgar"); 
  arreglo.insertar_final("Omar"); 
  arreglo.insertar_inicio("Zambrano"); 
  arreglo.insertar_inicio("Monreal");

  for (size_t i = 0 ; i < arreglo.size(); i++){
    cout << arreglo[i] << " ";         
  }
  cout << endl<< endl;

  arreglo.insertar("TPI", 2);

  for (size_t i = 0 ; i < arreglo.size(); i++){
    cout << arreglo[i] << " ";         
  }
  cout << endl << endl;

  arreglo.eliminar_inicio();
  arreglo.eliminar_final(); 
  arreglo.eliminar(1);

  for (size_t i = 0 ; i < arreglo.size(); i++){
    cout << arreglo[i] << " ";         
  }
  cout << endl<< endl;

  return 0;
}