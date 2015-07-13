---
layout: default
---
Project 1: Conway's Game of Life
================================
--------------------------------


Overview
--------
In this project you will be implementing a _cellular automaton_ simulator. In particular, you will be simulating [Conway's Game of Life](https://en.wikipedia.org/wiki/Conway%27s_game_of_life). In Conway's Game of Life the world is an infinite 2-D orthogonal grid of square _cells_, i.e., an infinite sheet of graph paper. Each cell can be in one of two _states_, _alive_ or _dead_. The _neighbors_ of a given cell are defined to be the eight cells which share an edge or corner with the given cell. The simulation progresses in generations, with the following transition rules:

- A live cell with 0 or 1 live neighbors dies;
- A live cell with 2 or 3 live neighbors lives;
- A live cell with 4 to 8 live neighbors dies _(edited: Jul 1 at 12:11am)_;
- A dead cell with exactly 3 live neighbors comes to life.

The version of the game we will be programming is a little simpler. Instead of working on an infinite grid, we will work in a world that is a grid with 50 rows (numbered top-down from 0 to 49) and 50 columns (numbered left-right from 0 to 49). When using the transition rules for cells on the boundary we will assume that all neighbors not in the 50x50 grid are permanently dead. The program __Golly__ is a full featured Game of Life simulator and has been installed on your virtual machine.


The GameView object
-------------------
You will interact with the GUI through the GameView object. Although, we have not yet covered object oriented programming in C++, your previous background should be sufficient to work with this object. Calling a method on an object in C++ uses the same _dot_ syntax from Python or Java.


- __bool get_status(int i, int j)__: returns true if cell (i,j) is alive, and false otherwise
- __void set_status(int i, int j, bool status)__: sets the life status of cell (i,j) in the buffer
- __void update_status()__: copies the buffer board on the actual board
- __void clear()__: kills all cells on the board
- __void load_board(int n)__: loads a preset board that does something interesting: (n=1) Glider (n=2), Three beacons, (n=3) Spaceship, (n=4) Clears board
- __void render()__: causes the GUI to update
- __GameEvent get_event()__: gets the next GameEvent, read on for details...

The following code would create a GameView object named view, bring cell (3,2) to life, and then render the board to the scree:
 
    GameView view;
    view.set_status(3,2, true);
    view.update_status()
    view.render()

Come by the lab or office hours if you have any trouble working the GameView object.


GameEvents and EventTypes
-------------------------
The __GameEvent__ is a __struct__ with three fields: __type__, __data1__ and __data2__. The __type__ field stores an __enum__ of type __EventType__, and is determined by the type of event that has occurred:

- __EventType::Click__: The user clicked on a cell
    * __data1__ = the clicked row
    * __data2__ = the clicked column
- __EventType::Key__: The user pressed button 1,2,3 or 4
    * __data1__ = the pressed number
    * __data2__ = undefined
- __EventType::Pause__: The user requested to pause the simulation by pressing __Space__
    * __data1__ = undefined
    * __data2__ = undefined
- __EventType::Quit__: The user requested to quit the application by clicking X or pressing __Q__
    * __data1__ = undefined
    * __data2__ = undefined
- __EventType::Null__: An event we do not need to worry about
    * __data1__ = undefined
    * __data2__ = undefined

The two data field contain information about the event, described above.


The game loop
-------------
You program will spend most of its time in a loop commonly called the _game loop_. A high level description of the game loop would be:

    loop:
      get next event
      use a switch to process current event
      update game state if necessary
      render GUI

The loop will normally end when it receives a __quit__ event, which may be triggered by a key press (__Q__ in our program) or by closing the window.


Your task
---------
You task for this project is to implement a GameLoop for Conway's Game of Life, handling all game events appropriately:

* A __click event__ should flip the state of the cell clicked
* A __key event__ should load the requested board
* A __pause event__ should pause the simulation
* A __quit event__ should exit the game loop
* A __null event__ should do nothing

The __makefile__ for this project has the same functionality as [project 0](project0.html). When you are satisfied with your project you will use __make gather__ to produce a __tar.gz__ file to submit to dropbox on eee. There are now two dropboxes on eee; make sure you submit your project to the correct dropbox!

Project 1 starter code: [project1.tar.gz](project1.tar.gz)  

You can download at terminal with the command:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics45c/project1/project1.tar.gz"__


Note: When you run your program you will likely get the following "error", which may be safely ignored:

    libGL error: failed to authenticate magic 3
    libGL error: failed to load driver: vboxvideo


