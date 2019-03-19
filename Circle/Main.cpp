#include <stdlib.h>
#include <iostream>
#include "glut.h"

#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500
using namespace std;

void RenderScene();

int main() {
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow("simple");
	glMatrixMode(GL_PROJECTION);// sets the current matrix to projection
	glLoadIdentity();//multiply the current matrix by identity matrix
	gluOrtho2D(0, WINDOW_WIDTH, WINDOW_HEIGHT, 0);//sets the parallel(orthographic) projection of the full frame buffer 
	glutDisplayFunc(RenderScene);
	glutMainLoop();
}

void RenderScene()
{

}
