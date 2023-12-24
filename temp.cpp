#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <math.h>

int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

int refreshMillis = 1000 / 60; // 60 frames per second

void onReshape(int width, int height);
void drawer();
void update(int value);
void Init();


void Draw_Circle(float centerX, float centerY, float radius, float angleStart, float angleEnd, int numSegments);
void Draw_Rectangle(float x, float y, float width, float height);

void display();


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    Init();
    glutMainLoop();

    return 0;
}



void drawer() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    /*

        کشیدن خط در اوپن جی ال
        با استفاده از GL_LINES
        هر دو مختصات برای کشیدن یک خط استفاده میشود
        مختصات اول برای نقطه اول
        مختصات دوم برای نقطه دوم و بعد از مشخص کردن نقطه دوم از نقطه اول به دوم یک خط کشیده میشود

        مختصات های داده شده بعدی دو به دو مشخص میشوند
    */

    // Line
    glColor3ub(0,0,255);
    glBegin(GL_LINES);
    glVertex2f(100,100);
    glVertex2f(150,100);
    glVertex2f(200,200);
    glVertex2f(250,200);
    glVertex2f(300,300);
    glVertex2f(350,300);
    glEnd();

    /*
        کشیدن نقطه در صفحه
        GL_POINTS
        هر مختصات بیانگر موقعیت یک نقطه در روی صفحه است
        تابع glPointSize برای تغییر اندازه نقطه ها

    */
    // Points
    glColor3ub(255,0,25);
    glPointSize(3);
    glBegin(GL_POINTS);
    glVertex2f(100,100);
    glVertex2f(200,200);
    glVertex2f(300,300);
    glVertex2f(400,400);
    glEnd();

    /*
        کشیدن خطوط متصل به هم
        GL_LINE_STRIP
        با استفاده از این وضعیت میتوان مختصات های داده شده را یکی پس از دیگری به هم وصل نمود
        برعکس LINES
        که برای کشیدن خط لازم بود دو به دو مختصات دهیم اینجا هر نقطه به نقطه بعدی وصل میشود


    */

    // line strip
    glColor3ub(0,255,0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(10,0);
    glVertex2f(10,100);
    glVertex2f(20,80);
    glVertex2f(30,100);
    glVertex2f(40,80);
    glVertex2f(50,100);
    glVertex2f(60,80);
    glVertex2f(60,0);

    glVertex2f(10,0);
    glEnd();

    /*
        کشیدن شکل توپر
        GL_POLYGON
        با استفاده از این مورد میتوان شکل توپر رسم کرد
        هر نقطه به نقطه دیگری وصل میشود و یک شکل خواهیم داشت


    */

    // polygon
    glBegin(GL_POLYGON);
    glVertex2f(10+150,0);
    glVertex2f(10+150,100);
    glVertex2f(20+150,80);
    glVertex2f(30+150,100);
    glVertex2f(40+150,80);
    glVertex2f(50+150,100);
    glVertex2f(60+150,80);
    glVertex2f(60+150,0);

    glVertex2f(10+150,0);
    glEnd();


    /*
        کشیدن دایره و دیگر اشکال هندسی
        Draw_Circle
        با این تابع میتوان اشکال هندسی رسم کرد
        Draw_Circle(x,y,shoa,angle start,angle end,zele);
        با دادن شعاع، زاویه شروع، زاویه پایان و تعداد ضلع میتوان اشکال مختلف را رسم کرد


    */
    glColor3ub(255,255,0);
    Draw_Circle(530,506,24,0,360,5);
    Draw_Circle(602,298,32,0,360,8);
    Draw_Circle(314,370,88,0,360,3);

    /*
        کشیدن مستطیل
        با استفاده از تابع
        Draw_Rectangle
        میتوان مستطیل یا مربع کشید
        Draw_Rectangle(x,y,arz,tool);

    */
    glColor3ub(0,0,0);
    Draw_Rectangle(200,500,20,50);
    Draw_Rectangle(250,500,50,50);

    glFlush();
}


void update(int value) {
    glutPostRedisplay();
    glutTimerFunc(refreshMillis, update, 0);
}


// Functions
void Init()
{

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("OpenGL Template | Ali Nakhaee");
    glutDisplayFunc(display);

    // Register the callback function for mouse motion events
    //glutPassiveMotionFunc(onMouseMotion);
    glutReshapeFunc(onReshape); // Register the reshape callback
    //glutMouseFunc(onMouseClick); // Register the mouse click callback

    // Register the callback functions for key press and release events
   // glutKeyboardFunc(onKeyPress);
   // glutKeyboardUpFunc(onKeyRelease);

    // GL INIT
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, SCREEN_WIDTH-1, 0.0, SCREEN_HEIGHT-1);


    glutTimerFunc(0, update, 0); // Start the update function
}
void onReshape(int width, int height) {
    // Update the SCREEN_WIDTH and SCREEN_HEIGHT when the window is resized
    SCREEN_WIDTH = width;
    SCREEN_HEIGHT = height;

    // Set the viewport and projection matrix accordingly
    glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawer();

    glFlush();
}

void Draw_Circle(float centerX, float centerY, float radius, float angleStart, float angleEnd, int numSegments)
{

    const float angleStep = (angleEnd - angleStart) / numSegments;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY); // Center point

    for (int i = 0; i <= numSegments; ++i)
    {
        const float angle = angleStart + i * angleStep;
        const float x = centerX + radius * cos(angle * M_PI / 180.0f);
        const float y = centerY + radius * sin(angle * M_PI / 180.0f);
        glVertex2f(x, y);
    }

    glEnd();

}
void Draw_Rectangle(float x, float y, float width, float height) {
    // Calculate the coordinates of the four corners of the rectangle
    float x1 = x;
    float y1 = y;
    float x2 = x + width;
    float x3 = x;
    float y3 = y + height;
    float x4 = x + width;
    float y4 = y + height;

    glBegin(GL_TRIANGLES);

    // First triangle (top-left, top-right, bottom-left)
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x3, y3);

    // Second triangle (top-right, bottom-left, bottom-right)
    glVertex2f(x2, y1);
    glVertex2f(x3, y3);
    glVertex2f(x4, y4);

    glEnd();
}
