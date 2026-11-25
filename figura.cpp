#include <iostream>
#include <string>
using namespace std;

class Figura {
protected:
string color;
public:
Figura(string c) : color(c) {}
};

class Circulo : public Figura {
private:
double radio;
public:
Circulo(string c, double r) : Figura(c), radio(r) {}
double calcularArea() {return 3.14*radio*radio;}
double calcularPerimetro() {return 2*3.14*radio;}
void mostrarDatos() {
cout<<"Color: "<<color<<endl;
cout<<"Radio: "<<radio<<endl;
}
};

int main() {
Circulo circulo("Rojo", 5);

cout<<"--- CIRCULO ---"<<endl;
circulo.mostrarDatos();
cout<<"Area: "<<circulo.calcularArea()<<endl;
cout<<"Perimetro: "<<circulo.calcularPerimetro()<<endl;

return 0;
}
