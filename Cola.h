#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cola
{
public:
	Cola(){};
	void DibujarCola1(float angulo, int n, float x, float y, float z);
	void DibujarCola2(float angulo, int n, float x, float y, float z);
	void DibujarCola3(float angulo, int n, float x, float y, float z);
};

