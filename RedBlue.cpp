#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

// Function to simulate drawing two balls from the bag
pair<int, int> drawBalls(vector<int>& bag) {
    int idx1 = rand() % bag.size(); // Random index for the first ball
    int ball1 = bag[idx1];
    bag.erase(bag.begin() + idx1); // Remove the first ball

    int idx2 = rand() % bag.size(); // Random index for the second ball
    int ball2 = bag[idx2];
    bag.erase(bag.begin() + idx2); // Remove the second ball

    return {ball1, ball2};
}

// Function to perform the simulation
char simulateGame(int blue, int red) {
    vector<int> bag;

    // Represent blue as 0 and red as 1
    for (int i = 0; i < blue; i++) {
        bag.push_back(0); // 0 for blue
    }
    for (int i = 0; i < red; i++) {
        bag.push_back(1); // 1 for red
    }

    // Simulate until one ball is left
    while (bag.size() > 1) {
        auto balls = drawBalls(bag);
        int ball1 = balls.first;
        int ball2 = balls.second;

        if (ball1 == ball2) {
            // Same color -> Replace with a blue ball (0)
            bag.push_back(0);
        } else {
            // Different colors -> Replace with a red ball (1)
            bag.push_back(1);
        }
    }

    // Return the color of the last ball
    return bag[0] == 0 ? 'B' : 'R'; // 'B' for blue, 'R' for red
}

int main() {
    srand(time(0)); // Seed for random number generation

    int blue = 20, red = 13;

    char lastBall = simulateGame(blue, red);
    cout << "The last ball remaining is: " << (lastBall == 'B' ? "Blue" : "Red") << endl;

    return 0;
}

