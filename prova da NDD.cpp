#include <string>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void menudeedicao();
void excluir();
void manutencao();
void menudeedicao2();
void excluir2();

	vector<string>confirms;
	vector<char> nomes;
	vector<string> precos;	
	vector<string> numeros;
	vector<string> datas;
	vector<string> fabricantes;
	vector<int> dels;
	vector<string> titulos;
	vector<string> descricoes;
	vector<string> equipamentos;
	vector<string> datas2;
	vector<string> dias;
	
	int del, i2, i4;
	
main()
{	setlocale (LC_ALL, "Portuguese");
	
	string  data, preco, fabricante, numero, confirm;
	int choice, secondchoice, thirdchoice, fourthchoice, i, i2, tamanho;
	char nomeequipamento[50];
	
	do
	{
		cout<<"\n			  Menu Principal\n\n";
		cout<<"====================================================================\n";
		cout<< "1.  Registrar" << endl << "2.  Mostrar Invent�rio" << endl << "3.  Editar Invent�rio" << endl << "4.  Excluir item" << endl << "5.  Chamada de Manuten��o" << endl << "6.  Sair";
		cout<<"\n====================================================================\n\n";
		cin>>choice;
		switch (choice)
		{
			//escolher o numero selecionar� a op��o desejada
			//no case 1 registramos um equipamento
			case 1:
				system("cls");
				cout<<"Nome do produto (utilize _ para dar espa�o entre as palavras): ";
				cin>>nomeequipamento;
				tamanho=strlen(nomeequipamento);
				if(tamanho>5){
				cout<<"Confirme o nome do produto: ";
				cin>>confirm;
				confirms.push_back(confirm);
				cout<<"Pre�o do equipamento: ";
				cin>>preco;
				precos.push_back(preco);
					
				cout<<"Numero de s�rie: ";
				cin>>numero;
				numeros.push_back(numero);
					
				cout<<"Data de fabricacao (xx/xx/xx): ";
				cin>>data;
				datas.push_back(data);			
					
				cout<<"Fabricante: ";
				cin>>fabricante;
				fabricantes.push_back(fabricante);
				cout<<"\n\nSeu equipamento foi registrado com sucesso!\n\n";
				
				system("pause");
				system("cls");
				break;;
				}
				else{
					cout<<"Tente novamente, o nome deve ter no m�nimo 6 caracteres\n\n";
					system("pause");
					system("cls");
					break;
				}	
				//no case 2 vizualizamos o invent�rio
			case 2:
				if (!numeros.empty()){
				for (int i = 0; i < numeros.size(); i++)
				{
					if(numeros[i].empty())
				{ 	system("cls");
					cout<<"Item "<<i<<" exclu�do.\n\n"<<endl;
				}
				else
				{
					system("cls");
					cout<<"\n\n"<<i+1<<"� Equipamento resgistrado:";
					cout<<"\nNome do equipamento: "<< confirms[i];	
					cout<<"\nNumero de serie: "<< numeros[i];				
					cout<<"\nFabricante: "<< fabricantes[i]<<endl;
				}
					system("pause");
					system("cls");
				}
				}
				else{system("cls");
				cout<<"\nNenhum item no invent�rio\n\n";	
				system("pause")	;
				}
				system("cls");
				break;		
				
				//no case 3 editamos o invent�rio
			case 3:	
				system("cls");
				menudeedicao();
				break;
				//no case 4 exclu�mos algum item do invent�rio
			case 4:
				system("cls");
				excluir();	
				break;
				//no case 5 abrimos o menu de manuten��o
			case 5:
				system("cls");
				manutencao();	
				break;
				//no case 6 sa�mos do aplicativo
			case 6:
				system("cls");
				cout<<" Saindo...\n";
				return 0;
				system("pause");
				system("cls");	
				}
	
	}
	while(choice != 0);
}
//no void menudeedi��o criamos a fun��o de edi��o
void menudeedicao(){
	int i, i2;
	int secondchoice;
do{
	if(!numeros.empty()){
	cout<<"Equipamentos resgistrados: "<<endl;
	for (int i = 0; i < numeros.size(); i++)
		{cout<<endl<<i<<": ";
		cout<< confirms[i]<<endl;}
	cout<<"\n\nDigite o n�mero do item no invent�rio que deseja editar: "<<endl;
	cin>>i2;
	system("cls");
	cout<<"Menu de Edi��o\n";
	cout<<"\n1. Editar nome de algum equipamento" << endl << "2. Editar pre�o de algum equipamento" << endl << "3. Editar n�mero de s�rie";
				cout<< "4. Editar data da fabrica��o" << endl << "5. Editar fabricante" << endl << "6. voltar para o menu principal\n";
				cin>>secondchoice;
				switch(secondchoice)
				{	case 1:
						system("cls");
						cout<<"Digite o novo nome: ";
						cin>>confirms[i2];
						system("pause");
						secondchoice=6;
						system("cls");
						break;
					case 2:
						system("cls");
						cout<<"Digite o novo pre�o: ";
						cin>>precos[i2];
						system("pause");
						secondchoice=6;
						system("cls");
						break;
					case 3:
						system("cls");
						cout<<"Digite o novo n�mero: ";
						cin>>numeros[i2];
						system("pause");
						secondchoice=6;
						system("cls");
						break;
					case 4:
						system("cls");
						cout<<"Digite a nova data: ";
						cin>>datas[i2];
						system("pause");
						secondchoice=6;
						system("cls");
						break;
					case 5:
						system("cls");
						cout<<"digite o novo fabricante: ";
						cin>>fabricantes[i2];
						system("pause");
						secondchoice=6;
						system("cls");
						break;
					case 6:
						system("cls");
						cout << "Voltando ao Menu Principal...\n\n";
						system("pause");
						system ("cls");
						break;
						}
						
						}
	else
	{
		cout<<"\nN�o h� nenhum item para editar\n\n\n";
		system("pause");
		system("cls");
		break;
	}	
}
while(secondchoice < 6);
//se escolhermos o n�mero 6 ele volta ao menu principal

}
//no void excluir criamos uma fun��o para excluir
void excluir(){
	int i2; 
	if(!numeros.empty())
	{
		for (int i = 0; i < numeros.size(); i++){
			cout<<endl<<i<<": ";
			cout<< confirms[i]<<endl;}
	
			cout<<"Digite o n�mero do item no invent�rio que deseja excluir: "<<endl;
		
			cin>>i2;
			dels.push_back(del);
			del=i2;
		
			numeros[i2].clear();
			system("pause");
			system("cls");
	
	}
	
	else
	{
			cout<<"\nN�o h� nenhum item para excluir\n\n\n";
			system("pause");
			system("cls");
	}
}
//no void manute��o criamos uma fun��o para abrir o menu de chamados de manuten��o		
void manutencao(){

string titulo, descricao, equipamento,  dias, data2;
int thirdchoice, i3;

do{
cout<<"\n			  Menu de Chamados\n\n";
		cout<<"______________________________________________________________________\n\n";
		cout<< "1.  Registrar Chamado" << endl << "2.  Vizualizar Chamados" <<endl<< "3.  Editar Chamado" << endl << "4.  Excluir Chamado" << endl << "5.  Voltar";
		cout<<"\n____________________________________________________________________\n\n";
		cin>>thirdchoice;
		switch (thirdchoice)
		{
			//no case 1 registramos um chamado
			case 1:
				system("cls");
				cout<<"T�tulo do Chamado (utilize _ para dar espa�o entre as palavras): ";
				cin>>titulo;
				titulos.push_back(titulo);
				
				cout<<"Descri��o do Chamado: ";
				cin>>descricao;
				descricoes.push_back(descricao);
				
				cout<<"Equipamento: ";
				cin>>equipamento;
				equipamentos.push_back(equipamento);
					
				cout<<"Data de Abertura: ";
				cin>>data2;
				datas2.push_back(data2);
				
				cout << endl <<"Seu Chamado foi registrado com sucesso!\n\n";
				
				system("pause");
				system("cls");
				break;
			//no case 2 vizualizamos os chamados	
			case 2:
				if (!titulos.empty()){
				for (int i3 = 0; i3 < titulos.size(); i3++)
				{
					if(titulos[i3].empty())
				{ 	
					system("cls");
					cout<<"Chamada "<<i3<<" exclu�da."<<endl;
					system("pause");
				}
				else
				{
					system("cls");
					cout<<"\n\n"<<i3+1<<"� Chamado resgistrado:";
					cout<<"\nT�tulo do Chamado: "<< titulos[i3];
					cout<<"\nEquipamento: "<< equipamentos[i3];			
					cout<<"\nData de Abertura: "<< datas2[i3] << endl << endl;
					system("pause");
					system("cls");
					break;
				}
					
				}
				}
				else{system("cls");
				cout<<"\nNenhum chamado registrado\n\n";	
				system("pause")	;
				}
				system("cls");
				break;
			//no case 3 editamos um chamado	
			case 3:
				system("cls");
				menudeedicao2();
				break;
			//no case 4 excluimos um chamado	
			case 4:
				system("cls");
				excluir2();	
				break;
				
			//case 5 voltamos ao menu principal
			case 5:
				system ("cls");
				cout << "Voltando ao Menu Principal...\n\n\n";
				system("pause");
				thirdchoice = 5;
				system ("cls");
				break;
				}
				
				}while(thirdchoice != 5);}
