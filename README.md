# Blackjack

A console-based Blackjack (21) card game written in C++.

## Overview
Implements the core mechanics of Blackjack: building a deck, dealing cards,
tracking a hand's value (including Ace handling), and running the play loop
against a dealer.

## Structure
| File | Purpose |
|------|---------|
| `Card.h` / `Card.cpp` | A single playing card (rank + suit). |
| `Enums.h` | Enumerations for suits, ranks, and game state. |
| `Hand.h` / `Hand.cpp` | A collection of cards; computes the best hand total. |
| `main.cpp` | Game entry point and play loop. |

## Build & Run
```bash
g++ -std=c++17 *.cpp -o blackjack
./blackjack
```
