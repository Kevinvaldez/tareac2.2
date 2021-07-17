
 // clases objetos 

class persona{

private:
int cedula;
string nombres,apellidos;
float peso, estatura;
int an,mn,dn;
public:


// kevin valdez ..	
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
//dayan george
persona{
	
	
	private:
	       string nombre, apellido;
	       float altura, peso, IMC;

	public:
		   persona()
		   {
		   	
		   }
		   persona(string n, string s, int a, int p, int e)
		   {
		   	nombre=n;
		   	apellido=s;
		   	peso=a;
		   	altura=p;
		   	IMC=e;
		   }
		   void ingresar()
		   {
		   	cout<<"Ingrese el nombre :";getline(cin,nombre);
		   	cout<<"Ingrese el apellido :";getline(cin,apellido);
		   	cout<<"Ingrese el peso :";cin>>peso;
		   	cout<<"Ingrese la altura :";cin>>altura;
		   	 IMC = peso/(altura*altura);

    

    if (IMC<20)
        printf("Peligro, estas bajo de peso");
        else
     if (20<IMC&&IMC<=25)
        printf("Felicidades estas en tu peso");
        else
     if (25<IMC&&IMC<30)
        printf("Tienes sobrepeso"); 
        else
     if (30<IMC&&IMC<35)
        printf("tienes obesidad"); 
        else
     if (35<=IMC)
        printf("Tienes obesidad morbida"); 


		   }
		   
		   void mostrar()
		   {
		   	cout<<"NOMBRE"<<"<\t";
		   	cout<<"APELLIDO"<<"<\t";
		   	cout<<"PESO"<<"<\t";
		   	cout<<"ALTURA"<<endl;
		   	
		   	cout<<nombre<<"\t";
		   	cout<<apellido<<"\t";
		   	cout<<peso<<"\t";
		   	cout<<altura<<"\t";


		   }
};
