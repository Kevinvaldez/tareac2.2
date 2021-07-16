#include <iostream>
# include  < stdlib.h >

usando el  espacio de nombres  std ;
#include"clasess.h"

int  main ()
{
	persona persona1;
	int op, flag;
    	do{
	system("clear");
	cout<<" colaborador 1 presentar datos"<<endl<<endl;
	cout<<" colavorador 2 edad de la persona\n";
	cout<<" colaborador 3 mostrar indice masa corporal.-  \n";
	cout<<" colaborador 3 guardar datos txt ._ \n"; 
	cout<<" colaborador 5 recuperar datos txt y mostrar el principal .-  \n";
	cout<<"0.- Salir del menu \n";
        cout<<" Ingrese una opción : "; cin>>op;
	switch(op){
		case 1:
	persona1.datos();
	persona1.mostrar_dato();
		
		break;
	        case 2:
	
	
		break;
		case 3:
	
	
		break;
		case 4:
	
	
		break;
		case 5:
	
	
		break;
		}
		  if(op!=0){
			    cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);	 
    return  0 ;
}
