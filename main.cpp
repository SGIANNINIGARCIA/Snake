//============================================================================
// Name        : pingPong.cpp
// Author      : Sandro Giannini
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Pong game in C++, Ansi-style
//============================================================================

#if defined(WIN32)
#include <GL/glut.h>
#include <GL/freeglut.h>
#else
#include <glut/glut.h>
#endif

#include <glut/glut.h>
#include <iostream>
#include "Snake.h"

Snake snake;




void renderText(double x, double y, std::string s) {

	const char *pchar = s.c_str();
	const char *c;
	glColor3d(0.0, 1.0, 0.0);
	glRasterPos2d(x, y);

	for (c = pchar; *c != '\0'; c++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}
}

void timer(int x){

	glutPostRedisplay();
	glutTimerFunc(1000/x, timer, x); // set for 60fps

}

void createObjects(){

	snake = Snake(0, 0);

}

void init(){

	glClearColor(0.0, 0.0, 0.0, 0.0);   // Sets background black
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	createObjects();
}

void reshape(int w, int h){

	glViewport(0, 0, (GLsizei)w, (GLsizei)h);

}

void startGame(){

	createObjects();
	glutTimerFunc(1000, timer, 60);

}

void wonScreen(){

	glClear(GL_COLOR_BUFFER_BIT);


		//renderText(0.0, 0.0, "Congratulations Player 1, you have won the game");
		//renderText(0.0, -0.10, "Press the spacebar to reset the game");
		//renderText(0.0, -0.20, ":)");

		//renderText(0.0, 0.0, "Congratulations Player 2, you have won the game");
		//renderText(0.0, -0.10, "Press the spacebar to reset the game");
		//renderText(0.0, -0.20, ":)");


	glutSwapBuffers();

}


void processScore(){

	//if(leftPaddle.getScore() >= 3 || rightPaddle.getScore() >= 3){
	//	std::cout << leftPaddle.getScore() << std::endl;
	//	glutDisplayFunc(wonScreen);
	//}

	//renderText(-0.25, 0.90, "Player 1");
	//renderText(-0.2, 0.80, std::to_string((int)leftPaddle.getScore()));
	//renderText(0.15, 0.9, "Player 2");
	//renderText(0.2, 0.8, std::to_string((int)rightPaddle.getScore()));
}

void display(){

	glClear(GL_COLOR_BUFFER_BIT);
	snake.move();
	snake.draw();
	glutSwapBuffers();

}

void beginScreen(){

	glClear(GL_COLOR_BUFFER_BIT);
	renderText(-0.40, 0.20, "Player 1, use a to move right, d to move left, s to move down and w to move up.");
	renderText(-0.4, 0.10, "Player 2, use j to move right, l to move left, k to move down and i to move up.");
	renderText(-0.35, 0.0, "Press m to increase the speed of the puck, and n to decrease it.");
	renderText(-0.25, -0.1, "Whenever you want to reset the game, press r.");
	renderText(-.17,  -0.2, "The player who scores 3, wins.");
	renderText(-0.4, -0.5, "Press the space bar to start the game.");
	renderText(-0.4, -0.6, "Good luck!");
	glutSwapBuffers();

}

void keyboard (unsigned char key, int xmouse, int ymouse) {


	switch (key){
	case 'w':
		snake.changeDirection('U');
		break;

	case 'a':
		snake.changeDirection('L');
		break;

	case 's':
		snake.changeDirection('D');
		break;

	case 'd':
		snake.changeDirection('R');
		break;


	case ' ':
		glutDisplayFunc(display);
		startGame();
		break;

	case 'r':
		glutDisplayFunc(beginScreen);   // Resets the game and goes back to beginScreen
		break;


	case '27':
		/*  Keyboard func doesnt support the ESC key on mac (my mac doesnt have an ESC key)
		 * Also, there is no function to close windows on mac, it requires the use of the
		 * mac server os and i do not have it
		 */
		exit(1);
		break;


	default:
		break;
	}
}

void setGame(){

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutInitWindowPosition(500, 500); // Sets where the window is going to be positioned
	glutInitWindowSize(1000, 1000); // Sets size of the window in terms of pixels

	glutCreateWindow("Snake 1.0"); // Creates the windows with name testing
	glutDisplayFunc(beginScreen); // calls the Begin screen
	glutReshapeFunc(reshape); //called whenever there is a change in the window size
	glutKeyboardFunc(keyboard);
	init();

	glutMainLoop();

	return;

}

int main(int argc, char** argv){

	// initializes GLUT
	glutInit(&argc,argv);
	// sets game
	setGame();

	return 0;
}

