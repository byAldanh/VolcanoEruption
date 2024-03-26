#include <GL\glew.h>
#include <stdlib.h>
#include <GL\glut.h>
#include <GL\freeglut.h>
#include <iostream>
#include <stdio.h>
using namespace std;


//for volcano details animation 
float transValue;
float scaleValue;

//for smoke animation 
float transValue2;
float scaleValue2;
float transValue3;
float scaleValue3;

//for fire animation 
float transValue4;

//for smoke animation 
float transValue5;

//for fire animation 
float transValue6;
float transValue7;

float PI = 22 / 7.0, r = 5;

void drawOvalSahpe(float x, float y, float dx, float dy) {

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.9, 0.7, 0.4);
	glVertex2f(x, y);
	for (float i = 0; i <= 2 * PI; i += PI / 500)
		glVertex2f(x + cos(i) * r / dy, y + sin(i) * r / dx);
	glEnd();
}
void init() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION); // set the projection parameters
	glOrtho(-100, 100, -100, 100, 0, 1);

}
void reshapeFunc(GLint new_width, GLint new_hight)
{

	glViewport(0,0,1700,990);
}


void smoke() {
	glLineWidth(20);
	glBegin(GL_LINE_LOOP);
	glColor3ub(115, 119, 122);
	glVertex2f(39.0f, 38.5f);
	glVertex2f(40.0f, 40.2f);
	glVertex2f(43.0f, 41.5f);
	glVertex2f(46.0f, 42.0f);
	glVertex2f(50.0f, 43.0f);
	glVertex2f(54.0f, 43.2f);
	glVertex2f(59.0f, 43.9f);
	glVertex2f(62.0f, 44.0f);
	glVertex2f(68.0f, 44.0f);
	glVertex2f(73.0f, 43.8f);
	glVertex2f(83.0f, 43.2f);
	glVertex2f(85.0f, 43.0f);
	glVertex2f(88.0f, 42.5f);
	glVertex2f(90.0f, 42.0f);
	glVertex2f(94.0f, 41.0f);
	glVertex2f(96.0f, 40.0f);
	glVertex2f(97.0f, 38.0f);
	///
	glColor3ub(69, 70, 71);
	glVertex2f(91.0f, 35.0f);
	glVertex2f(88.0f, 34.0f);
	glVertex2f(81.0f, 33.0f);
	glVertex2f(74.0f, 32.5f);
	glVertex2f(66.0f, 32.5f);
	glVertex2f(59.0f, 32.9f);
	glVertex2f(55.0f, 33.0f);
	glVertex2f(52.0f, 33.5f);
	glVertex2f(49.0f, 33.9f);
	glVertex2f(46.0f, 34.2f);
	glVertex2f(43.0f, 35.0f);
	glVertex2f(41.0f, 37.0f);
	glVertex2f(41.0f, 37.5f);
	glVertex2f(39.0f, 38.5f);
	glEnd();
}
//////////////////////////*backGraund*//////////////////////////
void backGraund() {
		glBegin(GL_QUADS);
		glColor4f(0.0f, 0.0f, 0.0f, 0.3);
		glVertex2f(-99.0f, 99.0f);
		glColor4f(0.0f, 0.0f, 0.0f, 0.3);
		glVertex2f(99.0f, 99.0f);
		glColor4f(0.8f, 0.0f, 0.1f, 0.1);
		glVertex2f(99.0f, -99.0f);
		glColor4f(0.4f, 0.0f, 0.1f, 0.1);
		glVertex2f(-99.0f, -99.0f);
		glEnd();


		glBegin(GL_QUADS);
		glColor3f(0.3, 0.0, 0.0);//COLOR 3
		glVertex2f(-99.0f, -55.0f);
		glVertex2f(100.0f, -55.0f);
		glColor3f(0.0, 0.0, 0.0);//COLOR 3
		glVertex2f(100.0f, -100.0f);
		glVertex2f(-99.0f, -100.0f);
		glEnd();
	}
