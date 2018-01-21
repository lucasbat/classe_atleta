/*

classe_atleta e um pequeno software que mostra os dados de um atleta e calcula
seu IMC

*/

#include<iostream>
#include<string>
using namespace std;
class Atleta{
	private:
		string nome;
		float altura, peso, imc;
	public:
		Atleta(){
			nome="Media";
			altura=0;
			peso=0;
			imc=0;
		}
		~Atleta(){}
		void set_dados(){
			cout<<"\nDigite nome: "; getline(cin,nome);
			cout<<"\nDigite altura: "; cin>>altura;
			cout<<"\nDigite peso: "; cin>>peso;
			cin.ignore();
		}
		void print_dados(){
			cout<<"\nNome: "<<nome;
			cout<<"\nAltura: "<<altura;
			cout<<"\nPeso: "<<peso;
		}
		float ret_imc(){
			return peso/(altura*altura);
		}
		void media(Atleta A, Atleta B){
			peso=(A.peso+B.peso)/2;
			altura=(A.altura+B.altura)/2;
		}
};

int main(){
	Atleta A, B, Total;
	A.set_dados();
	B.set_dados();
	A.print_dados();
	cout<<"\nIMC="<<A.ret_imc();
	Total.media(A,B);
	Total.print_dados();

	cout<<"\n\n";
	return 0;
}
