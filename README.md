Task Division
Person 1: Board Initialization

Implement the initializeBoard function for the 10x10 grid.
Represent the board using a 2D array and ensure it is cleared at the start.

Person 2: Ship Placement

Handle placing ships on the board for both players and AI.
Ensure ships do not overlap and are within the board’s bounds.
Randomize placement for AI ships.

Person 3: Input for Player Shots

Implement the function to take player input (row and column) for attacks.
Validate user input to ensure it’s within bounds and hasn’t already been chosen.

Person 4: AI Logic for Shots

Write the logic for AI attacks.
Use simple algorithms like random selection or targeted attack (hit adjacent cells if a hit is detected).

Person 5: Hit Detection and Ship Status

Implement functions to check if a shot is a hit or miss.
Track the status of each ship (sunk or not) and display updates.

Person 6: Display and UI

Write functions to display the game board dynamically.
Hide AI’s ships while showing player progress and missed shots.
Update and display the boards after each turn.

Person 7: Game Loop and Win Condition

Implement the main game loop.
Alternate turns between the player and AI.
Detect when all ships of a player are sunk to declare a winner.
