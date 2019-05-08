#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Calcule.h"
#include <windows.h>

using namespace std;

class Bardak :public Calcule
{

private:
	//int gamer1 = 0;
	//int gamer2 = 0;
	string random[3][45];
	string rValue[3][15];
	string Oyuncu;
	int counter = 1;
	int ex;
public:
	void Olasilik(string random[3][15], int a, int b) { 
	srand(time(0));
		string bbardaklar[4] ={ "K","M","x","Y" };
		int n;
		n = 15;
		//int stn = rand()% b+3  + a; 
		string ranStr = random[a][RandSet(a,b)];
		counter++;
		if (random[a][b] == ranStr && random[a][b] != "x") {
			srand(time(0));
			if(counter%2==0){
				if(ranStr=="K"){gamer0=gamer0+3;
				Alert(a,b,ranStr,RandSet(a,b),3);
				}else if(ranStr=="Y"){gamer0=gamer0+1;
				Alert(a,b,ranStr,RandSet(a,b),1);
				}else if(ranStr=="M"){gamer0=gamer0+2;
				Alert(a,b,ranStr,RandSet(a,b),2);
				}
				cout<<"\n";
			}else if(counter%2!=0){
				if(ranStr=="K"){gamer1=gamer1+3;
				Alert(a,b,ranStr,RandSet(a,b),3);
				}else if(ranStr=="Y"){gamer1=gamer1+1;
				Alert(a,b,ranStr,RandSet(a,b),1);
				}else if(ranStr=="M"){gamer1=gamer1+2;
				Alert(a,b,ranStr,RandSet(a,b),2);
				}
				cout<<"\n";
			}
			cout<<"\n";
			cout<<"#######################################################################"<<endl;
			//cout << "Kordinat \t\t\t:" << "[" << a << "]" << "[" << RandSet(a,b) << "]" << endl;
			cout << "Gamer 1\t\t\t\t:" << gamer0 << endl;
			cout << "Gamer 2\t\t\t\t:" << gamer1<< endl;
			cout<<"#######################################################################"<<endl;
			cout<<"Kalan bardaklar:"<<endl<<endl;;
			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < n; j++)
				{
					if (i == a && j == b)
						random[i][j] = "x";
					cout << random[i][j];
				}
				cout << "\n";
			}
			while (true)
			{
				srand(time(0));
				cout<<"\n";
				Counters(counter);
				cout<<"#######################################################################"<<endl;
				cout<<"Atis yapmak icin once raf sonra sirayi belirten sayilari giriniz.\nOyundan cikmak icin X giriniz:"<<endl;
				cout<<"#######################################################################"<<endl;
				cout<<"\n";
				int kor1, kor2;
				cin >> kor1 >> kor2;
				if (cin.get() == '\n') {
				Olasilik(random, kor1, kor2);
				}
			}
		}
		else {
			srand(time(0));
			Counters(counter);
			cout<<"\n";
			cout<<"#######################################################################"<<endl;
			//cout << "Kordinat \t\t\t:" << "[" << a << "]" << "[" << RandSet(a,b) << "]" << endl;
			cout<<"Atis yapmak icin once raf sonra sirayi belirten sayilari giriniz.\nOyundan cikmak icin X giriniz:"<<endl;
			cout<<"#######################################################################"<<endl;
			cout<<"\n";
			int kor1, kor2;
			cin >> kor1 >> kor2;
			if (cin.get() == '\n') {
				Olasilik(random, kor1, kor2);
			}
		}
	}
	//Bardak Olusturma
	void  BardakOlustur(string tip) {
		cout<<"Kalan bardaklar:"<<endl<<endl;;
		cout<<"\n";
		string bbardaklar[] = { "K","M","x","Y" };
		srand(time(0));
		if (tip == "b" || tip == "B") {
			string bbardaklar[] = { "K","M","x","Y" };
			string random[3][15];
			for (int i = 0; i < 3; i++) {
				for (size_t j = 0; j < 8; j++){
					random[i][j] = bbardaklar[rand() % 3 + 0];
				}
			}
			for (int i = 0; i < 3; i++) {
				for (size_t j = 0; j < 8; j++){
					cout <<" "<<random[i][j];
				}
				cout << "\n";
			}
			cout << "\n";
			cout<<"#######################################################################"<<endl;
			cout<<"Atis yapmak için once raf sonra sirayi belirten sayilari giriniz.\nOyundan cikmak icin X giriniz:"<<endl;
			//cout<<"Atis sirasi Oyuncu-1'de"<<endl;
			cout<<"#######################################################################"<<endl;
			cout<<"\n";
			int kor1, kor2;
			cin >> kor1 >> kor2;
			cin >> kor1 >> kor2;
			if (cin.get() == '\n') {
				Olasilik(random, kor1, kor2);
			}
			/*if (cin.get() == '\n') {
				Olasilik(random, kor1, kor2);
			}*/
		}
		else if (tip == "O" || tip == "o") {
			string bbardaklar[] = { "K","M","x","Y" };
			string random[3][15];
			for (int i = 0; i < 3; i++) {
				for (size_t j = 0; j < 10; j++) {
					random[i][j] = bbardaklar[rand() % 3 + 0];
				}
			}
			for (int i = 0; i < 3; i++) {
				for (size_t j = 0; j < 10; j++) {
					cout <<" "<< random[i][j];
				}
				cout << "\n";
			}
			cout<<"\n";
				cout<<"#######################################################################"<<endl;
			cout<<"Atis yapmak için once raf sonra sirayi belirten sayilari giriniz.\nOyundan cikmak icin X giriniz:"<<endl;
			//cout<<"Atis sirasi Oyuncu-1'de"<<endl;
			cout<<"#######################################################################"<<endl;
			cout<<"\n";
			int kor1, kor2;
			cin >> kor1 >> kor2;
			if (cin.get() == '\n') {
				Olasilik(random, kor1, kor2);
			}
		}
		else if (tip == "k" || tip == "K") {
			string bbardaklar[] = { "K","M","x","Y" };
			string random[3][15];
			for (int i = 0; i < 3; i++) {
				for (size_t j = 0; j < 15; j++) {
					random[i][j] = bbardaklar[rand() % 3 + 0];
				}
			}
			for (int i = 0; i < 3; i++) {
				for (size_t j = 0; j < 15; j++) {
					cout <<" "<< random[i][j];
				}
				cout << "\n";
			}
			cout<<"\n";
			cout<<"#######################################################################"<<endl;
		//	cout<<"Atis sirasi Oyuncu-1'de"<<endl;
			cout<<"Atis yapmak için once raf sonra sirayi belirten sayilari giriniz.\nOyundan cikmak icin X giriniz:"<<endl;
			cout<<"#######################################################################"<<endl;
			cout<<"\n";
			int kor1, kor2;
			cin >> kor1 >> kor2;
			if (cin.get() == '\n') {
				Olasilik(random, kor1, kor2);
			}
		}
	}
};



