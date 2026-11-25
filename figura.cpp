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
double calcularArea() {return 3.141592653589793*radio*radio;}
double calcularPerimetro() {return 2*3.141592653589793*radio;}
void mostrarDatos() {
cout<<"Color: "<<color<<endl;
cout<<"Radio: "<<radio<<endl;
}
};

class Rectangulo : public Figura {
private:
double base, altura;
public:
Rectangulo(string c, double b, double h) : Figura(c), base(b), altura(h) {}
double calcularArea() {return base*altura;}
void mostrarDatos() {
cout<<"Color: "<<color<<endl;
cout<<"Base: "<<base<<endl;
cout<<"Altura: "<<altura<<endl;
}
};

int main() {
Circulo circulo("Rojo", 5);
Rectangulo rectangulo("Azul", 8, 4);

cout<<"CIRCULO: "<<endl;
circulo.mostrarDatos();
cout<<"Area: "<<circulo.calcularArea()<<endl;
cout<<"Perimetro: "<<circulo.calcularPerimetro()<<endl;

cout<<"\n RECTANGULO: "<<endl;
rectangulo.mostrarDatos();
cout<<"Area: "<<rectangulo.calcularArea()<<endl;

return 0;
}
