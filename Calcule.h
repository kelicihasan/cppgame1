#include <string>
#include <iostream>
#include "Util.h"
#include <time.h> 

using namespace std;
class Calcule :public Util
{
	private:
	
public:
	int gamer0,gamer1,counter,stn;
	Calcule(){
		gamer0=0;
		gamer1=0;
		counter=0;
	}
		int Cal(char color) {
			if(color=='k' || color=='K'){
				return 3;
			}else if(color=='y' || color=='Y'){
				return 1;
			}else if(color=='m' || color=='M'){
				return 2;
			}
	}
	int RandSet(int a,int b){
			if(b>a){
			srand(time(0));
				stn = rand()% b+3 + a; 
				return stn;
			}else if(a>b){
				srand(time(0));
					stn = rand()% a+3  + b; 
				return stn;
			}else if(a==b)
				stn = a;
				return stn;
	}
};