////////////////////////////*Drips*/////////////////////////////
void VolcanoDrip1() {
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.4, 0.2);
	glVertex2f(-93.7, 1);
	glVertex2f(-94, -1.8);
	glVertex2f(-94.2, -3);
	glVertex2f(-93.8, -3.5);
	glVertex2f(-94, -4.3);
	glColor3f(0.9, 0.6, 0.2);//yellow
	glVertex2f(-94.4, -5);
	glVertex2f(-94.8, -6);
	glVertex2f(-95, -7);
	glVertex2f(-95.5, -9);
	glVertex2f(-96, -10.5);
	glVertex2f(-96, -12.4);
	glVertex2f(-96.3, -14);
	glVertex2f(-95.8, -15.2);
	glVertex2f(-95.5, -16.3);
	glVertex2f(-94.2, -15.8);
	glVertex2f(-94, -14);
	glVertex2f(-94.3, -12.3);
	glVertex2f(-93.4, -11);
	glVertex2f(-93, -10);
	glVertex2f(-93.4, -8.5);
	glVertex2f(-93, -7);

	glVertex2f(-94.2, -6.5);
	glVertex2f(-93.5, -6);
	glColor3f(0.9, 0.4, 0.2);
	glVertex2f(-93.2, -5);
	glVertex2f(-93, -3);
	glVertex2f(-92.3, -1);
	glVertex2f(-91.5, 1);
	glEnd();//the end of the shape 
}
void VolcanoDrip2()
{
	//3:  
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.4, 0.2);
	glVertex2f(-86, 1);
	glVertex2f(-85.7, -1);
	glVertex2f(-86, -2);
	glVertex2f(-86.3, -2.8);
	glVertex2f(-86.5, -1.3);
	glVertex2f(-86.2, -5);
	glColor3f(0.9, 0.6, 0.2);//yellow
	glVertex2f(-86.8, -6.2);
	glVertex2f(-87, -7.3);
	glVertex2f(-86.5, -8.2);
	glVertex2f(-87, -10);
	glVertex2f(-86.5, -10);
	glVertex2f(-86, -10.7);
	glVertex2f(-85.5, -10.2);
	glVertex2f(-85, -9);
	glColor3f(0.9, 0.4, 0.2);
	glVertex2f(-84, -7.3);
	glVertex2f(-83.8, -6.2);
	glVertex2f(-83.5, -4);
	glVertex2f(-83.8, -3);
	glVertex2f(-83.7, -1.5);
	glVertex2f(-83, 1);

	glEnd();//the end of the shape 

	// below the volcano 
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.4, 0.2);
	glVertex2f(-53, -36);
	glVertex2f(-54, -36.2);
	glVertex2f(-56, -37);
	glVertex2f(-64, -35.7);
	glVertex2f(-68, -36.5);
	glVertex2f(-70, -37.5);
	glVertex2f(-77, -38);
	glVertex2f(-86, -37);
	glVertex2f(-90, -36);
	glVertex2f(-95, -35.5);
	glColor3f(0.9, 0.6, 0.2);//yellow
	glVertex2f(-100, -35.5);
	glVertex2f(-97.5, -36);
	glVertex2f(-96.5, -38);
	glVertex2f(-96, -40.8);
	glVertex2f(-95.5, -43);
	glVertex2f(-94.5, -45.4);
	glVertex2f(-92, -45);
	glVertex2f(-90, -44.5);
	glVertex2f(-87.2, -44.8);
	glVertex2f(-86, -45);
	glVertex2f(-84.5, -45.5);
	glVertex2f(-82, -45.9);
	glVertex2f(-80, -45.4);//
	glVertex2f(-77, -46);
	glVertex2f(-75.8, -46.2);
	glVertex2f(-74, -46.7);
	glVertex2f(-72.3, -46.5);
	glVertex2f(-69.8, -47);
	glVertex2f(-68, -48);
	glVertex2f(-65.8, -47.5);
	glVertex2f(-63.8, -47.2);
	glVertex2f(-62.2, -46);
	glVertex2f(-61.3, -45);
	glVertex2f(-60, -43.9);
	glVertex2f(-59.5, -43.2);
	glVertex2f(-57.9, -43.5);
	glVertex2f(-56.5, -44.5);
	glVertex2f(-55, -44.8);
	glVertex2f(-51.5, -45.5);
	glVertex2f(-50.3, -44);
	glVertex2f(-51, -43);
	glVertex2f(-51.5, -36.5);
	glVertex2f(-50, -35.8);
	glVertex2f(-49, -34.8);
	glVertex2f(-49.6, -33.7);
	glVertex2f(-51, -34);
	glVertex2f(-55, -31);
	glVertex2f(-53, -36);
	glEnd();

}//the dn of the method
//////////////////////////*small volcano*///////////////////////
void smallOne(){
	glBegin(GL_POLYGON);
	glColor3ub(64, 36, 15);
	glVertex2f(-68.0, -14.0);
	glVertex2f(-52.0, -10.0);


	glColor3f(0.0, 0.0, 0.0)
		; glVertex2f(-50.0, 6.0);
	glVertex2f(-43.0, 4.0);
	glVertex2f(-35.0, 6.0);


	glColor3ub(64, 36, 15);
	glVertex2f(-24.0, -10.0);
	glVertex2f(-19.0, -16.0);
	glVertex2f(-16.0, -27.0);
	glVertex2f(-62.0, -27.0);
	glVertex2f(-68.0, -14.0);
	glEnd();
}
void smallhole() {
	glBegin(GL_POLYGON);



	glColor3ub(64, 36, 15);
	glVertex2f(-49.0, 3.0);
	glColor3ub(0, 0, 0);
	glVertex2f(-49.0, 7);
	glVertex2f(-49.0, 6.5);
	glVertex2f(-47.0, 7);
	glVertex2f(-37, 7);
	glVertex2f(-36, 6.5);

	glColor3ub(64, 36, 15);

	glColor3ub(0, 0, 0);
	glVertex2f(-33.0, 3.0);
	glEnd();

}
void smallDetalis() {

	glPushMatrix();
	glTranslatef(37, 4, 0);
	VolcanoDrip2();
	glPopMatrix();

	/// /////////////////////////
	glPushMatrix();
	glTranslatef(0, -4, 0);

	/// ///////////////////////

	glPushMatrix();
	glTranslatef(36.5, 4, 0);
	VolcanoDrip2();
	glPopMatrix();
	/// //
	glPopMatrix();
}
/////////////////////////*volcanos*/////////////////////////////
void Struct() {
	glBegin(GL_POLYGON);
	//big front volcano
	//volcano body
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(100.0f, 31.0f);
	glVertex2f(99.0f, 39.0f);//
	glVertex2f(81.0f, 33.0f);
	glVertex2f(80.0f, 32.0f);
	glVertex2f(77.0f, 29.0f);
	glVertex2f(75.5f, 31.0f);
	glVertex2f(74.0f, 31.5f);
	glVertex2f(73.0f, 30.0f);
	glVertex2f(69.0f, 33.0f);
	glVertex2f(64.0f, 29.0f);
	glVertex2f(63.0f, 31.0f);
	glVertex2f(60.0f, 28.0f);
	glVertex2f(59.0f, 29.0f);
	glVertex2f(57.0f, 28.0f);
	glVertex2f(49.0f, 25.0f);
	glVertex2f(49.0f, 23.0f);
	glVertex2f(48.0f, 23.0f);
	glVertex2f(46.0f, 24.0f);
	glVertex2f(44.0f, 19.0f);
	glVertex2f(41.0f, 19.5f);
	glVertex2f(42.0f, 22.0f);
	glVertex2f(43.0f, 24.0f);
	glVertex2f(42.0f, 26.0f);
	glVertex2f(40.0f, 25.0f);
	glVertex2f(38.0f, 38.0f);//
	glVertex2f(36.0f, 24.0f);
	glVertex2f(34.0f, 20.0f);
	glVertex2f(33.0f, 16.0f);
	glVertex2f(30.0f, 11.0f);
	glVertex2f(27.0f, 7.0f);
	glVertex2f(23.0f, 4.0f);
	glVertex2f(20.0f, 0.0f);
	glVertex2f(18.0f, -3.0f);
	glVertex2f(-12.0f, -28.0f);
	glVertex2f(-74.0f, -52.0f);
	glVertex2f(-59.0f, -58.0f);
	glVertex2f(100.0f, -58.0f);
	glEnd();
}
void LeftMostVolcano()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-96, 0.5);
	glVertex2f(-94.5, 1.3);
	glVertex2f(-93, 1.5);
	glVertex2f(-91.5, 1.8);
	glVertex2f(-88, 1.8);
	glVertex2f(-86.5, 1.5);
	glVertex2f(-84.5, 1.3);
	glVertex2f(-83, 1.1);
	glVertex2f(-81.5, 1.0);
	glVertex2f(-80, 0.5);
	glVertex2f(-80, -0.5);
	glVertex2f(-81.5, -1.0);
	glVertex2f(-83, -1.1);
	glVertex2f(-84.5, -1.3);
	glVertex2f(-86.5, -1.5);
	glVertex2f(-88, -1.8);
	glVertex2f(-91.5, -1.8);
	glVertex2f(-93, -1.5);
	glVertex2f(-94.5, -1.3);
	glVertex2f(-96, -0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(-80, 0.5);
	glVertex2f(-78.8, 0.5);
	glVertex2f(-78.2, -1);
	glVertex2f(-76.7, -3);
	glVertex2f(-75, -4.5);
	glVertex2f(-74.5, -6.3);
	glVertex2f(-71, -10);
	glVertex2f(-70.5, -11);
	glVertex2f(-68, -14);
	glVertex2f(-67.5, -14.5);
	glVertex2f(-66.5, -16.5);
	glVertex2f(-64.2, -19.7);
	glVertex2f(-63, -21);
	glVertex2f(-60, -25);
	glVertex2f(-59, -25.5);
	glVertex2f(-56, -29.5);
	glVertex2f(-55, -31);
	glVertex2f(-53, -36);
	glVertex2f(-54, -36.2);
	glVertex2f(-56, -37);
	glVertex2f(-64, -35.7);
	glVertex2f(-68, -36.5);
	glVertex2f(-70, -37.5);
	glVertex2f(-77, -38);
	glVertex2f(-86, -37);
	glVertex2f(-90, -36);
	glVertex2f(-95, -35.5);
	glVertex2f(-100, -35.5);
	glVertex2f(-98, -4);
	glVertex2f(-97, -3);
	glVertex2f(-96.5, -2);
	glVertex2f(-96, 0.5);
	glVertex2f(-80, 0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-98, -36);
	glVertex2f(-94, -31);
	glVertex2f(-92, -30);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(-90.5, -30.7);
	glVertex2f(-88, -32);
	glVertex2f(-86, -34);
	glVertex2f(-84, -33.5);
	glVertex2f(-83, -32);
	glVertex2f(-81, -29);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(-78.8, -27);
	glVertex2f(-76, -27.3);
	glVertex2f(-74, -28);
	glVertex2f(-73, -30);
	glVertex2f(-71.5, -31.5);
	glVertex2f(-70, -33);
	glVertex2f(-68.3, -32.5);
	glVertex2f(-67, -32);
	glColor3f(0.2f, 0.1f, 0.0f);
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(-65, -30.6);
	glVertex2f(-63.8, -29.5);
	glVertex2f(-61.8, -29.2);
	glVertex2f(-60, -30.5);
	glVertex2f(-59, -31.5);
	glVertex2f(-57.5, -32);
	glVertex2f(-56, -31.5);
	glVertex2f(-55, -31);
	glVertex2f(-53, -36);
	glVertex2f(-54, -36.2);
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(-56, -37);
	glVertex2f(-64, -35.7);
	glVertex2f(-68, -36.5);
	glVertex2f(-70, -37.5);
	glVertex2f(-77, -38);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-86, -37);
	glVertex2f(-90, -36);
	glVertex2f(-95, -35.5);
	glVertex2f(-98, -36);
	glEnd();
}//the end of the method
////////////////////////*floor*/////////////////////////////////
void floor() {
	glBegin(GL_POLYGON);
glColor3f(0.9, 0.4, 0.2);
glVertex2f(-89.0f, -55.0f);
glColor3f(0.9, 0.6, 0.2);
glVertex2f(42.0f, -55.0f);
glVertex2f(68.0f, -56.0f);
glVertex2f(89.0f, -55.0f);
glVertex2f(87.0f, -58.0f);
glVertex2f(90.0f, -61.0f);
glColor3f(0.9, 0.6, 0.2);
glVertex2f(83.0f, -62.0f);
glVertex2f(86.0f, -66.0f);
glVertex2f(83.0f, -70.0f);
glVertex2f(80.0f, -74.0f);
glVertex2f(78.0f, -76.0f);
glVertex2f(76.0f, -77.0f);
glVertex2f(74.0f, -74.0f);
glVertex2f(73.0f, -76.0f);
glVertex2f(72.0f, -78.0f);
glVertex2f(69.0f, -80.0f);
glVertex2f(66.0f, -77.0f);
glColor3f(0.9, 0.6, 0.2);
glVertex2f(64.0f, -76.0f);
glVertex2f(62.0f, -81.0f);
glVertex2f(58.0f, -86.0f);
glVertex2f(56.0f, -89.0f);
glVertex2f(51.0f, -87.0f);
glVertex2f(46.0f, -88.0f);
glVertex2f(41.0f, -88.0f);
glVertex2f(34.0f, -89.0f);
glVertex2f(29.0f, -91.0f);
glVertex2f(27.0f, -100.0f);
glVertex2f(-50.0f, -100.0f);
glVertex2f(-60.0f, -94.0f);
glVertex2f(-61.0f, -93.0f);
glVertex2f(-60.0f, -91.0f);
glVertex2f(-61.0f, -91.0f);
glVertex2f(-63.0f, -90.0f);
glVertex2f(-65.0f, -90.0f);
glVertex2f(-67.0f, -90.0f);
glVertex2f(-69.0f, -88.0f);
glVertex2f(-70.0f, -87.0f);
glVertex2f(-75.0f, -84.0f);
glVertex2f(-81.0f, -80.0f);
glVertex2f(-83.0f, -80.0f);
glVertex2f(-85.0f, -79.0f);
glVertex2f(-86.0f, -76.0f);
glVertex2f(-87.0f, -74.0f);
glColor3f(0.9, 0.4, 0.2);
glVertex2f(-89.0f, -55.0f);
glEnd();
}
///////////////////////////*فوهة البركان*///////////////////////
void crater() {
	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.1f, 0.0f);
	glVertex2f(39.0f, 38.5f);
	glVertex2f(40.0f, 40.2f);
	glVertex2f(43.0f, 41.5f);
	glVertex2f(46.0f, 42.0f);
	glVertex2f(50.0f, 43.0f);
	glVertex2f(54.0f, 43.2f);
	glVertex2f(59.0f, 43.9f);
	glVertex2f(62.0f, 44.0f);
	glVertex2f(68.0f, 44.0f);
	glVertex2f(73.0f, 43.8f);
	glVertex2f(83.0f, 43.2f);
	glVertex2f(85.0f, 43.0f);
	glVertex2f(88.0f, 42.5f);
	glVertex2f(90.0f, 42.0f);
	glVertex2f(94.0f, 41.0f);
	glVertex2f(96.0f, 40.0f);
	glVertex2f(97.0f, 38.0f);
	///
	glColor3f(0.0, 0.0, 0.0);//COLOR 2
	glVertex2f(91.0f, 35.0f);
	glVertex2f(88.0f, 34.0f);
	glVertex2f(81.0f, 33.0f);
	glVertex2f(74.0f, 32.5f);
	glVertex2f(66.0f, 32.5f);
	glVertex2f(59.0f, 32.9f);
	glVertex2f(55.0f, 33.0f);
	glVertex2f(52.0f, 33.5f);
	glVertex2f(49.0f, 33.9f);
	glVertex2f(46.0f, 34.2f);
	glVertex2f(43.0f, 35.0f);
	glVertex2f(41.0f, 37.0f);
	glVertex2f(41.0f, 37.5f);
	glVertex2f(39.0f, 38.5f);
	glEnd();
}
/////////////////////////*gray boom*////////////////////////////
void boom() {
	glBegin(GL_POLYGON);
	glColor3ub(69, 70, 71);
	glVertex2f(56.0f, 56.0f);
	glVertex2f(60.0f, 60.0f);
	glVertex2f(49.0f, 55.0f);
	glVertex2f(39.0f, 70.0f);
	glVertex2f(36.0f, 64.0f);
	glVertex2f(38.0f, 80.0f);
	glColor3ub(115, 119, 122);

	glVertex2f(44.0f, 82.0f);
	glVertex2f(46.0f, 90.0f);
	glVertex2f(54.0f, 96.0f);
	glVertex2f(63.0f, 92.0f);
	glVertex2f(66.0f, 96.0f);
	glVertex2f(72.0f, 93.0f);
	glVertex2f(79.0f, 96.0f);
	glVertex2f(89.0f, 90.0f);
	glVertex2f(94.0f, 92.0f);
	glVertex2f(99.0f, 81.0f);
	//glColor3f(154,155,156);
	glVertex2f(96.0f, 70.0f);
	//glColor3f(74,77,79);
	glVertex2f(93.0f, 67.0f);
	glVertex2f(94.0f, 63.0f);
	glVertex2f(84.0f, 54.0f);
	glVertex2f(78.0f, 59.0f);
	glVertex2f(68.0f, 33.0f);
	glVertex2f(50.0f, 29.0f);
	glEnd();
}
///////////////////////*layers*/////////////////////////////////
void layers() {

	glColor3f(0.6, 0.2, 0.2);//COLOR 3
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.0, 0);
	glVertex2f(85.0f, -58.0f);
	glVertex2f(75.0f, -35.0f);
	glVertex2f(67.0f, 32.0f);


	glColor3f(235, 110 / 255.0, 52 / 255.0);
	glVertex2f(51.0f, 27.0f);
	glVertex2f(47.0f, 15.0f);
	glColor3f(0.6, 0.2, 0.2);
	glVertex2f(42.0f, 0.0f);
	glColor3f(235, 110 / 255.0, 52 / 255.0);
	glVertex2f(20.0f, -36.0f);
	glColor3f(0.6, 0.2, 0.2);
	glVertex2f(6.0f, -58.0f);
	glVertex2f(43.0f, -58.0f);
	glEnd();


	// Layer 1
	glBegin(GL_POLYGON);

	glColor3f(0.5, 0.4, 0.3);
	glVertex2f(52.0f, 28.0f);
	glVertex2f(40.0f, 30.0f);
	glVertex2f(32.0f, 15.0f);
	glVertex2f(47.0f, 15.0f);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.5, 0.4, 0.3);
	glVertex2f(67.0f, 32.0f);
	glVertex2f(99.0f, 32.0f);
	glVertex2f(99.0f, 14.0f);
	glVertex2f(69.0f, 15.0f);

	glEnd();

	// Layer 2
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.4, 0.3);
	glVertex2f(32.0f, 15.0f);
	glVertex2f(47.0f, 15.0f);
	glVertex2f(42.0f, 0.0f);
	glVertex2f(20.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.4, 0.3);
	glVertex2f(99.0f, 14.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(71.0f, 0.0f);
	glVertex2f(99.0f, -1.0f);
	glEnd();


	// Layer 3
	glBegin(GL_POLYGON);

	glColor3f(0.8, 0.6, 0.4);
	glVertex2f(42.0f, 0.0f);
	glVertex2f(20.0f, 0.0f);
	glVertex2f(-33.0f, -33.0f);
	glVertex2f(20.0f, -36.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.4);
	glVertex2f(71.0f, 0.0f);
	glVertex2f(99.0f, -1.0f);
	glVertex2f(99.0f, -36.0f);
	glVertex2f(75.0f, -35.0f);
	glEnd();

	glColor4f(0.9, 0.7, 0.4, 0.3);
	drawOvalSahpe(80, -25, 2, 1);
	drawOvalSahpe(90, -18, 3, 1);
	drawOvalSahpe(80, -15, 2, 1);
	drawOvalSahpe(90, -29, 3, 1);
	drawOvalSahpe(90, -10, 3, 1);


	drawOvalSahpe(20, -25, 2, 1);
	drawOvalSahpe(10, -18, 3, 1);
	drawOvalSahpe(20, -15, 2, 1);
	drawOvalSahpe(10, -29, 3, 1);
	drawOvalSahpe(10, -10, 3, 1);

	// Layer 4
	glBegin(GL_POLYGON);

	glColor3f(0.7, 0.5, 0.3);
	glVertex2f(-33.0f, -33.0f);
	glVertex2f(20.0f, -36.0f);
	glVertex2f(6.0f, -58.0f);
	glVertex2f(-60, -58.0f);
	glVertex2f(-76.0f, -52.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.5, 0.3);
	glVertex2f(99.0f, -36.0f);
	glVertex2f(75.0f, -35.0f);
	glVertex2f(85.0f, -58.0f);
	glVertex2f(99.0f, -58.0f);
	glEnd();


	glColor3f(0.9, 0.7, 0.5);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(12.0f, -40.0f);
	glVertex2f(-3.0f, -40.0f);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-15.0f, -45.0f);

	glVertex2f(-35.0f, -45.0f);
	glEnd();


	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-43.0f, -49.0f);
	glVertex2f(-55.0f, -49.0f);
	glEnd();


	glEnd();

	glColor4f(0.9, 0.7, 0.4, 0.3);
	drawOvalSahpe(80, -25, 2, 1);
	drawOvalSahpe(90, -18, 3, 1);
	drawOvalSahpe(80, -15, 2, 1);
	drawOvalSahpe(90, -29, 3, 1);
	drawOvalSahpe(90, -10, 3, 1);


	drawOvalSahpe(20, -25, 2, 1);
	drawOvalSahpe(10, -18, 3, 1);
	drawOvalSahpe(20, -15, 2, 1);
	drawOvalSahpe(10, -29, 3, 1);
	drawOvalSahpe(10, -10, 3, 1);

	// Layer 4
	glBegin(GL_POLYGON);

	glColor3f(0.7, 0.5, 0.3);
	glVertex2f(-33.0f, -33.0f);
	glVertex2f(20.0f, -36.0f);
	glVertex2f(6.0f, -58.0f);
	glVertex2f(-60, -58.0f);
	glVertex2f(-76.0f, -52.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.5, 0.3);
	glVertex2f(99.0f, -36.0f);
	glVertex2f(75.0f, -35.0f);
	glVertex2f(85.0f, -58.0f);
	glVertex2f(99.0f, -58.0f);
	glEnd();


	glColor3f(0.9, 0.7, 0.5);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(12.0f, -40.0f);
	glVertex2f(-3.0f, -40.0f);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-15.0f, -45.0f);

	glVertex2f(-35.0f, -45.0f);
	glEnd();


	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-43.0f, -49.0f);
	glVertex2f(-55.0f, -49.0f);
	glEnd();


	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-29.0f, -39.0f);
	glVertex2f(-43.0f, -39.0f);
	glEnd();



	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-5.0f, -53.0f);
	glVertex2f(-19.0f, -53.0f);
	glEnd();


	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-24.0f, -56.0f);
	glVertex2f(-37.0f, -56.0f);
	glEnd();



	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-21.0f, -36.0f);
	glVertex2f(-9.0f, -36.0f);
	glEnd();



	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(80.0f, -39.0f);
	glVertex2f(92.0f, -39.0f);
	glEnd();


	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(86.0f, -45.0f);
	glVertex2f(98.0f, -45.0f);
	glEnd();


	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(84.0f, -53.0f);
	glVertex2f(93.0f, -53.0f);
	glEnd();
}
///////////////////////*Warning*////////////////////////////////
void Warning(){
//the square1
glBegin(GL_QUADS);
glColor3f(0.9, 0.5, 0.0);
glVertex2f(-94, -49);
glVertex2f(-71, -49);
glVertex2f(-71, -70);
glVertex2f(-94, -70);
glEnd();
////the square2 
glBegin(GL_QUADS);
glColor3f(0.9, 0.8, 0.1);
glVertex2f(-93, -50);
glVertex2f(-72, -50);
glVertex2f(-72, -69);
glVertex2f(-93, -69);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0, 0.0, 0.1);
glVertex2f(-82.5, -50);
glVertex2f(-92, -67);
glVertex2f(-73, -67);
glEnd();


