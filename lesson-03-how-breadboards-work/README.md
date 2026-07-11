# Lesson 3: How Breadboards Work

## What this lesson covers

Understanding breadboard internal connections, and building a simple 
LED circuit using a current-limiting resistor.

## Key concepts

**Breadboard hole connections**

A breadboard's holes are connected internally in a specific pattern:

- Holes along a row (the short horizontal strips in the main middle 
  section) are connected to each other
- Holes along a column (the long vertical power rails, usually marked 
  red/blue on the sides) are connected to each other
- Rows are NOT connected to other rows, and the two halves of the 
  board (split by the center gap) are not connected to each other

Understanding this layout is what determines how components need to 
be placed to actually connect to each other correctly.

**Building a simple LED circuit**

Circuit path for this lesson:
- Arduino pin → one leg of the resistor
- Other leg of the resistor → LED's long leg (anode, positive)
- LED's short leg (cathode, negative) → GND

The resistor here is the current-limiting resistor from Lesson 2, 
preventing too much current from burning out the LED.

## What I learned / friction points

For a long time, I never actually understood how breadboards work 
internally - I just followed tutorials step by step without knowing 
why components needed to go in specific holes. After learning the 
row/column connection logic in this lesson, I can now wire circuits 
myself with real understanding, instead of just copying a diagram 
without knowing why it works.