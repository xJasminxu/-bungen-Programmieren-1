

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	float Bogenmass_Ref;
	float Bogenmass_Ptr;
	float Gradmass_Ref;
	float Gradmass_Ptr;
	float Bogenmass = 0.f;
	float Gradmass = 0.f;
	bool Eingabe;
	

	cout << "Bogenmass in Gradmass (0) oder Gradmass in Bogenmass (1)?" << endl;


	
	cin >> Eingabe;
	switch (Eingabe) {
	case 0:
		cout << "Geben sie ein Bogenmass ein!" << endl;
		cin >> Bogenmass;

		Bogenmass_Ref = Bogenmass;
		Bogenmass_Ptr = Bogenmass;

		cout << "Ergebnis = " << RADtoDEG(Bogenmass) << endl;
		RADtoDEGRef(Bogenmass_Ref);
		cout << "Call by Reference = " << Bogenmass_Ref << endl;
		RADtoDEGPoint(&Bogenmass_Ptr);
		cout << "Pointer = " << Bogenmass_Ptr << endl;
		break;

	case 1:
		cout << "Geben sie ein Gradmass ein!" << endl;
		cin >> Gradmass;

		Gradmass_Ref = Gradmass;
		Gradmass_Ptr = Gradmass;

		cout << "Bogenmass = " << DEGtoRAD(Gradmass) << endl;
		DEGtoRADRef(Gradmass_Ref);
		cout << "Call by Reference = " << Gradmass_Ref << endl;
		DEGtoRADRefPoint(&Gradmass_Ptr);
		cout << "Ergebnis über Pointer =  " << Gradmass_Ptr << endl;
		break;

	}

	

}

