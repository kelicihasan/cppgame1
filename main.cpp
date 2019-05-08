#include <iostream>
#include "Bardak.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Util utl;
	utl.StartProg(); 
	Bardak brdk;
	string result=utl.TipGet();
	brdk.BardakOlustur(result);
	return 0;
	 
}
