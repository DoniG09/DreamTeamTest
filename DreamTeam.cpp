#include<iostream>
#include <windows.h>

using namespace std;

int main(){
    
    cout<<endl; //Salto de l�nea
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3); /*Asignaci�n del color azul al mensaje que aparecer� 
	en pantalla*/
    cout<<"Doni est� escribiendo esta l�nea como prueba"<<endl;
	cout<<endl; //Salto de l�nea
	
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11); /*Asignaci�n del color cian al mensaje que aparecer� 
	en pantalla*/
    cout<<"Algo me dice que ya chingu� el return :'v"<<endl;
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7); /*Asignaci�n del color blanco*/
    
    return 0;
    
    
    
}
