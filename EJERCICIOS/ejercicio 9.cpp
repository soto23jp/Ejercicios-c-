#include <iostream>
using namespace std;

int main() { 
  float previo1;
  float previo2;
  float tercera_Nota;
  float Examen;
  float valor_Asignatura;

  cout << "escriba el valor del previo1: ";
  cin >> previo1;
  cout << "escriba el valor del previo2: ";
  cin >> previo2;
  cout << "escriba el valor de la tercera Nota: ";
  cin >> tercera_Nota;
  cout << "escriba el valor del Examen: ";
  cin >> Examen;

  valor_Asignatura =  ((previo1 * 0.25) + (previo2 * 0.25) +     
  (tercera_Nota * 0.20) + (Examen * 0.30));

  cout << "el valor de la materia es: " << valor_Asignatura;
}