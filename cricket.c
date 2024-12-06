#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototypes
void tossDecision();
void batting();
void bowling();
void calculateShotOutcome(char *ballLength, char *shotType, int *runs, int *isWicket);
void updateScore(int *runs, int *wickets, int *balls, int *overs);
void printScore(int runs, int wickets, int balls, int overs);

// Main function
int main() {
    srand(time(0));  // Random seed initialization for simulating toss/shot outcome
    
    // Game variables
    int team1_runs = 0, team1_wickets = 0, team1_balls = 0, team1_overs = 0;
    int team2_runs = 0, team2_wickets = 0, team2_balls = 0, team2_overs = 0;
    
    // Toss and team selection
    tossDecision();

    // Batting and bowling logic
    // Team 1 bats, Team 2 bowls (simplified)
    batting(&team1_runs, &team1_wickets, &team1_balls, &team1_overs);
    bowling(); // This will just be a placeholder to show team 2 bowls

    // Team 2 bats, Team 1 bowls
    batting(&team2_runs, &team2_wickets, &team2_balls, &team2_overs);
    bowling(); // Team 1 bowls

    // Final score print
    printScore(team1_runs, team1_wickets, team1_balls, team1_overs);
    printScore(team2_runs, team2_wickets, team2_balls, team2_overs);

    return 0;
}

// Function to simulate the toss decision
void tossDecision() {
    // Placeholder for toss logic
    printf("Toss has been done.\n");
    // Decide whether to bat or bowl based on toss outcome
}

// Function for batting logic
void batting(int *runs, int *wickets, int *balls, int *overs) {
    // Placeholder for batting logic (shot selection, runs calculation, etc.)
    printf("Batting...\n");

    // Example of logic flow: Run calculation, wicket handling, ball/over updates
    // While (not all overs are complete or team isn't all out) {
    //    takeShot();
    //    calculate runs and wicket outcome;
    //    updateScore(runs, wickets, balls, overs);
    // }
}

// Function for bowling logic
void bowling() {
    // Placeholder for bowling logic
    printf("Bowling...\n");
}

// Function to calculate outcome of a shot
void calculateShotOutcome(char *ballLength, char *shotType, int *runs, int *isWicket) {
    // Placeholder for shot outcome logic (e.g., different outcomes based on shot type and ball length)
    // Example: If ball is full length, and shot is drive, give runs, and potentially a wicket
    *runs = 0;
    *isWicket = 0;
    printf("Calculating shot outcome...\n");
}

// Function to update score based on current runs, wickets, balls, and overs
void updateScore(int *runs, int *wickets, int *balls, int *overs) {
    // Placeholder for updating the score, ball, and over count
    // Example: Update balls, check for over completion, update overs, etc.
    (*balls)++;
    if (*balls == 6) {
        (*overs)++;
        *balls = 0; // Reset balls after an over
    }
    printf("Updating score...\n");
}

// Function to print the score after each team completes an innings
void printScore(int runs, int wickets, int balls, int overs) {
    // Placeholder for printing the score of a team
    printf("Score: %d/%d in %d.%d overs\n", runs, wickets, overs, balls);
}
