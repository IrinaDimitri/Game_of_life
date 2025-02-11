#ifndef code_GAME_OF_LIFE_H_
#define code_GAME_OF_LIFE_H_

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>

#define X 25                          // Number of rows in the grid
#define Y 80                          // Number of columns in the grid
#define CLEAN printf("\e[1;1H\e[2J")  // Clear the terminal screen

#define RESET_COLOR "\033[0m"
#define RED_TEXT "\033[31m"
#define GREEN_TEXT "\033[32m"
#define YELLOW_TEXT "\033[33m"
#define BLUE_TEXT "\033[34m"
#define MAGENTA_TEXT "\033[35m"
#define CYAN_TEXT "\033[36m"
#define WHITE_TEXT "\033[37m"
#define BOLD_TEXT "\033[1m"
#define UNDERLINE_TEXT "\033[4m"

void hello_game();       // Display the welcome message
void historyOfgame();    // Show the history of the Game of Life
void WannaStart();       // Ask the user if they want to start the game
void byebyeEndOfGAME();  // Display the goodbye message upon exiting the game
void brainOFgame();      // Main game logic and loop
int **memallocate();     // Allocate memory for the grid
int readmap(
    int **start_map);  // Read the initial grid configuration from a file
void checkMap(int **start_map,
              int **map);  // Update the grid based on Game of Life rules
int CheckneighbotsMap(int **map, int i,
                      int j);  // Check the number of neighbors for a cell
void printBorder(int width);   // Print the border for the grid display
int GameRender(int **map);     // Render the current state of the grid
void HelpGameRender_Collor();  // Render a cell with random color
void rewriteNewMap(int **start_map,
                   int **map);    // Copy the updated grid to the starting grid
void memfree(int **map);          // Free allocated memory for the grid
void *control_thread_func();      // Handle user input in a separate thread
void clearMap(int **map);         // Clear the grid
void addButterfly(int **map);     // Add a butterfly pattern to the grid
void addLine(int **map);          // Add a line pattern to the grid
void addPulsar(int **map);        // Add a pulsar pattern to the grid
void addGlider(int **map);        // Add a glider pattern to the grid
void addRocket(int **map);        // Add a rocket pattern to the grid
void addBigSpaceship(int **map);  // Add a big spaceship pattern to the grid
void addGliderShip(int **map);    // Add a glider ship pattern to the grid
void addGliderGun(int **map);     // Add a glider gun pattern to the grid
void addHeart(int **map);         // Add a heart pattern to the grid
void addElasticBand(int **map);   // Add an elastic band pattern to the grid

#endif  // code_GAME_OF_LIFE_H_