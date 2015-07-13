---
layout: default
---
Project 4: Snake game
=====================
---------------------

Overview
--------
In this project you will implement a simple [snake game](https://en.wikipedia.org/wiki/Snake_\(video_game\)). In our version of the game, the snake has a starting length of five and lives in a forty-by-forty grid, eating red and yellow apples. When the snake eats (its head intersects) a red apple its length is increased by five and when the snake eats a yellow apple its length is decreased by five (the minimum length is five). If the snakes tries to eat itself or a boundary cell (left/right column or top/bottom row), the snake dies and the game is over. 

### Warning
This project uses the same GUI library as [Project 1](project1.html). So if you had performance problems with [Project 1](project1.html), you will have them with this project as well. Make sure you make time to come by lab or to use the lab computers on the third floor of the ICS building.

The GameView object
-------------------
You will interact with the GUI through the __GameView__ object, which is similar to the object by the same name in Project 1. This object acts as the interface between your code and the SDL GUI library. You should read the code in __GameView.{hpp,cpp}__ to understand how it works, but you may not modify it. If you have any questions about the code, please come to lab or office hours. Note that, although we will only be working with one red apple and one yellow apple at a time the GameView class supports using more than one red apple and more that one yellow apple. 


GameEvents
----------
__GameEvent__ is an __enum__ representing the user interaction with the GUI. It will be equal to one of six values.

- __GameEvent::Up__: The user pressed the up arrow 
- __GameEvent::Down__: The user pressed the up down
- __GameEvent::Left__: The user pressed the up left 
- __GameEvent::Right__: The user pressed the up right 
- __GameEvent::Quit__: The user either pressed __Q__ or clicked the close button
- __GameEvent::Null__: An event that is of no interest to us

Unlike Project 1, there is no data associated with any of these events.

The game loop
-------------

Your program will spend most of its time in a loop commonly called the game loop. A high level description of the game loop would be:

    loop:
      get next event
      use a switch to process current event
      update game state if necessary
      render GUI

The loop will normally end when it receives a quit event, which may be triggered by a key press (__Q__ in our program) or by closing the window. Unlike Project 1, this functionality is already implemented for you in this project.

Your task
---------
Your task for this project is to implement a game loop for the snake game. On each update the snake should be moved one cell in its current direction. The snake should start in the middle of the board moving upward. The exact position is unimportant. When a direction event happens the snake should change its current direction to the direction of the event. A 180-degree direction change should be ignored. When a quit event happens the game loop should end and the program exit.

If the snake eats a red apple, then a new red apple should spawn at a random empty location and the snakes length should increase by a total of five cells spread over the next five updates. If the snake eats a yellow apple, then a new yellow apple should spawn at a random empty location and the snakes length should decrease by five cells over the next five updates. The snake should never have a length less than five. If the snake tries to eat itself or a boundary cell, then the game is over and the "game over" message should be displayed.

For this project you may fully utilize the objects in the STL.

### Starter code
The __makefile__ for this project has the same functionality as [project 3](project3.html). When you are satisfied with your project you will use __make gather__ to produce a __tar.gz__ file to submit to dropbox on eee. There are now two dropboxes on eee; make sure you submit your project to the correct dropbox!

Project 4 starter code: [project4.tar.gz](project4.tar.gz)  

You can download at terminal with the command:  
__wget "http://www.ics.uci.edu/~mbannist/teaching/ics45c/project4/project4.tar.gz"__

### Errors
When you run your program you will likely get the following "error", which may be safely ignored:

    libGL error: failed to authenticate magic 3
    libGL error: failed to load driver: vboxvideo

If you run the program with memcheck, you will find some error that are in the SDL library itself. You can safely ignore these errors.


### Sample program
In the __tar.gz__ file I have included the binary for my solution to the project. The name of the file is __example.out__, and you can run the program by typing __./example.out__.



