#include <iostream>
using namespace std;
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
			cout<<numeroPlaca<<color<<marca<<velocimetro;
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
			Automovil(string placa, string col, string mar, string vel)
			Vehiculo(placa, col, mar, vel){}
			
			void mostrarAtomovil() const{
				mostrarDatos();
				cout<<cantidadPuertas<<cantidadPasajeros;
			}
			
			void subirPasajeros(int cantidad){
				cantidadPasajero+= cantidad;
				cout<<cantidadPasajero;
			}
			
			void bajarPasajeros(int cantidad){
				cantidadPasajero-=cantidad;
				cout<<cantidadPasajero;
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
	
	int main(){
		Automovil miAuto("WOLF123","Azul","Toyota","10/05/27" );
		Camion miCamion("YeleroX", "Negro", "Avenger","26/03/27");
		
		miAuto.
	return 0;
	}
	
