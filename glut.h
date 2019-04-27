#include<stdio.h>
#include<math.h>
#include<glut.h>
int flag=-1,id,id2=0;
void box(int a,int b,int c,int d,int e,int f,int g,int h)
{
	glBegin(GL_POLYGON);
	glVertex2f(a,b);
	glVertex2f(c,d);
	glVertex2f(e,f);
	glVertex2f(g,h);
	glEnd();
}
void line(int a,int b,int c,int d,int e,int f,int g,int h)
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(a,b);
	glVertex2f(c,d);
	glVertex2f(e,f);
	glVertex2f(g,h);
	glEnd();
}

void building()
{
	glColor3f(0.4,0.5,1.0);
	box(200,200,200,600,600,600,600,200);
	box(650,250,650,650,600,600,600,200);
	box(200,600,600,600,650,650,250,650);
	 glColor3f(0.0,0.0,0.0);
	line(200,200,200,600,600,600,600,200);
	line(650,250,650,650,600,600,600,200);
	line(200,600,600,600,650,650,250,650);
//Railings
	glColor3f(0.3,0.3,0.3);
	box(195,575,195,600,605,600,605,575);
	box(195,475,195,500,605,500,605,475);
    box(195,375,195,400,605,400,605,375);
	 glColor3f(0.0,0.0,0.0);
	line(195,575,195,600,605,600,605,575);
	line(195,475,195,500,605,500,605,475);
    line(195,375,195,400,605,400,605,375);
//Side railings
    glColor3f(0.3,0.3,0.3);
	box(605,575,650,630,650,655,605,600);
	box(605,475,650,530,650,555,605,500);
	box(605,375,650,430,650,455,605,400);
	 glColor3f(0.0,0.0,0.0);
	line(605,575,650,630,650,655,605,600);
	line(605,475,650,530,650,555,605,500);
	line(605,375,650,430,650,455,605,400);
	//board
	glColor3f(0.8,1.2,1.2);
	box(295,625,295,645,305,645,305,625);
	box(495,625,495,645,505,645,505,625);
    box(250,635,250,715,550,715,550,635);
	glColor3f(0.0,0.0,0.0);
	line(295,625,295,635,305,635,305,625);
	line(495,625,495,635,505,635,505,625);
    line(250,635,250,715,550,715,550,635);

	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(330,675);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'M');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'U');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'L');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'P');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'L');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'X');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'H');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');

	//door
		glColor3f(0.6,0.9,0.7);
	box(350,200,350,300,450,300,450,200);
	glColor3f(0.0,0.0,0.0);
	glColor3f(0.5,0.8,0.6);
	box(350,290,350,300,450,300,440,290);
	glColor3f(0.5,0.8,0.6);
	box(440,300,450,300,450,200,440,200);
	line(350,200,350,300,450,300,450,200);
}

