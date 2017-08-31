#include<iostream>
#include<conio.h>
#include <math.h>
//getch,system
using namespace std;
main(){
	char ch;
	int op;
	double m=0,i,n1,s;
	
	do
	{
		
		cout<<"1._Constante matematica\n";
		cout<<"2._Potencia\n";
		cout<<"0._salir\n";
		cout<<"|*** ELIGE LA OPCION ***|\n";
		cin>>op;
		
	
			switch(op)
			{
				case 1:
				cout<<"OPCION CONSTANTE\n";
				cout<<"Ingresa un numero: \n";
				cin>>n1;
				s=n1+1;
				for(i=1;i<=s;i++)
				{
				
				m=1/i+m;
			}
				cout<<"Resultado:\n"<<m<<endl;
				getch();
				break;
				
				case 2:
				cout<<"OPCION POTENCIA\n";
				cout<<"Ingresa un numero: ";
				cin>>n1;
				s=n1+1;
                for (i=1 ; i<=s ; i++)
                {
                	int x=pow(i,s);
                    m=1/x+m;
                }
                cout << "El resultado es \n"<<m<<endl;
				getch();
				break;
				
				case 0:
				cout<<"ADIOSITO\n";
			}
		
	}while(ch!=27);
}
