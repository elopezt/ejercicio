#include <iostream>
using namespace std;

int opc;
char cliente;
cout<<"Seleccione: 1. Administrador \n 2.Vendedor"<<endl;
cin>>opc;

struct cliente{
	char nombre[30];
	};
	
struct carro{
	char marca[20];
}cliente;

int main(){
cout<<"Digite el nombre";
cin.getline(cliente.nombre, 30, '\n'); 	

cout<<"Digite la marca del vehiculo";
cin.getline(carro.marca, 20, '\n');
cout<<"Digite el año del carro";
cin>>carro.o

}
//Imprimiendo los datos
cout<<"Nombrecliente:"<<cliente.nombre<<endl;

cout<<"Ano del vehiculo:"<<carro.o<<endl;

return 0;
}
/*
int main()
{
for(int i=0;i<2;i++){
	fflush(stdin); //Vaciar buffer
	cout<<"Digite el nombre:";
	cin.getline(empleados[i].nombre,20, '\n');
	cout<<"Digite la direccion:";
	cin.getline(empleados[i].dir_empleado.direccion,30, '\n');
	cout<<"Ciudad:";
	cin.getline(empleados[i].dir_empleado.ciudad,20, '\n');
	cout<<"Digite el salario:";
	cin>>empleados[i].salario;
	cout<<"\n";
}	

cout<<"Imprimiendo los datos:";
for (int i=0; i<2;i++){
	cout<<"Nombre:"<<empleados[i].nombre<<endl;
	cout<<"Direccion:"<<empleados[i].dir_empleado.direccion<<endl;
	cout<<"Ciudad:"<<empleados[i].dir_empleado.ciudad<<endl;
	cout<<"salario:"<<empleados[i].salario;
	cout<<"\n "<<endl;
}
return 0;
}*/
55