//no void menudeedi��o2 abrimos uma fun��o para editar os chamados				
void menudeedicao2(){
	int i3, i4;
	int fourthchoice;
do{
	if(!titulos.empty()){
	cout<<"Chamados resgistrados: "<<endl;
	for (int i3 = 0; i3 < titulos.size(); i3++)
		{cout<<endl<<i3<<": ";
		cout<< titulos[i3]<<endl;}
	cout<<"\n\nDigite o n�mero do chamado que deseja editar: "<<endl;
	cin>>i4;
	system("cls");
	cout<<"Menu de Edi��o\n";
	cout<<"\n1. Editar T�tulo do Chamado" << endl << "2. Editar Descri��o do Chamado" << endl << "3. Editar Equipamento";
				cout<< endl << "4. Editar Data de Abertura" << endl << "5. voltar para o menu principal\n";
				cin>>fourthchoice;
				switch(fourthchoice)
				{	case 1:
						system("cls");
						cout<<"Digite o novo T�tulo: ";
						cin>>titulos[i4];
						system("pause");
						fourthchoice=5;
						system("cls");
						break;
					case 2:
						system("cls");
						cout<<"Digite a nova Descri��o: ";
						cin>>descricoes[i4];
						system("pause");
    					fourthchoice=5;						
						system("cls");
						break;
					case 3:
						system("cls");
						cout<<"Digite o novo Equipamento: ";
						cin>>equipamentos[i4];
						system("pause");
						fourthchoice=5;
						system("cls");
						break;
					case 4:
						system("cls");
						cout<<"Digite a nova Data de Abertura: ";
						cin>>datas2[i4];
						system("pause");
						fourthchoice=5;
						system("cls");
						break;
					case 5:
						system("cls");
						cout << "Voltando ao Menu Principal...\n\n\n";
						system("pause");
						system ("cls");
						break;
						}
						
						}
	else
	{
		cout<<"\nN�o h� nenhum chamado para editar\n\n\n";
		system("pause");
		system("cls");
		break;
	}	
}
while(fourthchoice < 5);


}
//no void excluir 2 abrimos uma fun��o para excluir um chamado
void excluir2(){

	int i4;
		if(!titulos.empty()){
		for (int i3 = 0; i3 < titulos.size(); i3++)
		{cout<<endl<<i3<<": ";
		cout<< titulos[i3]<<endl<<endl;}
		cout<<"Digite o n�mero do chamado que deseja excluir: "<<endl;
		cin>>i4;
		dels.push_back(del);
		del=i4;
		titulos[i4].clear(); 
	
	
		system("pause");
		system("cls");
		}
	
		else
	{
		cout<<"\nN�o h� nenhum chamado para excluir\n\n\n";
		system("pause");
		system("cls");

	}
	}
	

