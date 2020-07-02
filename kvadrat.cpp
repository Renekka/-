#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.75, 0.79);    //розовый
    glVertex3f(0.5, -0.5, -0.5);
    glColor3f(0.0, 1.0, 0.0);    //зеленый
    glVertex3f(0.5, 0.5, -0.5);
    glColor3f(0.0, 0.0, 1.0);    //голубой
    glVertex3f(-0.5, 0.5, -0.5);
    glColor3f(1.0, 0.3, 0.0);     //оранжевый
    glVertex3f(-0.5, -0.5, -0.5);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

void main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(500, 220);
    glutCreateWindow("ЦВЕТНОЙ КВАДРАТИК");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutMainLoop();
}
