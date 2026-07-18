#include <iostream>
#include <locale>
using namespace std;
int main(){
    
    setlocale(LC_ALL, "Portuguese");
	
	char A1 = '1';
	char A2 = '2';
	char A3 = '3';
	char B1 = '4';
	char B2 = '5';
	char B3 = '6';
	char C1 = '7';
	char C2 = '8';
	char C3 = '9';
	char opc = ' ';
	char jogador = 'X';
	
	do{
		cout<<"JOGO DA VELHA!"<<endl<<endl<<endl;
		
		cout<<A1<<" | "<<A2<<" | "<<A3<<endl; // IMPRESSÃO DO TABULEIRO
		cout<<"---------"<<endl;
		cout<<B1<<" | "<<B2<<" | "<<B3<<endl;
		cout<<"---------"<<endl;
		cout<<C1<<" | "<<C2<<" | "<<C3<<endl<<endl<<endl;
		
		
	if (A1 == 'X' && A2 == 'X' && A3 == 'X' || A1 == '0' && A2 == '0' && A3 == '0'){ // POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	 	break;}
	if (B1 == 'X' && B2 == 'X' && B3 == 'X' || B1 == '0' && B2 == '0' && B3 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;}
	if (C1 == 'X' && C2 == 'X' && C3 == 'X' || C1 == '0' && C2 == '0' && C3 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;}
	if (A1 == 'X' && B1 == 'X' && C1 == 'X' || A1 == '0' && B1 == '0' && C1 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;} 
	if (A2 == 'X' && B2 == 'X' && C2 == 'X' || A2 == '0' && B2 == '0' && C2 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;} 
	if (A3 == 'X' && B3 == 'X' && C3 == 'X' || A3 == '0' && B3 == '0' && C3 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;}
	if (A1 == 'X' && B2 == 'X' && C3 == 'X' || A1 == '0' && B2 == '0' && C3 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;} 
	if (A3 == 'X' && B2 == 'X' && C1 == 'X' || A3 == '0' && B2 == '0' && C1 == '0'){// POSSIBILIDADE DE VITÓRIA
	 	cout<<"JOGADOR "<<(jogador != 'X' ? "UM (X) ": "DOIS (0) ")<<"GANHOU O JOGO"<<endl;
	    break;}    
	    
	if(A1 != '1' && A2!= '2' && A3 != '3' && B1 != '4' && B2 != '5' && B3 != '6' && C1 != '7' && C2 != '8' && C3 != '9'){// EMPATE
	    cout<<"EMPATE";
	    break;}
	
		
		cout<<"JOGADOR "<<(jogador == 'X' ? "UM (X) ": "DOIS (0) ")<< "ESCOLHA UMA POSIÇÃO"<<endl<<endl;
		cin >> opc;
		
		    while((opc == '1' && A1 != '1') ||// VALIDA SE A CASA ESCOLHIDA ESTÁ OCUPADA
		          (opc == '2' && A2 != '2') ||
		          (opc == '3' && A3 != '3') ||
		          (opc == '4' && B1 != '4') ||
		          (opc == '5' && B2 != '5') ||
		          (opc == '6' && B3 != '6') ||
		          (opc == '7' && C1 != '7') ||
		          (opc == '8' && C2 != '8') ||
		          (opc == '9' && C3 != '9')){
            	cout<<"POSIÇÃO OCUPADA! ESCOLHA OUTRA POSIÇÃO: "<<endl<<endl;
            	cin>>opc;}
		
		switch(opc){ // ESCOLHE A CASA DESEJADA
		    
			case '1' : A1 = jogador; break;
			case '2' : A2 = jogador; break;
			case '3' : A3 = jogador; break;
			case '4' : B1 = jogador; break;
			case '5' : B2 = jogador; break;
			case '6' : B3 = jogador; break;
			case '7' : C1 = jogador; break;
			case '8' : C2 = jogador; break;
			case '9' : C3 = jogador; break;	
	
		}
		
	if (jogador == 'X'){ // TROCA O JOGADOR
	 	jogador = '0';
	}else{
	 	jogador = 'X';}
	 	
	}while(opc != 'f' && opc != 'F');// CANCELA / FINALIZA O JOGO
		
	return 0;
}
