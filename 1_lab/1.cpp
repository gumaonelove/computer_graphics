//
// Created by Булат Гумеров on 07.02.2023.
//

#include "GL/glut.h"
void init();
void draw();

int main(int argc, char **argv) //Главная функция
{	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Myprog");
    init( );
    glutDisplayFunc(draw);
    glutMainLoop( );
    return 0;
}

void init() //Функция инициализации
{	glClearColor(1.0, 1.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity( );
    gluOrtho2D(0.0,2.0,0.0,1.0);
}
void draw() //Функция рисования
{	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glViewport(10, 10, 600, 400);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0,  0.0); glVertex2f(0.0, 1.0);
    glVertex2f(2.0, 1.0); glVertex2f(2.0, 0.0);
    glEnd( );
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(1.0, 0.5); glVertex2f(1.1, 0.5);
    glVertex2f(1.1, 0.6); glVertex2f(1.2, 0.6);
    glEnd( );
    glColor3f(0.0, 0.0, 1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2f(0.2,  0.5); glVertex2f(1.8, 0.5);
    glVertex2f(1.0, 0.1); glVertex2f(1.0,  0.9);
    glEnd	( );
    glFlush( );
}
