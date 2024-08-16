#include "Cola.h"

void Cola::DibujarCola1(float angulo, int n, float x, float y, float z) {
	glPushMatrix();

		glTranslatef(x, y, z);
		glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
		glTranslatef(0.4, 0.0, 0.0); 
		glPushMatrix();
		glScalef(1.0, 1, 1.0);
		glutSolidSphere(0.65, 10, 10);
		glPopMatrix();

		for (int i = 0; i < n; i++) {
			glTranslatef(0.4, 0.0, 0.0);
			glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
			glTranslatef(0.4, 0.0, 0.0);
			glPushMatrix();
			glScalef(1.0, 1, 1.0);
			glutSolidSphere(0.65, 10, 10);
			glPopMatrix();
		}
		for (int i = 0; i < n; i++) {
			glTranslatef(0.4, 0.0, 0.0);
			glRotatef((GLfloat)angulo, 0.0, 1.0, 0.0);
			glTranslatef(0.4, 0.0, 0.0);
			glPushMatrix();
			glScalef(1.0, 1, 1.0);
			glutSolidSphere(0.65, 10, 10);
			glPopMatrix();
		}


	glPopMatrix();
}
/*
void Cola::DibujarCola2(float angulo, int n, float x, float y, float z) {
	glPushMatrix();

	glTranslatef(x, y, z);
	glRotatef((GLfloat)angulo, 1.0, 0.0, 0.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 0.4, 1.0);
	glutSolidSphere(1, 10, 10);
	glPopMatrix();

	for (int i = 0; i < n; i++) {
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)angulo, 1.0, 0.0, 0.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidSphere(1, 10, 10);
		glPopMatrix();
	}


	glPopMatrix();
}
*/
void Cola::DibujarCola3(float angulo, int n, float x, float y, float z) {
	glPushMatrix();

	glTranslatef(x, y, z);
	glRotatef((GLfloat)angulo, 0.0, 1.0, 0.0);
	glTranslatef(0.4, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 1, 1.0);
	glutSolidSphere(0.65, 10, 10);
	glPopMatrix();

	for (int i = 0; i < n; i++) {
		glTranslatef(0.4, 0.0, 0.0);
		glRotatef((GLfloat)angulo, 0.0, 1.0, 0.0);
		glTranslatef(0.4, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 1, 1.0);
		glutSolidSphere(0.65, 10, 10);
		glPopMatrix();
	}

	for (int i = 0; i < n; i++) {
		glTranslatef(0.4, 0.0, 0.0);
		glRotatef((GLfloat)-angulo, 0.0, 0.0, 1.0);
		glTranslatef(0.4, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 1, 1.0);
		glutSolidSphere(0.65, 10, 10);
		glPopMatrix();
	}



	glPopMatrix();
}
