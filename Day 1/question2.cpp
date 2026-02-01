//simulate shuffling and dealing cards using arrays
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
const int DECK_SIZE = 52;
int deck[DECK_SIZE];

// Initialize deck with card indices 0-51
for (int i = 0; i < DECK_SIZE; ++i) {
deck[i] = i;
}

// Suits and ranks arrays for mapping
string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

// Shuffle the deck using Fisher-Yates algorithm
mt19937 gen(static_cast<unsigned int>(time(0)));

for (int i = DECK_SIZE - 1; i > 0; --i) {
uniform_int_distribution<> dis(0, i);
int j = dis(gen);

// Swap deck[i] and deck[j]
int temp = deck[i];
deck[i] = deck[j];
deck[j] = temp;
}

cout << "Shuffled Deck:" << endl;
cout << "==============" << endl;

// Display all 52 cards using modular arithmetic
for (int i = 0; i < DECK_SIZE; ++i) {
int card = deck[i];
int suitIndex = card / 13;      // 0-3 maps to suits
int rankIndex = card % 13;      // 0-12 maps to ranks

cout << (i + 1) << ". " << ranks[rankIndex] << " of " << suits[suitIndex] << endl;
}

// Deal 5 cards to each of 4 players
cout << "\nDealing 5 cards to 4 players:" << endl;
cout << "=============================" << endl;

int cardIndex = 0;
for (int player = 1; player <= 4; ++player) {
cout << "Player " << player << ": ";
for (int c = 0; c < 5; ++c) {
int card = deck[cardIndex++];
int suitIndex = card / 13;
int rankIndex = card % 13;
cout << ranks[rankIndex] << " of " << suits[suitIndex];
if (c < 4) cout << ", ";
}
cout << endl;
}

return 0;
}
