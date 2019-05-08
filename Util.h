#include <string>
#include <iostream>
#include <Windows.h>


using namespace std;
class Util{
	public :
		string tip;
		void Alert(int a,int b,string ranStr,int stn,int puan){
			cout << a<<" rafin "<<b<<" sirasindaki "<<ranStr<<" bardagini vurarak "<<puan<<" puan kazandiniz.\n";
			cout << "Toplam Puan :" << endl<<endl;
		}
		void Counters(int counter){
				if(counter%2!=0){cout<<"Atis sirasi Oyuncu-1'de"<<endl;}
					else if(counter%2==0){
					cout<<"\n";
					cout<<"Atis sirasi Oyuncu-2'de"<<endl;}
		}
		void Ext(){
			while(true)
			{
				if (GetAsyncKeyState(VK_ESCAPE))
				{
					exit(0);
				}
			}
		}
		string TipGet(){
			cout<"\n";
				cout<<"Bardak Tipi Seciniz (B|O|K)\t\a:";
				cin>>tip;
				if(tip=="B"|| tip=="b"||tip=="O"||tip=="o"||tip=="K"||tip=="k"){
					return tip;
			}else{
				cout<<"#######################################################################"<<endl;
			 	cout<<"Gecerli Bir Secim Yapmadiginizdan Sistem Sizin Yerinize Secim Yapti"<<endl;
			 	cout<<"#######################################################################"<<endl;
				return "k";	
			}
		}
		void StartProg(){
			cout<<"#######################################################################"<<endl;
			 	cout<<"\t\t\t# KIR KAZAN #"<<endl;
			 	cout<<"#######################################################################"<<endl;
				cout<"\n";
		}
		void GState(int gamer0,int gamer1){
			cout<<"DURUM"<<endl;
			cout<<"#######################################################################"<<endl;
			//cout << "Kordinat \t\t\t:" << "[" << a << "]" << "[" << RandSet(a,b) << "]" << endl;
			cout << "Gamer 1\t\t\t\t:" << gamer0 << endl;
			cout << "Gamer 2\t\t\t\t:" << gamer1<< endl;
			cout << "Oyun Sonlandiriliyor.."<< endl;
			cout<<"#######################################################################"<<endl;
		}
		
		/*cout << a<<" rafýn "<<stn<<" sýrasýndaki "<<ranStr<<" bardaðý vurarak 1 puan kazandýnýz.\n";
			cout<<"VURULAN DEGER : "<<random[a][b]<<endl;
			cout << "Kordinat \t\t\t:" << "[" << a << "]" << "[" << stn << "]" << endl;*/
};

