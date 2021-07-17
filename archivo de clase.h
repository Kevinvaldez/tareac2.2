
 

class persona{

private:
int cedula;
string nombres,apellidos;
float peso, estatura;
int an,mn,dn;
public:


	
void datos(){
	
			
			cout<<"Degite su numero de cedula: \n";cin<<cedula ;
			cout<<"Escriba sus nombres:  ";cin>>nombres;
			cout<<"Escriba sus apellidos:  ";cin>>apellidos;
			cout<<"Digite su peso: ";cin>>peso;
			cout<<"Digite su estatura: ";cin>>estatura;
			cout<<"Ingres la fecha de nacimiento (a-m-d): "; 
            cin>>an>>mn>>dn;
}
void mostrar_datos(){
        cout<<cedula<<endl;
		cout<<nombres<<endl;
		cout<<apellidos<<endl;
		cout<<peso<<endl;
		cout<<estatura<<endl;
		cout<<an<<endl;
		cout<<mn<<endl;
		cout<<dn<<endl;
}
};
