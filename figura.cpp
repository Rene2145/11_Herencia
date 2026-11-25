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

class Triangulo : public Figura {
private:
double base, altura;
string tipo;
public:
Triangulo(string c, double b, double h, string t) : Figura(c), base(b), altura(h), tipo(t) {}
double calcularArea() {return (base*altura)/2;}
void mostrarDatos() {
cout<<"Color: "<<color<<endl;
cout<<"Base: "<<base<<endl;
cout<<"Altura: "<<altura<<endl;
cout<<"Tipo: "<<tipo<<endl;
}
};

int main() {
Circulo circulo("Rojo", 5);
Rectangulo rectangulo("Azul", 8, 4);
Triangulo triangulo("Verde", 6, 4, "Isosceles");

cout<<"CIRCULO: "<<endl;
circulo.mostrarDatos();
cout<<"Area: "<<circulo.calcularArea()<<endl;
cout<<"Perimetro: "<<circulo.calcularPerimetro()<<endl;

cout<<"\nRECTANGULO: "<<endl;
rectangulo.mostrarDatos();
cout<<"Area: "<<rectangulo.calcularArea()<<endl;

cout<<"\nTRIANGULO: "<<endl;
triangulo.mostrarDatos();
cout<<"Area: "<<triangulo.calcularArea()<<endl;

return 0;
}
