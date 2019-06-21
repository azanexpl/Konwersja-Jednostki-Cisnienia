#include <stdio.h>
int main()
{
    float a, b, c, d, e; //  Deklaruje zmienne
    int x;

	printf("Witamy w programie ktory zamienia podane przez uzytkownika cisnienie atmosferyczne na wszystkie jednostki\n"); //  Witam uzytkownika
	printf("Prosze podac wartosc cisnienia atmosferycznego: "); //  Pobieram od uzytkownika wartosc cisnienia
	scanf("%f", &a);
	
		while(a<=0)
		{
			printf("Prosze wprowadzic dodatnia wartosc cisnienia atmosferycznego: "); //  Zabezpieczam program przez wprowadzaniem niedodatniej wartosci cisnienia atmosferycznego
			scanf("%f", &a);
		}
	
	printf("Jezeli jednostka podanej wartosci to Paskal[Pa] wpisz 1\n"); //  Przedstawiam uzytkownikowi MENU programu w ktorym to wybiera jednostke dla podanej przez siebie wartosci
	printf("Jezeli jednostka podanej wartosci to Hektopaskal[hPa] wpisz 2\n");
	printf("Jezeli jednostka podanej wartosci to Atmosfera fizyczna[atm] wpisz 3\n");
	printf("Jezeli jednostka podanej wartosci to Bar wpisz 4\n");
	printf("Jezeli jednostka podanej wartosci to Tor[mmHg] wpisz 5\n");
	printf("Wybierz jednostke: ");
	scanf("%i", &x);
	
	switch(x) {           //  Przeliczam podana przez uzytkownika wartosc na cztery inne jednostki cisnienia atmosferycznego
        case 1:
  		    b = a*0.01;         //  Jesli uzytkownik wpisal 1 to uznaje ze jego wartosc jest w Paskalach[Pa]
  		    c = a*0.9869e-5;
  		    d = a*1e-5;
  		    e = a*0.0075006;
 			printf("%f Pa = %f hPa = %f atm = %f Bar = %f mmHg", a, b, c, d, e);
			break;
		case 2:                //  Jesli uzytkownik wpisa³ 2 to uznaje ze jego wartosc jest w Hektopaskalach[hPa]
			b = a*100;
			c = a*0.9869e-3;
			d = a*1e-3;
			e = a*0.75006;
			printf("%f hPa = %f Pa = %f atm = %f Bar = %f mmHg", a, b, c, d, e);
			break; 
		case 3:                //  Jesli uzytkownik wpisa³ 3 to uznaje ze jego wartosc jest w Atmosferach fizycznych[atm]
			b = a*101325;
			c = a*1013.25;
			d = a*1.01325;
			e = a*760;
			printf("%f atm = %f Pa = %f hPa = %f Bar = %f mmHg", a, b, c, d, e);
			break;
		case 4:                //  Jesli uzytkownik wpisa³ 4 to uznaje ze jego wartosc jest w Barach[bar]
			b = a*10e5;
			c = a*10e3;
			d = a*0.98692;
			e = a*750.06;
			printf("%f Bar = %f Pa = %f hPa = %f atm = %f mmHg", a, b, c, d, e);
			break;
		case 5:                //  Jesli uzytkownik wpisa³ 5 to uznaje ze jego wartosc jest w Torach[mmHg]
			b = a*133.3;
			c = a*1.333;
			d = a/760;
			e = a/750.06;
			printf("%f mmHg = %f Pa = %f hPa = %f atm = %f Bar", a, b, c, d, e);
			break;
		default:                //  Zabezpieczam przed wpisaniem przez uzytkownika wartosci innej niz w menu
		printf("Podano zla wartosc, wpisz liczbe od 1 do 5");
		break;
	}

	printf("Dziekuje za skorzystanie z mojego programu\n");       //  zegnam uzytkownika
	printf("Wcisnij dowolny klawisz aby wylaczyc program");
	getch();       //  Wymuszam wcisniecie dowolnego klawisza w celu wylaczenia programu
	return 0;
}
