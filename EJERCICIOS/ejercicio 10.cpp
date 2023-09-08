#include <iostream>
using namespace std;

int main() { 
  float valor_Notas[51];
  int Notas_Recolectadas;
  int i;
  float promedio_Notas;
  float suma_Notas;

  cout << "escriba las notas recolectadas: ";
  cin >> Notas_Recolectadas;

  for  (i = 1; i <= Notas_Recolectadas; i = i + 1) {
    cout << "cuanto es el valor de la nota numero " << i << ":";
    cin >> valor_Notas[i];

    suma_Notas = suma_Notas + valor_Notas[i];
    
  }
  promedio_Notas = suma_Notas / Notas_Recolectadas;
  cout << "\n";
  cout << "el promedio de la tercera nota es de: " << promedio_Notas << "\n";
  cout << "el porcentaje del valor de la tercera nota es de: " << promedio_Notas * 0.20;
  
}