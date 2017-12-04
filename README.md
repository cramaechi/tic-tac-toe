# Tic-Tac-Toe
A program that simulates a two-player tic-tac-toe game.

### Synopsis
The program asks for moves alternately from player X and player O.

The players enter their moves by entering the coordinate positions of the number they wish to mark.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/tic-tac-toe.git
   ```
    or [download as ZIP](https://github.com/cramaechi/tic-tac-toe/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd tic-tac-toe
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./tic_tac_toe
```

Sample Output:
```
                                    1 2 3                                                                             
                                                                                                                      
                                    4 5 6                                                                             
                                                                                                                      
                                    7 8 9                                                                             
                                                                                                                      
Player X, mark your position (in coordinates): 0 0                                                                    
                                                                                                                      
                                                                                                                      
                                    X 2 3                                                                             
                                                                                                                      
                                    4 5 6                                                                             
                                                                                                                      
                                    7 8 9                                                                             
                                                                                                                      
Player O, mark your position (in coordinates): 2 1

                                    X 2 3                                                                             
                                                                                                                      
                                    4 5 6                                                                             
                                                                                                                      
                                    7 O 9                                                                             
                                                                                                                      
Player X, mark your position (in coordinates): 0 2

                                                                                                                      
                                    X 2 X                                                                             
                                                                                                                      
                                    4 5 6                                                                             
                                                                                                                      
                                    7 O 9                                                                             
                                                                                                                      
Player O, mark your position (in coordinates): 1 1

                                                                                                                      
                                    X 2 X                                                                             
                                                                                                                      
                                    4 O 6                                                                             
                                                                                                                      
                                    7 O 9                                                                             
                                                                                                                      
Player X, mark your position (in coordinates): 0 1                                                                    
                                                                                                                      
                                                                                                                      
                                    X X X                                                                             
                                                                                                                      
                                    4 O 6                                                                             
                                                                                                                      
                                    7 O 9                                                                             
                                                                                                                      
Player X wins!
```
