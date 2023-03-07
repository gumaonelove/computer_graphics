//
//  first.cpp
//  computer_graph
//
//  Created by Булат Гумеров on 21.02.2023.
//

#include "first.hpp"

int main(int argc, char** argv) //Главная функция
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Лабораторная работа 1 задание 1");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
