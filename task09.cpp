#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void clear(int x, int y, char previous);
void showPacman(int x, int y);
void showGhost(int x, int y);
void showGhost2(int x, int y);
char getCharAtxy(short int x, short int y);

main()
{
  int gx = 2;
  int gy = 1;
  int gx2 = 24;
  int gy2 = 2;
  string direction1 = "right";
  string direction2 = "down";
  char previousChar = ' ';
  system("cls");
  printMaze();
  showGhost(gx, gy);
  showGhost2(gx2, gy2);

  bool gameRunning = true;

  while (gameRunning)
  {
    if (direction1 == "right")
    {
      char nextLocation = getCharAtxy(gx +1 , gy);
      if (nextLocation == '%' || nextLocation == '|')
      { 
        direction1 = "left";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        gx = gx + 1;
        previousChar = nextLocation;
        showGhost(gx, gy);
        clear(gx-1, gy , nextLocation);
      }
    } 
    if (direction1 == "left")
    {
     char nextLocation = getCharAtxy(gx - 1, gy);
     if (nextLocation == '%' || nextLocation == '|')
      {
        direction1 = "right";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        gx = gx - 1;
        previousChar = nextLocation;
        showGhost(gx, gy);
        clear(gx+1, gy , nextLocation);
      }
    }
    if (direction2 == "down")
    {
     char nextLocation = getCharAtxy(gx2 , gy2+1);
       if (nextLocation == '%' || nextLocation == '#')
      {
        direction2 = "up";
      }
      else if(nextLocation == ' ' || nextLocation == '.')
      {
        gy2 = gy2+1;
        previousChar = nextLocation;
        showGhost2(gx2, gy2);
        clear(gx2, gy2-1, nextLocation);
      }
    }
    if (direction2 == "up")
    {
      char nextLocation = getCharAtxy (gx2, gy2-1);
      if (nextLocation == '%' || nextLocation == '#')
      {
        direction2 = "down";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        gy2 = gy2 - 1;
        previousChar = nextLocation;
        showGhost2(gx2, gy2);
        clear(gx2, gy2+1, nextLocation);
      }
    }
    Sleep(200);
  }
  
} 


void printMaze()
{
cout<<" ###########################################################################"<<endl;
cout<<"||.. ............................................................  ...... ||"<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%           ..     %%%%%%%%%%%%%%%   |%|..  %%%%%%%   ||"<<endl;
cout<<"||..        |%|   |%|           ..     |%|          |%|  |%|..      |%|   ||"<<endl;
cout<<"||..        |%|   |%|        |%|..     |%|          |%|  |%|..   %%%%%%.  ||"<<endl;
cout<<"||..        |%|   |%|        |%|..     %%%%%%%%%%%%%%%%     ..         .  ||"<<endl;
cout<<"||..        %%%%%%%%%  ...   |%|..      ........            ..  %%%%%%..  ||"<<endl;
cout<<"||..        |%|        ....  |%|..   ................|%|    ..      |%|.  ||"<<endl;
cout<<"||..        %%%%%%%%%%%....  |%|..   %%%%%%%%%%%%    |%|    ..      |%|.  ||"<<endl;
cout<<"||..   ..           |%|.             |%|             |%|   ...      |%|.  ||"<<endl;
cout<<"||..   ..           |%|.             |%|......|%|          ...      |%|.  ||"<<endl;
cout<<"||..       .........|%|.        P         ....|%|              ..|%|      ||"<<endl;
cout<<"||..       |%|%%|%|.     |%|              ....|%|              ..|%|..    ||"<<endl;
cout<<"||..|%|    |%|  |%|.     %%%%%%%%%%%%      ...|%|              ..|%|.     ||"<<endl;
cout<<"||..|%|    |%|  |%|.            ...|%|    %%%%%%%              ..|%|..    ||"<<endl;
cout<<"||..|%|            ..           ...|%|                    |%|  ..%%%%%%%  ||"<<endl;
cout<<"||..|%|   %%%%%%%%%%%%%%        ...|%|%%%%%%%%            |%|  ..|%|%%%%  ||"<<endl;
cout<<"||......................................................  |%|  ...........||"<<endl;
cout<<"||  ...................................................               ....||"<<endl;
cout<<"||..|%|  |%|   |%|..        %%%%%%%%%%   ......|%|        |%| ..|%|.      ||"<<endl;
cout<<"||..|%|  |%|   |%|..               |%|      %%%%%%        |%| ..|%|.      ||"<<endl;
cout<<"||..|%|                            |%|                    |%| ..|%|.      ||"<<endl;
cout<<"||..|%|  %%%%%%%%%%%%              |%|%%%%%%%%%           |%| ..|%|%%%%%% ||"<<endl;
cout<<"||.....................................................   |%| ........... ||"<<endl;
cout<<"||   ..................................................            ...... ||"<<endl;
cout<<"############################################################################"<<endl;
}
void clear(int x, int y, char previous)
{
  gotoxy(x, y);
  cout << previous;
}

void showGhost(int x, int y)
{
  gotoxy(x, y);
  cout <<"G";
}
void showGhost2(int x, int y)
{
  gotoxy(x, y);
  cout << "G";
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 
}

char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}