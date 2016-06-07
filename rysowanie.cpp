/*

 C++ przez OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _RYSOWANIE


	/******************* SZABLON **************************/

//double kameraX;
//double kameraY;
//double kameraZ;



	// TEREN	
	// Tekstura podloza jest zapisana w pliku "data/podloze.bmp", definiowana bezpoœrednio w 3ds. 
	// Wymagany format pliku: bmp, 24 bity na pixel.

	//glPolygonMode (GL_FRONT_AND_BACK, GL_LINE);
	/*glPushMatrix();
		glTranslatef(0,1,0);
		rysujModel("teren"); // malowanie pod³o¿a
		rysujModel("niebo"); // malowanie nieba
	glPopMatrix();
	
	*/

glBegin(GL_QUADS);
/* Floor */
for (int i = 0; i < 10; i++) {
	float tmp = i*2;
	float temp = -i * 10;
	glVertex3f(-iloscKrzesel, tmp, temp);
	glVertex3f(iloscKrzesel-5, tmp, temp);
	glVertex3f(iloscKrzesel-5, tmp, temp+10);
	glVertex3f(-iloscKrzesel, tmp, temp+10);

	glVertex3f(-iloscKrzesel, tmp-2, temp+10);
	glVertex3f(iloscKrzesel-5, tmp-2, temp+10);
	glVertex3f(iloscKrzesel-5, tmp, temp+10);
	glVertex3f(-iloscKrzesel, tmp, temp+10);
}

glVertex3f(-iloscKrzesel, 0.5, 50);
glVertex3f(iloscKrzesel - 5, 0.5, 50);
glVertex3f(iloscKrzesel - 5, 0.5, -180);
glVertex3f(-iloscKrzesel, 0.5, -180);

/* Ceiling */
/*glVertex3f(-100, 100, -100);
glVertex3f(100, 100, -100);
glVertex3f(100, 100, 100);
glVertex3f(-100, 100, 100);
/* Walls */
/*przod*/
glVertex3f(-iloscKrzesel, 0, 50);
glVertex3f(iloscKrzesel-5, 0, 50);
glVertex3f(iloscKrzesel-5, 100, 50);
glVertex3f(-iloscKrzesel, 100, 50);
/*tyl*/
glVertex3f(-iloscKrzesel, 0, -180);
glVertex3f(iloscKrzesel-5, 0, -180);
glVertex3f(iloscKrzesel-5, 100, -180);
glVertex3f(-iloscKrzesel, 100, -180);
/*prawa*/
glVertex3f(iloscKrzesel-5, 100, 50);
glVertex3f(iloscKrzesel-5, 0, 50);
glVertex3f(iloscKrzesel-5, 0, -180);
glVertex3f(iloscKrzesel-5, 100, -180);
/*lewa*/
glVertex3f(-iloscKrzesel, 100, 50);
glVertex3f(-iloscKrzesel, 0, 50);
glVertex3f(-iloscKrzesel, 0, -180);
glVertex3f(-iloscKrzesel, 100, -180);

glEnd();
	
	glPushMatrix();

	glTranslatef(0, 0, 0);
	if (iloscKrzesel == 65) {
		for (int i = 0; i < 11; i++) {
			for (int a = 0; a < 10; a++) {
				glPushMatrix();
				glTranslatef((a * 5)+10, i*2, -i*10);
				glRotatef(0, 0, 1, 0);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a * 5)-60, i * 2, -i * 10);
				glRotatef(0, 0, 1, 0);
				rysujModel("fotel");
				glPopMatrix();
			}
		}


	}
	else if (iloscKrzesel == 203) {
		
		
	}
	else {
			glPushMatrix();
			glTranslatef(0, 0, 0);
			//glRotatef(-86, 0, 1, 0);
			rysujModel("fotel");
			glPopMatrix();

			
	}
			
	glPopMatrix();


	// Tu (na koñcu) rysowanie obiektów BLEND
	
	
	/******************************************************/


#undef _RYSOWANIE
#endif
