#include <iostream>
using namespace std;
	class Vehiculo{
		protected:
			string numeroPlaca;
			string color;
			string marca;
			string velocimetro;
		public:
			Vehiculo(string placa, string col, string mar, string vel)
				: numeroPlaca(placa), color(col), marca(mar), velocimetro(vel) {}
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
				: Vehiculo(placa, col, mar, vel) {}
			
			void mostrarAutomovil() const{
				mostrarDatos();
				cout<<cantidadPuertas<<cantidadPasajeros;
			}
			
			void subirPasajeros(int cantidad){
				cantidadPasajeros+= cantidad;
				cout<<cantidadPasajeros;
			}
			
			void bajarPasajeros(int cantidad){
				cantidadPasajeros-=cantidad;
				cout<<cantidadPasajeros;
			}
	};
	
	class Camion : public Vehiculo{
		private:
			double carga;
		public:
			Camion(string placa, string col, string mar, string vel) 
			: Vehiculo(placa, col, mar, vel) {}
			void mostrarCamion() const{
			mostrarDatos();
			cout<<carga;
			}
			void cambiarCarga(double nuevaCarga){
				carga=nuevaCarga;
			}
	};
	
	int main(){
		Automovil miAuto("WOLF123","Azul","Toyota",0);
		Camion miCamion("YeleroX", "Negro", "Avenger",0);
		cout<<miAuto.mostrarAutomovil(23);
		cout<<miCamion.mostrarCamion(20.0);
		cout<<endl;		
		miAuto.cambiarVelocidad(30);
		miAuto.subirPasajeros(10);
		
		miCamion.cambiarVelocidad(40);
		miCamion.cambiarCarga(16.0);
		
		cout<<miAuto.mostrarAtomovil();
		cout<<miCamion.mostrarCamion();
		
	return 0;
	}
	
