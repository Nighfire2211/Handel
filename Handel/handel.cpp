	#include <iostream>
	#include <math.h>
	#include <iomanip>
	using namespace std;
	
	
	int main()
	{
		//Eingabe
		float listenp; //Listenpreis
		float rabatt;	//Rabatt
		float skonto;	//Skontosatz
		float bk;		//Bezugskosten
		float hks;		//Handlungskostensatz
		float gkz;		//Gewinnzuschlag
		
		//Berechnung
		float zek;//Zieleinkaufspreis
		float bek;	//Bareinkaufpreis
		float bp;//Bezugspreis
		float hk;//Handlungskosten
		float sk;		//Selbstkostenpreis
		float gw;		//Gewinn
		float nvk;		//Barverkaufspreis
		float mw;		//Mehrwertsteuer
		float bvk;		//Bruttoverkaufspreis
		
		//Eingabebildschirm
		cout <<"Handelskalkulation"<< endl;
		cout <<"Geben Sie den Listenpreis(Fliesszahl) ein :\t"<< endl;
		cin >> listenp;
		cout << "Geben Sie den Rabatt (in %) ein :\t"<< endl;
		cin >> rabatt; 
		cout << "Geben Sie den Skonto (in %) ein :\t" << endl;
		cin >> skonto; 
		cout << "Geben Sie die Bezugskosten ein :\t" << endl;
		cin >> bk; 
		cout << "Geben Sie den Handlungskostensatz ( in %) ein :\t" << endl;
		cin >> hks ;
		cout << "Geben Sie den Gewinnzuschlag ein :\t"<< endl;
		cin >> gkz; 
		
		//Ausgabebildschrim
		zek= listenp - (listenp*rabatt/100);	//Zieleinkaufspreis
		bek= zek - (zek*skonto/100);	//Bareinkaufpreis
		bp= bk+bek;	//Bezugspreis
		hk= hks*bp/100;	//Handlungskosten
		sk= hk+bp ;	//Selbstkostenpreis
		gw= gkz*sk/100;		//Gewinn
		nvk= gw+sk;		//Barverkaufspreis
		mw= 16*nvk/100;		//Mehrwertsteuer
		bvk= mw+nvk;		//Bruttoverkaufspreismm
	
		cout <<"Listeneinkaufpreis:\t"<< fixed << setprecision(2) << listenp << " Euro"  <<endl;
		cout <<"Rabatt:\t\t\t" << rabatt * listenp/100 <<  " Euro"<< endl;
		cout << "Zieleinkaufpreis:\t2"<< zek << " Euro"<< endl;
		cout << "Skonto:\t\t\t"<< zek * skonto/100 << "Euro"<< endl;
		cout << "Bareinkaufspreis:\t"<< bek << " Euro"<< endl;
		cout << "Bezugskosten:\t\t"<< bk<< " Euro"<< endl;
		cout << "Bezugspreis:\t\t"<< bp << " Euro"<< endl;
		cout << "Handlungskosten:\t"<< hk << " Euro "<< endl;
		cout << "Selbstkostenpreis:\t"<< sk << " Euro " << endl;
		cout << "Gewinn:\t\t\t"<< gw << " Euro" <<endl;
		cout << "Barverkaufspreis:\t"<< nvk << " Euro" << endl;
		cout << "Mehrwertsteuer(16%):\t"<< mw<<" Euro" << endl;
		cout << "Bruttoverkaufspreis:\t"
		 << bvk << " Euro" << endl;
		
		
		
		
		return 0;
	}
