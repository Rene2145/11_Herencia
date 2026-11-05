#include <iostream>
using namespace std;
int main (){
	class Vehiculo{
		protected:
			string numeroPlaca;
			string color;
			string marca;
			string velocimetro;
		public:
			vehiculo(string placa, string col, string mar, string vel)
				: numeroPlaca(placa), color(col), marca(mar), velocimetro(vel) {
				}
			void mostrarDatos() const{
			cout<<numeroPlaca<<color<<marca<<velocimetro}
			}
			void cambiarVelocidad(int nuevaVelocidad){
			velocimetro=nuevaVelocidad;
			}		
	};
	
	class Automovil : public Vehiculo{
		private:
			int cantidadPuertas;
			int cantidadPasajeros;
		public:
			automovil(string puertas, string pasajeros)
			Vehiculo(placa, col, mar, vel)
			void mostrarAtomovil() const{
				mostrarDatos();
				cout<<cantidadPuertas<<cantidadPasajeros;
			}	
	};
	
	class Camion : public Vehiculo{
		private:
			double carga;
		public:
			Camion(string placa, string col, string mar, string vel)
			: Vehiculo(string puertas, string pasajeros)
			void mostrarCamion() const{
			mostrarDatos();
			cout<<carga;
			}
			void cambiarCarga(double nuevaCarga){
				carga=nuevaCarga;
			}
	};
	
	return 0;
}
