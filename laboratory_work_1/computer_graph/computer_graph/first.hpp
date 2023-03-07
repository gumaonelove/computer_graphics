//
//  first.hpp
//  computer_graph
//
//  Created by Булат Гумеров on 21.02.2023.
//

#ifndef first_hpp
#define first_hpp
#define GL_SILENCE_DEPRECATION

#include <stdio.h>
#include <GLUT/GLUT.h>
#include <cmath>


void init() //Функция инициализации
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-8.0, 8.0, -2.0, 2.0);
}

void draw() //Функция рисования
{
    GLfloat y;
    GLfloat a = 5, b = 3, c = 2, d = 1;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glViewport(0, 0, 640, 480);

    //оси Ox и Oy
    glBegin(GL_LINES);
    glVertex2f(-10.0, 0.0); glVertex2f(10.0, 0.0);
    glVertex2f(0.0, 10); glVertex2f(0.0, -10);
    glEnd();
    
    //график функции y(x)
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_STRIP);
    for (int x = -10; x <= 10; x +=1)
    {
        y = a*x*x*x + b*x*x + c*x + d;
        glVertex2f(x, y);
    }
    glEnd();
    
    
    glFlush();
}


#endif /* first_hpp */
