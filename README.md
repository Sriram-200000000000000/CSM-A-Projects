Person 1: Board Initialization

Write the initializeBoard function.
Ensure all positions are set to 0 (normal tiles).
Prepare the board array to handle special tiles (snakes and ladders).

Person 2: Snakes and Ladders Placement

Write the initializeSnakesAndLadders function.
Assign specific positions for ladders (positive jumps) and snakes (negative jumps).
Test the placements to avoid conflicts (e.g., a snake tail and ladder base at the same position).

Person 3: Dice Roll

Implement the rollDice function.
Use the rand() function to generate random numbers between 1 and 6.
Ensure dice rolls are valid and randomized for fairness.

Person 4: Player Movement

Implement the movePlayer function.
Update player positions based on dice rolls.
Handle snake and ladder mechanics (e.g., jumping up/down the board).
Ensure positions don’t exceed the board limits (stay at 100 or less).

Person 5: Computer Player Logic

Automate the computer’s turn in the main game loop.
Write logic for the computer to "roll the dice" and move.
Integrate the computer player with the same movePlayer logic.

Person 6: Display and User Interface

Write the displayBoard function.
Show player positions dynamically after each turn (Player 1, Player 2, Computer).
Ensure a clear, user-friendly display.

Person 7: Game Loop and Win Condition

Implement the main game loop.
Alternate turns between Player 1, Player 2, and Computer.
Write the checkWinCondition function to detect and announce the winne
