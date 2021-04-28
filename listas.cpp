#include <iostream>
#include <curses.h>
using namespace std;


int main(){
	int dato = 0;
	cout<<"CODE: "<<endl;
	cin>>dato;
	for(int i = 0; i<dato; i++){
		cout<<"\033[1;31mOK\033[0m"<<"\t"<<i + 2 <<"D"<<0<<"B"<<4<<"C"<<0<<"\t"<<i +70<<"EE"<<000<<"\t"<<i + 30<<"D"<<00<<"\t"<<"AA"<<i + 506<<"A"<<"\t"<<i + 6500<<endl;
	}
	return 1;
}