void car()
{   
	//tires
	glColor3f(0.0,0.0,0.0);
	glPointSize(25.0);
	glBegin(GL_POINTS);
	glVertex2i(685,220);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glPointSize(25.0);
	glBegin(GL_POINTS);
	glVertex2i(745,220);
	glEnd();
//front part
	glColor3f(0.6,0.4,0.2);
	box(670,220,670,265,760,265,760,220);
	glColor3f(0.0,0.0,0.0);
	line(670,220,670,265,760,265,760,220);
	glEnd();
//headlights
	glColor3f(1.0,1.0,0.0);
	glPointSize(20.0);
	glBegin(GL_POINTS);
	glVertex2i(745,235);
	glEnd();
	glColor3f(1.0,1.0,0.0);
	glPointSize(20.0);
	glBegin(GL_POINTS);
	glVertex2i(685,235);
	glEnd();
//mirrors	
	glColor3f(0.0,0.0,0.0);
	glPointSize(15.0);
	glBegin(GL_POINTS);
	glVertex2i(685,305);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glPointSize(15.0);
	glBegin(GL_POINTS);
	glVertex2i(750,305);
	glEnd();
//window with rear
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);
	glVertex2i(760,265);
	glVertex2i(670,265);
	glVertex2i(685,285);
	glVertex2i(750,285);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	line(760,265,670,265,685,285,750,285);
	glColor3f(0.9,0.9,0.9);
	box(685,285,685,330,716,330,716,285);
	glColor3f(0.0,0.0,0.0);
	line(685,285,685,330,716,330,716,285);
	glColor3f(0.9,0.9,0.9);
	box(716,285,716,330,750,330,750,285);
	glColor3f(0.0,0.0,0.0);
	line(716,285,716,330,750,330,750,285);
	glColor3f(0.7,0.5,0.3);
	box(685,330,750,330,750,340,685,340);
	//line over light
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2i(670,260);
	glVertex2i(760,260);
	glEnd();
}
void man()
{
glColor3ub(0,0,0);
	glPushMatrix();	
		glTranslatef(270,105,0);
		glutSolidTorus(1,15,100,90);
	glPopMatrix();
//fill face
	glColor3ub(255,191,128);
	glPushMatrix();	
		glTranslatef(270,105,0);
		glutSolidTorus(7,7,100,90);
	glPopMatrix();
//draw nose  eyebrow	
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
		glVertex2i(270,107);
		glVertex2i(270,100);
 		glVertex2i(261,113);
		glVertex2i(267,113);
 		glVertex2i(273,113);
		glVertex2i(279,113);
	glEnd();
	 // eyes 
	box(263,111,265,111,265,109,263,109);
    box(275,111,277,111,277,109,275,109);
 // mouth
	box(266,97,270,95,274,97,270,95);
 //shirt
    glBegin(GL_POLYGON);
        glColor3ub(55,50,70);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(296,79);
		glVertex2i(291,71);
		glVertex2i(286,75);
		glVertex2i(286,55);
		glVertex2i(254,55);
		glVertex2i(254,75);
		glVertex2i(249,70);
		glVertex2i(244,79);
	glEnd();
//hands
	glColor3ub(255,191,128);
	box(295,78,305,63,297,64,292,72);
	box(305,63,286,48,286,55,297,64);
//hands2
	box(245,78,235,63,243,64,248,72);
	box(235,63,254,48,254,55,243,64);
 // belt
	glColor3ub(100,120,130);
	box(286,55,254,55,254,50,286,50);
// collar
	glBegin(GL_POLYGON);
		glColor3ub(200,140,110);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(276,80);
		glVertex2i(264,80);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3ub(20,140,110);
		glVertex2i(270,87);
		glVertex2i(275,80);
		glVertex2i(265,80);
	glEnd();
// buttons
	glColor3ub(0,0,0);
	glPushMatrix();	
		glTranslatef(270,75,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
		glTranslatef(270,68,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
		glTranslatef(270,61,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
// pant
	glBegin(GL_POLYGON);
		glColor3ub(10,10,10);
		glVertex2i(285,50);
		glVertex2i(254,50);
		glVertex2i(250,15);
		glVertex2i(260,15);
		glVertex2i(263,48);
		glVertex2i(280,15);
		glVertex2i(290,15);
	glEnd();
}
void man1()
{
glColor3f(0.0,0.0,0.0);
	glPushMatrix();	
		glTranslatef(270,105,0);
		glutSolidTorus(1,15,100,90);
	glPopMatrix();
//fill face
	glColor3ub(255,191,128);
	glPushMatrix();	
		glTranslatef(270,105,0);
		glutSolidTorus(7,7,100,90);
	glPopMatrix();
//draw nose  eyebrow	
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
		glVertex2i(270,107);
		glVertex2i(270,100);
 		glVertex2i(261,113);
		glVertex2i(267,113);
 		glVertex2i(273,113);
		glVertex2i(279,113);
	glEnd();
 // eyes 
	box(263,111,265,111,265,109,263,109);
    box(275,111,277,111,277,109,275,109);
 // mouth
	box(266,97,270,95,274,97,270,95);
 //shirt
    glBegin(GL_POLYGON);
        glColor3f(0.7,0.0,0.0);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(296,79);
		glVertex2i(291,71);
		glVertex2i(286,75);
		glVertex2i(286,55);
		glVertex2i(254,55);
		glVertex2i(254,75);
		glVertex2i(249,70);
		glVertex2i(244,79);
	glEnd();
//hands
	glColor3ub(255,191,128);
	box(295,78,305,63,297,64,292,72);
	box(305,63,286,48,286,55,297,64);
//hands2
	box(245,78,235,63,243,64,248,72);
	box(235,63,254,48,254,55,243,64);
 // belt
	glColor3ub(100,120,130);
	box(286,55,254,55,254,50,286,50);
// collar
	glColor3ub(200,140,110);
	box(259,90,281,90,275,80,264,80);
	glBegin(GL_TRIANGLES);
		glColor3ub(20,140,110);
		glVertex2i(270,87);
		glVertex2i(275,80);
		glVertex2i(265,80);
	glEnd();
// buttons
	glColor3ub(0,0,0);
	glPushMatrix();	
		glTranslatef(270,75,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
		glTranslatef(270,68,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
		glTranslatef(270,61,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
// pant
	glBegin(GL_POLYGON);
		glColor3ub(10,10,10);
		glVertex2i(285,50);
		glVertex2i(254,50);
		glVertex2i(250,15);
		glVertex2i(260,15);
		glVertex2i(263,48);
		glVertex2i(280,15);
		glVertex2i(290,15);
	glEnd();
}
void man2()
{
glColor3ub(0,0,0);
	glPushMatrix();	
		glTranslatef(270,105,0);
		glutSolidTorus(1,15,100,90);
	glPopMatrix();
//fill face
	glColor3ub(255,191,128);
	glPushMatrix();	
		glTranslatef(270,105,0);
		glutSolidTorus(7,7,100,90);
	glPopMatrix();
//draw nose  eyebrow	
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
		glVertex2i(270,107);
		glVertex2i(270,100);
 		glVertex2i(261,113);
		glVertex2i(267,113);
 		glVertex2i(273,113);
		glVertex2i(279,113);
	glEnd();
	 // eyes 
	box(263,111,265,111,265,109,263,109);
    box(275,111,277,111,277,109,275,109);
 // mouth
	box(266,97,270,95,274,97,270,95);
 //shirt
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(296,79);
		glVertex2i(291,71);
		glVertex2i(286,75);
		glVertex2i(286,55);
		glVertex2i(254,55);
		glVertex2i(254,75);
		glVertex2i(249,70);
		glVertex2i(244,79);
	glEnd();
//hands
	glColor3ub(255,191,128);
	box(295,78,305,63,297,64,292,72);
	box(305,63,286,48,286,55,297,64);
//hands2
	box(245,78,235,63,243,64,248,72);
	box(235,63,254,48,254,55,243,64);
 // belt
	glColor3ub(100,120,130);
	box(286,55,254,55,254,50,286,50);
// collar
	glBegin(GL_POLYGON);
		glColor3ub(200,140,110);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(276,80);
		glVertex2i(264,80);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3ub(20,140,110);
		glVertex2i(270,87);
		glVertex2i(275,80);
		glVertex2i(265,80);
	glEnd();
// buttons
	glColor3ub(0,0,0);
	glPushMatrix();	
		glTranslatef(270,75,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
		glTranslatef(270,68,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();	
		glTranslatef(270,61,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
// pant
	glBegin(GL_POLYGON);
		glColor3ub(10,10,10);
		glVertex2i(285,50);
		glVertex2i(254,50);
		glVertex2i(250,15);
		glVertex2i(260,15);
		glVertex2i(263,48);
		glVertex2i(280,15);
		glVertex2i(290,15);
	glEnd();
}
void scaleman1()
{
	glPushMatrix();
		glTranslatef(275,495,0);
		glScalef(0.4,0.8,0);
		glTranslatef(-275,-495,0);
		man1();
	glPopMatrix();
}
void scaleman2()
{
	glPushMatrix();
		glTranslatef(775,495,0);
		glScalef(0.4,0.8,0);
		glTranslatef(-775,-495,0);
		man2();
	glPopMatrix();
}
void scaleman()
{
	glPushMatrix();
		glTranslatef(125,200,0);
		glScalef(0.3,0.6,0);
		glTranslatef(-125,-200,0);
		man();
	glPopMatrix();
}
void tsm()
{
	glPushMatrix();
		glTranslatef(165,390,0);
		glScalef(0.4,0.8,0);
		glTranslatef(-165,-390,0);
		man();
	glPopMatrix();
}
void chair()
{
	glColor3f(0.0,0.0,0.0);
    box(95,10,95,15,270,15,270,10);
	box(95,25,95,15,110,15,110,25);
	box(115,25,115,15,130,15,130,25);
	box(135,25,135,15,150,15,150,25);
	box(155,25,155,15,170,15,170,25);
	box(175,25,175,15,190,15,190,25);
	box(195,25,195,15,210,15,210,25);
	box(215,25,215,15,230,15,230,25);
	box(235,25,235,15,250,15,250,25);
	box(255,25,255,15,270,15,270,25);
}
void scalechair()
{
	glPushMatrix();
	glTranslatef(0,265,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,290,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(295,462,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(295,487,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,462,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,487,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(295,265,0);
	chair();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(295,290,0);
	chair();
	glPopMatrix();
}
void stand()
{
	glColor3f(1.0,1.0,1.0);

	box(90,75,90,115,95,115,95,75);
	box(215,75,215,115,220,115,220,75);
	box(80,115,80,120,225,120,225,115);
	box(155,75,155,115,150,115,150,75);
	line(90,75,90,115,95,115,95,75);
	line(215,75,215,115,220,115,220,75);
	line(80,115,80,120,225,120,225,115);
	line(155,75,155,115,150,115,150,75);
}
void stands()
{
	glPushMatrix();
	glTranslatef(295,0,0);
	stand();
	glPopMatrix();
}
void ss()
{
	glPushMatrix();
	glTranslatef(15,15,0);
	stand();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(315,15,0);
	stand();
	glPopMatrix();
}
void theatre(void)
{
	glColor3f(0.4,0.7,1.5);
	box(0,0,0,800,800,800,800,0);
	line(0,0,0,800,800,800,800,0);
	glColor3f(0.7,0.7,0.7);
	box(0,0,0,175,800,175,800,0);
	line(0,0,0,175,800,175,800,0);
	glColor3f(0.3,0.4,1.0);
	box(75,75,650,75,650,650,75,650);
	line(75,75,650,75,650,650,75,650);
	glColor3f(0.2,0.3,1.0);
	box(75,650,125,700,700,700,650,650);
	box(650,75,700,125,700,700,650,650);
    box(355,75,370,75,370,650,355,650);
	box(75,255,75,273,650,273,650,255);
    box(75,453,650,453,650,470,75,470);
	line(75,650,125,700,700,700,650,650);
	line(650,75,700,125,700,700,650,650);
    line(355,75,370,75,370,650,355,650);
	line(75,255,75,273,650,273,650,255);
    line(75,453,650,453,650,470,75,470);
	scalechair();
	
//hindi
	//screen
		glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(95,520);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(95,600);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(270,600);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(270,520);
		glEnd();
	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(175,625);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'H');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'D');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
//english
	//screen
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(390,520);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(390,600);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(565,600);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(565,520);
		glEnd();
	glRasterPos2i(475,625);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'G');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'L');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'S');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'H');
//kannada
    //screen
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(390,323);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(390,403);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(565,403);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(565,323);
		glEnd();
	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(475,428);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'K');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'D');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
//tamil	
	//screen
    glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(95,323);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(95,403);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(270,403);
		glColor3f(0.1,0.1,0.1);
		glVertex2i(270,323);
		glEnd();
	glRasterPos2i(175,428);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'M');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'L');
//ticket counter
	scaleman1();
	ss();
	stand();
	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(175,225);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'C');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'K');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'C');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'U');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
	glColor3f(0.5,0.4,0.4);
    box(355,75,355,150,225,150,225,75);
	line(355,75,355,150,225,150,225,75);
