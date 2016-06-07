/*

 C++ przez OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _DEFINICJE


	/******************* SZABLON **************************/

	// DEFINICJE ZMIENNYCH	
	
	// w tablicy s¹ pozycje foteli: {x,y,z,rotacjaY}
float fotel[1][4] = { 0,0,0,0 };
	//,{-15,0,0,0},{-10,0,0,0},{-5,-1,0,0},{0,-1,0,0},{5,-1,0,0 },{10,-1,0,0 },{15,-1,0,0 },{20,-1,0,0 },{25,-1,0,0 }};
	
	int animacjaLisci = 0;
	float posx= 0;
	float posy= 0;

	float mgla = 0;

	int zmienna = 0;


	float lawkaPozycja = 0;
	float lawkaPredkosc = 0;

	int iloscKrzesel = 65;
	
	int iterator = 0;
	/******************************************************/
	bool rysujLawke = true;

#undef _DEFINICJE
#endif
