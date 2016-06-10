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
GLfloat  matSpecular1[4] = { 0,0,0,0 };
GLfloat  matAmbient1[4] = { 0.7,0,0.1,0 };
GLfloat  matDiffuse1[4] = { 0.8,0,0.1,0 };
GLfloat  matEmission1[4] = { 0,0,0,0 };
GLfloat  matShininess1 = 0;

glMaterialfv(GL_FRONT, GL_SPECULAR, matSpecular1);
glMaterialfv(GL_FRONT, GL_AMBIENT, matAmbient1);
glMaterialfv(GL_FRONT, GL_DIFFUSE, matDiffuse1);
glMaterialfv(GL_FRONT, GL_EMISSION, matEmission1);
glMateriali(GL_FRONT, GL_SHININESS, matShininess1);

GLfloat  matSpecular2[4] = { 0,1,0,0 };
GLfloat  matAmbient2[4] = { 0,0,0,0 };
GLfloat  matDiffuse2[4] = { 0,0,0,0 };
GLfloat  matEmission2[4] = { 0,0,0,0 };
GLfloat  matShininess2 = 1;

GLfloat  matSpecular3[4] = { 0,0,0,0 };
GLfloat  matAmbient3[4] = { 0,0,0,0 };
GLfloat  matDiffuse3[4] = { 1,1,1,0 };
GLfloat  matEmission3[4] = { 0,0,0,0 };
GLfloat  matShininess3 = 1;


glBegin(GL_QUADS);
/* rysowanie schodow i podlogi */
for (int i = 0; i < 10; i++) {
	float tmp = i*2;
	float temp = -i * 10;
	glVertex3f(-iloscKrzesel, tmp, temp);
	glVertex3f(iloscKrzesel-5, tmp, temp);
	glVertex3f(iloscKrzesel-5, tmp, temp+10);
	glVertex3f(-iloscKrzesel, tmp, temp+10);

	glVertex3f(-iloscKrzesel, tmp-3, temp+10);
	glVertex3f(iloscKrzesel-5, tmp-3, temp+10);
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

/* rysowanie scian */
	glMaterialfv(GL_FRONT, GL_SPECULAR, matSpecular2);
	glMaterialfv(GL_FRONT, GL_AMBIENT, matAmbient2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, matDiffuse2);
	glMaterialfv(GL_FRONT, GL_EMISSION, matEmission2);
	glMateriali(GL_FRONT, GL_SHININESS, matShininess2);

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

/* ekran */
glMaterialfv(GL_FRONT, GL_SPECULAR, matSpecular3);
glMaterialfv(GL_FRONT, GL_AMBIENT, matAmbient3);
glMaterialfv(GL_FRONT, GL_DIFFUSE, matDiffuse3);
glMaterialfv(GL_FRONT, GL_EMISSION, matEmission3);
glMateriali(GL_FRONT, GL_SHININESS, matShininess3);

glBegin(GL_QUADS);
	glVertex3f(-iloscKrzesel + 15, 10, 49.5);
	glVertex3f(iloscKrzesel - 20, 10, 49.5);
	glVertex3f(iloscKrzesel - 20, 10 + (iloscKrzesel-20), 49.5);
	glVertex3f(-iloscKrzesel + 15, 10 + (iloscKrzesel-20), 49.5);
glEnd();
	
	glPushMatrix();

	glTranslatef(0, 0, 0);
	if (iloscKrzesel == 65) {
		for (int i = 0; i < 11; i++) {
			for (int a = 0; a < 10; a++) {
				glPushMatrix();
				glTranslatef((a * 5)+10, i*2, -i*10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a * 5)-60, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();
			}
		}
	}
	else if (iloscKrzesel == 70) {
		for (int i = 0; i < 11; i++) {
			for (int a = 0; a < 5; a++) {
				glPushMatrix();
				glTranslatef((a * 5) + 40, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef(a * 5, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a * 5) -25, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a * 5) - 65, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();
			}
		}
		
	}
	else if (iloscKrzesel == 30) {
		for (int i = 0; i < 4; i++) {
			for (int a = 0; a < 2; a++) {
				glPushMatrix();
				glTranslatef((a * 5) + 15, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a * 5) - 5, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a * 5) - 25, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();
			}
		}
		for (int a = 0; a < 10; a++) {
			glPushMatrix();
			glTranslatef((a * 5) - 25, 4 * 2, -4 * 10);
			rysujModel("fotel");
			glPopMatrix();
		}

	}

	else if (iloscKrzesel == 60) {
		for (int i = 0; i < 4; i++) {
			for (int a = 0; a < i+2; a++) {

				glPushMatrix();
				glTranslatef((a * 5) - 55, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();

				glPushMatrix();
				glTranslatef((a + 9 - i) * 5, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();
				
			}
			for (int a = 0; a < 2 * (7 - i); a++) {
				glPushMatrix();
				glTranslatef((a - 7 + i) * 5, i * 2, -i * 10);
				rysujModel("fotel");
				glPopMatrix();
			
			}
		}

	}
			
	glPopMatrix();


	// Tu (na koñcu) rysowanie obiektów BLEND
	
	
	/******************************************************/


#undef _RYSOWANIE
#endif
