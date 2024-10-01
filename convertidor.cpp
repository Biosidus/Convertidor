/* CONVERTIDOR */
#include <iostream>
using namespace std;

//Funciones propias a usar
void convertirDistancia();
void convertirTemperatura();
void convertirPeso();

int main(){
	int opcion;
	
	do{
	
	cout<<"*** CONVERSOR DE UNIDADES ***"<<endl;
	cout<<"1. Convertir distancia (metros a kilometros)"<<endl;
	cout<<"2. Convertir temperatura (Celsius a Farenheit)"<<endl;
	cout<<"3. Convertir peso (kilogramos a libras)"<<endl;
	cout<<"4. SALIR"<<endl;
	cout<<"Seleccione una opcion: ";
	cin>>opcion;
	cout<<'\n';
	
	switch(opcion){
		case 1:
			convertirDistancia();
			cout<<'\n';
			break;
		case 2:
			convertirTemperatura();
			cout<<'\n';
			break;
		case 3:
			convertirPeso();
			cout<<'\n';
			break;
		case 4:
			cout<<"Gracias por utilizar el programa!"<<endl;
			cout<<'\n';
			break;
		default:
			cout<<"No ingreso una opcion valida."<<endl;
			cout<<'\n';
			break;
	}
		
	}while (opcion != 4);
	
	return 0;
}

//Funcion para convertir metros a kilometros
void convertirDistancia(){
	double metros;
	
	do{
		cout<< "Ingrese la distancia en metros: ";
		cin>> metros;
		if(metros < 0){
			cout<<"Recuerde que una distancia no puede ser negativa.";
			cout<<'\n';
		}
	}while(metros < 0);
	
	double kilometros = metros / 1000.0;
	cout<< metros << " metros son " << kilometros << " kilometros."<<endl;
}

void convertirTemperatura(){
	double celsius;
	
	cout<<"Ingrese la temperatura en grados celius: ";
	cin>>celsius;
	
	double farenheit = (celsius * 9.0/5.0)+32;
	
	cout<< celsius << " gradios celsius son " << farenheit << " grados farenheit."<<endl;
}

void convertirPeso(){
	double kilogramos;
	
	do{
		cout<<"Ingrese los kilogramos: ";
		cin>>kilogramos;
		
		if(kilogramos<0){
			cout<<"Un peso no puede ser negativo."<<endl;
		}
	}while(kilogramos<0);
	
	double libras= kilogramos * 2.20462;
	cout<< kilogramos << " kilogramos son " << libras << " libras." <<endl;
	
}
