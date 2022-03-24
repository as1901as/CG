//#include <stdio.h>
//#include <vector>
//#include "GL/freeglut.h"
//#include <math.h>
////#include "CGLab.h"
//
//struct pt { double x; double y; };
//int width = 500, height = 500;
//int arrowIdx = 1;
//double PI = 3.14159265;
//std::vector<pt> pts;
//
//void DrawObject() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glLoadIdentity();
//    glColor3f(1, 0, 0);
//    glScaled(1.0, 0.5, 1.0);
//    glRotatef(300, 0, 0, 1);
//    glTranslated(-0.8, 0, 0);
//    glutWireTeapot(0.3);
//    
//    glLoadIdentity();
//    glTranslated(0, 0, 0);
//    glColor3f(0, 0, 1);
//    glutWireTeacup(0.5);
//
//    glutSwapBuffers();
//}
//
//void Timer(int value) {
//    if (arrowIdx < 50)
//        arrowIdx++;
//    else
//        arrowIdx = 0;
//    glutTimerFunc(30, Timer, 1);
//}
//void KeyDown(unsigned char key, int x, int y)
//{
//    switch (key) {
//    case 'p': case 'P':
//        printf("Hello world!\n");
//        break;
//    }
//    glutPostRedisplay();
//}
//void KeySpecial(int key, int x, int y)
//{
//    switch (key) {
//    case GLUT_KEY_UP:
//        arrowIdx++;
//        break;
//    case GLUT_KEY_DOWN:
//        arrowIdx--;
//        break;
//    }
//    glutPostRedisplay();
//}
//void Mouse(int button, int state, int x, int y)
//{
//    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
//        printf("Mouse Click (%d %d)\n", x, y);
//
//    glutPostRedisplay();
//}
//void Motion(int x, int y)
//{
//    printf("Mouse motion (%d %d)\n", x, y);
//
//    double xd, yd;
//    xd = x / 500.0 * 4.0 - 2.0;
//    yd = y / 500.0 * 4.0 - 2.0;
//    yd *= -1.0;
//
//    glutPostRedisplay();
//}
//void Init()
//{
//    glViewport(0, 0, width, height);
//    glClearColor(1.0, 1.0, 1.0, 1.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
//}
//
//int main(int argc, char** argv) {
//    int mode = GLUT_RGB | GLUT_DOUBLE;
//
//    glutInit(&argc, argv);
//    glutInitDisplayMode(mode);
//    glutInitWindowPosition(300, 300);
//    glutInitWindowSize(500, 500);
//    glutCreateWindow("OpenGL");
//    glutSetWindowTitle("DAU CG");
//
//    Init();
//    glutDisplayFunc(DrawObject);
//    glutKeyboardFunc(KeyDown);
//    glutMouseFunc(Mouse);
//    glutSpecialFunc(KeySpecial);
//    glutMotionFunc(Motion);
//    glutIdleFunc(DrawObject);
//    glutTimerFunc(1, Timer, 1);
//    glutMainLoop();
//}