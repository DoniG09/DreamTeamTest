#include<iostream>
#include <windows.h>

using namespace std;

int main(){
    
    cout<<endl; //Salto de línea
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3); /*Asignación del color azul al mensaje que aparecerá 
	en pantalla*/
    cout<<"Doni está escribiendo esta línea como prueba"<<endl;
	cout<<endl; //Salto de línea
	
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11); /*Asignación del color cian al mensaje que aparecerá 
	en pantalla*/
    cout<<"Algo me dice que ya chingué el return :'v"<<endl;
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7); /*Asignación del color blanco*/
    
    return 0;
    
    
    
}