//the stand 
glBegin(GL_QUADS);
glColor3f(0.6, 0.3, 0.1);
glVertex2f(-85, -70);
glVertex2f(-79, -70);
glVertex2f(-79, -90);
glVertex2f(-85, -90);
glEnd();

// X part 1 
glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-89, -56);
glVertex2f(-85, -56);
glVertex2f(-76, -64);
glVertex2f(-80, -64);
glEnd();

// X part 2
glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-75, -56);
glVertex2f(-79, -56);
glVertex2f(-88, -64);
glVertex2f(-84, -64);
glEnd();
	
}
void curveline() {

	glLineWidth(7);

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.4, 0.1); // الاورنج
	glVertex2f(50.0f, 30.0f);
	glVertex2f(50.0f, 35.0f);
	glColor3f(0.6, 0.2, 0.0); //الاحمر
	glVertex2f(47.0f, 47.0f);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(29.0f, 62.0f);
	glEnd();




	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.4, 0.1); // الاورنج
	glVertex2f(61.0f, 30.0f);
	glVertex2f(61.0f, 37.0f);
	glVertex2f(60.0f, 53.0f);
	glColor3f(0.6, 0.2, 0.0); //الاحمر
	glVertex2f(57.0f, 62.0f);
	glVertex2f(53.0f, 70.0f);
	glEnd();





	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.4, 0.1); // الاورنج
	glVertex2f(75.0f, 30.0f);
	glVertex2f(75.0f, 38.0f);
	glVertex2f(80.0f, 59.0f);
	glVertex2f(87.0f, 68.0f);
	glColor3f(0.6, 0.2, 0.0); //الاحمر
	glVertex2f(95.0f, 73.0f);
	glEnd();



}
void curveline1() {

	glLineWidth(7);

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.4, 0.1); // الاورنج
	glVertex2f(56.0f, 30.0f);
	glVertex2f(56.0f, 35.0f);
	glVertex2f(53.0f, 51.0f);
	glColor3f(0.6, 0.2, 0.0); //الاحمر
	glVertex2f(50.0f, 59.0f);
	glVertex2f(40.0f, 67.0f);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.4, 0.1); // الاورنج
	glVertex2f(64.0f, 30.0f);
	glVertex2f(64.0f, 38.0f);
	glVertex2f(66.0f, 59.0f);
	glColor3f(0.6, 0.2, 0.0); //الاحمر
	glVertex2f(67.0f, 65.0f);
	glVertex2f(69.0f, 72.0f);
	glEnd();



	glBegin(GL_LINE_STRIP);
	glColor3f(1.0, 0.4, 0.1); // الاورنج
	glVertex2f(69.0f, 30.0f);
	glVertex2f(69.0f, 38.0f);
	glVertex2f(70.0f, 47.0f);
	glVertex2f(74.0f, 56.0f);
	glColor3f(0.6, 0.2, 0.0); //الاحمر
	glVertex2f(77.0f, 63.0f);
	glVertex2f(82.0f, 72.0f);
	glEnd();
}
void fire() {

	glLineWidth(5);
	glPushMatrix();
	glScalef(-0.5,0.5, 1);
	glTranslatef(30, -24, 0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(50.0f, 35.0f);
	glVertex2f(47.0f, 47.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(29.0f, 62.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-97, -30, 0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(50.0f, 35.0f);
	glVertex2f(47.0f, 47.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(29.0f, 62.0f);
	glEnd();
	glPopMatrix();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(-45.0f, 10.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(-45.0f, 30.0f);

	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(-42.0f, 8.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(-42.0f, 15.0f);

	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(-85.0f, 5.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(-85.0f, 30.0f);

	glEnd();

	glLineWidth(5);
	glPushMatrix();
	glScalef(-0.7, 0.5, 1);
	glTranslatef(70, -33, 0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(50.0f, 35.0f);
	glVertex2f(47.0f, 47.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(29.0f, 62.0f);
	glEnd();
	glPopMatrix();

	glLineWidth(5);
	glPushMatrix();
	glScalef(0.1, 0.5, 1);
	glTranslatef(-925, -30, 0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.9, 0.4, 0.0);
	glVertex2f(50.0f, 35.0f);
	glVertex2f(47.0f, 47.0f);
	glColor3ub(201, 47, 0);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(29.0f, 62.0f);
	glEnd();
	glPopMatrix();

}
void sky() {

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);

glLineWidth(5);
glPushMatrix();
	glScalef(-1, 0.5, 1);
	glTranslatef(30, 55, 0);
	glBegin(GL_LINE_STRIP);
	glColor4f(0.9, 0.6, 0.0,0.1);
	glVertex2f(50.0f, -20.0f);
	glVertex2f(47.0f, 47.0f);
	glColor4f(0.9, 0.6, 0.0, 0.1);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(29.0f, 62.0f);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glScalef(1, 1.5, 1);
	glTranslatef(-2, 10, 0);
	glBegin(GL_LINES);
	glColor4f(0.9, 0.4, 0.0,0.1);
	glVertex2f(-85.0f, 5.0f);
	glColor4f(0.9, 0.6, 0.0, 0.1);
	glVertex2f(-85.0f, 30.0f);
	glVertex2f(-85.0f, 30.0f);
	glVertex2f(-90.0f, 50.0f);
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-97, -10, 0);
	glBegin(GL_LINE_STRIP);
	glColor4f(0.9, 0.4, 0.0, 0.1);
	glVertex2f(50.0f, 35.0f);
	glVertex2f(47.0f, 47.0f);
	glColor4f(0.9, 0.6, 0.0, 0.1);
	glVertex2f(45.0f, 56.0f);
	glVertex2f(40.0f, 90.0f);
	glEnd();
	glPopMatrix();
	

	glPushMatrix();
	glScalef(-0.5, 0.5, 1);
	glTranslatef(30, 30, 0);
	glBegin(GL_LINE_STRIP);
	glColor4f(0.9, 0.4, 0.0, 0.1);
	glVertex2f(50.0f, 20.0f);
	glVertex2f(47.0f, 47.0f);
	glColor4f(0.9, 0.6, 0.0, 0.1);
	glVertex2f(40.0f, 56.0f);
	glVertex2f(35.0f, 62.0f);
	glEnd();
	glPopMatrix();
	

	glBegin(GL_LINES);
	glColor4f(0.9, 0.6, 0.0, 0.2);
	glVertex2f(50.0f, 100.0f);
	glColor4f(0.9, 0.6, 0.0, 0.2);
	glVertex2f(-19.0f, 30.0f);

	glEnd();
    glDisable(GL_BLEND);
}


static void play() {

		transValue += 0.000001;
		scaleValue += 0.001;
		if (transValue >= 100) {
			transValue = 0;

		}
		if (scaleValue >= 7.5) {
			scaleValue = 0;
		}
		transValue2 += 0.000001;
		scaleValue2 += 0.001;
		if (transValue2 >= 100) {
			transValue2 = 0;

		}
		if (scaleValue2 >= 2) {
			scaleValue2 = 0;
		}
		transValue3 += 0.000001;
		scaleValue3 += 0.001;
		if (transValue3 >= 100) {
			transValue3 = 0;

		}
		if (scaleValue3 >= 1) {
			scaleValue3 = 0;
		}
		transValue4 += 0.01;
		if (transValue4 >= 10) {
			transValue4 = 0;
		}
		transValue5 += 0.01;
		if (transValue5 >= 100) {
			transValue5 = 0;
		}
		transValue7 += 0.035;
		if (transValue7 >= 300) {
			transValue7 = 0;
		}
		transValue6 += 0.025;
		if (transValue6 >= 200) {
			transValue6 = 0;
		}
		glutPostRedisplay();
	}

//Draw the overall 
void display() {
	//glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT);

	//draw the background (sky)
	backGraund();

	//hole for the middle volcano 
	smallhole();

	//the middle volcano 
	smallOne();

	//details for the middle volcano 
	smallDetalis();

	//the leftmost volcano 
	LeftMostVolcano();

	//drip on leftmost volcano 
	VolcanoDrip2();

	//another drip on leftmost volcano 
	VolcanoDrip1();

	//the ground 
	floor();

	//Big volcano on the right side 
	Struct();

	//the layers of the big volcano 
	//layers();


	glPushMatrix();
	glTranslatef(transValue + 90, 39, 0);
	glScalef(-scaleValue, scaleValue, 1);
	smoke();
	glPopMatrix();
	glPushMatrix();


    //////////////////VolcanoDrip Trans2/////////////////////////
	glPushMatrix();
	glTranslatef(10, 55, 0);
	glRotatef(-40, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);

	glPushMatrix();
	glTranslatef(46.3, scaleValue + 11, 0);
	glScalef(1, scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	/////////////////////////////////////////
	glPushMatrix();
	glTranslatef(12, 55, 0);
	glRotatef(-40, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);

	glPushMatrix();
	glTranslatef(46.3, scaleValue + 11, 0);
	glScalef(1, scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	////////////////////////////////////////
	glPushMatrix();
	glTranslatef(22, -9, 0);
	glRotatef(40, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);

	glPushMatrix();
	glTranslatef(46.3, scaleValue + 11, 0);
	glScalef(1, scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	////////////////////////////////////////
	glPushMatrix();
	glTranslatef(24, -9, 0);
	glRotatef(40, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);

	glPushMatrix();
	glTranslatef(46.3, scaleValue + 11, 0);
	glScalef(1, scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(70, 35, 0);
	glRotatef(315, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);
	glScalef(1, -1, 1);
	glPushMatrix();
	glScalef(1, -scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(74, 35, 0);
	glRotatef(315, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);
	glScalef(1, -1, 1);
	glPushMatrix();
	glScalef(1, -scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();

	
		///////////////////////////////////////
	glPushMatrix();
	glTranslatef(68, 35, 0);
	glRotatef(315, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);
	glScalef(1, -1, 1);
	glPushMatrix();
	glScalef(1, -scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();

	glPopMatrix();
	////////////////////////////////////////
	glPushMatrix();

	glTranslatef(65, 35, 0);
	glRotatef(315, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);
	glScalef(1, -1, 1);
	glPushMatrix();
	glScalef(1, -scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();

	glPopMatrix();
	////////////////////////////////////////
	glPushMatrix();
	glTranslatef(42, 52.5, 0);
	glRotatef(-40, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);

	glPushMatrix();
	glTranslatef(46.3, scaleValue + 11, 0);
	glScalef(1, scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	///////////////////////////////////////
	glPushMatrix();
	glTranslatef(40, 52.5, 0);
	glRotatef(-40, 0, 0, 1);
	glTranslatef(-46.3, -11, 0);
	glTranslatef(140.7, 10, 0);

	glPushMatrix();
	glTranslatef(46.3, scaleValue + 11, 0);
	glScalef(1, scaleValue, 1);
	VolcanoDrip1();
	glPopMatrix();
	glPopMatrix();
	//////////////////////////////////////////////////


	//the hole of the big volcano 
	crater();

	/////////////smoke Trans1//////////////////
	glPushMatrix();
	glTranslatef(transValue + 90, 39, 0);
	glScalef(-scaleValue, scaleValue, 1);
	smoke();
	glPopMatrix();
	glPushMatrix();

	/////////////smoke Trans2//////////////////
	glPushMatrix();
	glTranslatef(transValue2 + 85, 38, 0);
	glScalef(-scaleValue2, scaleValue2, 1);
	smoke();
	glPopMatrix();
	glPushMatrix();

	/////////////smoke Trans3//////////////////
	glPushMatrix();
	glTranslatef(transValue3 + 85, 38, 0);
	glScalef(-scaleValue3, scaleValue3, 1);
	smoke();
	glPopMatrix();
	glPushMatrix();

	//Translate of the smoke ( big one )
	glPushMatrix();
	glTranslatef(0, transValue5, 0);
	boom();
	glPopMatrix();

	//fire over the big volcano 
	/*glPushMatrix();
	glTranslatef(0, transValue7, 0);
	curveline();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, transValue6, 0);
	curveline1();
	glPopMatrix();*/

	//the warning stand
	Warning();

	//fires over the smallest volcano 
	fire();

	sky();

	glFlush();
	glutSwapBuffers();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv); // Initialize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Specify the display Mode – RGB, RGBA or color


	glutCreateWindow("volcano"); // Create a window with the given title
	glutInitWindowSize(500,500); // Set the window's initial width & height
	glutInitWindowPosition(720,300); // Position the window's initial top-left corner
	init();

	transValue = 0;
	scaleValue = 30;
	transValue = 0;
	scaleValue = 30;

	transValue2 = 0;
	scaleValue2 = 40;

	transValue3 = 0;
	scaleValue3 = 50;

	transValue4 = 0;

	transValue5 = 0;

	transValue6 = 0;

	transValue7 = 0;
	glutIdleFunc(play);
	glutDisplayFunc(display);
	glutReshapeFunc(reshapeFunc);

	glutMainLoop(); // Enter the infinitely event-processing loop
	return 0;
}