//popcorn counter
	stands();
    scaleman2();
	glColor3f(0.5,0.4,0.4);
    box(650,75,650,150,520,150,520,75);
	line(650,75,650,150,520,150,520,75);
	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(450,225);
	glColor3f(0.0,0.0,0.0);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'P');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'P');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'C');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'C');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'U');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'E');
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
	glFlush();
}
void english()
{
	theatre();
	glPushMatrix();
	glTranslatef(450,385,0);
	scaleman();
    glTranslatef(-450,-385,0);
    glPopMatrix();
	flag=2;
}
void hindi()
{
	theatre();
    glPushMatrix();
	glTranslatef(150,385,0);
	scaleman();
	glTranslatef(-150,-385,0);
	glPopMatrix();
	flag=1;
}
void kannada()
{
	theatre();
	glPushMatrix();
	glTranslatef(450,185,0);
    scaleman();
	glTranslatef(-450,-185,0);
	glPopMatrix();
	flag=4;
}

void tamil()
{
	theatre();
	glPushMatrix();
	glTranslatef(150,185,0);
	scaleman();
	glTranslatef(-150,-185,0);
	glPopMatrix();
	flag=3;
}
void tc()
{
	tsm();
	stand();
}
void popcorn()
{
    theatre();
	glPushMatrix();
	glTranslatef(250,0,0);
	tsm();
	glTranslatef(-250,0,0);
	glPopMatrix();
	stands();
}
void display2(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	flag=0;
	theatre();
	glFlush();
}
void display1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	flag=-1;
	//sky
	glColor3f(0.4,0.7,1.5);
	box(0,0,0,800,800,800,800,0);
	//road
	glColor3f(0.3,0.3,0.3);
	box(0,0,0,150,800,150,800,0);
	//roadstripes
	glColor3f(1.0,1.0,1.0);
	box(0,25,10,50,185,50,175,25);
	box(225,25,235,50,410,50,400,25);
	box(450,25,460,50,635,50,625,25);
	box(675,25,685,50,810,50,800,25);
	glColor3f(0.0,0.0,0.0);
	line(0,25,10,50,185,50,175,25);
	line(225,25,235,50,410,50,400,25);
	line(450,25,460,50,635,50,625,25);
	line(675,25,685,50,810,50,800,25);
	//footboard
	glColor3f(0.7,0.7,0.7);
	box(0,150,0,300,800,300,800,150);
	building();
	//tree
	glColor3f(0.5,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(50,200);
	glVertex2i(50,275);
	glVertex2i(65,275);
	glVertex2i(65,200);
	glEnd();
	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(20,275);
	glVertex2i(90,275);
	glVertex2i(57,310);
	glEnd();
	glColor3f(0.0,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(30,295);
	glVertex2i(85,295);
	glVertex2i(57,330);
	glEnd();
	glColor3f(0.0,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(40,315);
	glVertex2i(75,315);
	glVertex2i(57,345);
	glEnd();
	//tree1
	glColor3f(0.5,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(120,225);
	glVertex2i(135,225);
	glVertex2i(135,300);
	glVertex2i(120,300);
	glEnd();
	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(100,300);
	glVertex2i(155,300);
	glVertex2i(127,350);
	glEnd();
	glColor3f(0.0,0.8,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(105,330);
	glVertex2i(150,330);
	glVertex2i(124,375);
	glEnd();
	glColor3f(0.0,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(110,360);
	glVertex2i(140,360);
	glVertex2i(127,400);
	glEnd();
	
	car();
	
	glPushMatrix();
	glTranslatef(195,105,0);
    tsm();
	glPopMatrix();
	glFlush();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	display1();
}
void mykey(unsigned char key,int x,int y)
{
	
	if((key=='e'||key=='E')&& (flag==0||flag==2))
	english();
	if((key=='h'||key=='H')&& (flag==0||flag==1))
	hindi();
	if((key=='k'||key=='K')&& (flag==0||flag==4))
	kannada();
	if((key=='t'||key=='T')&& (flag==0||flag==3))
	tamil();
    if(key=='x'||key=='X')
	display1();
	if(key=='m'||key=='M')
	{
		id2=1;
	display2();
	tc();
	}
	if(key=='p'||key=='P')
	popcorn();
	glFlush();
}
void mymouse(int button,int state,int x,int y)
{
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{	
		if(id2!=1||id2==2)
		display2();
	}
	
	if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
	{
		id2=2;
		display1();
	}
}
void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,799.0,0.0,799.0);
}
void main(int argc,char **argv)
{
	printf("\nPress left mouse button to view inside multiplexer");
	printf("\nPress 'm' to get inside theatre and go to ticket counter");
	printf("\nPress 'h' to go to hindi movie");
	printf("\nPress 'k' to go to kannada movie");
	printf("\nPress 't' to go to tamil movie");
	printf("\nPress 'e' to go to english movie");
	printf("\nPress 'p' to go to popcorn counter");
	printf("\nPress right mouse button to exit multiplexer");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(800,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Multiplex theatre");
	glutDisplayFunc(display);
	glutKeyboardFunc(mykey);
	glutMouseFunc(mymouse);
	myinit();
	glutMainLoop();
}




