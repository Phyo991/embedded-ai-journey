# Lesson 27: Pushbuttons, Pull-Up and Pull-Down Resistors

## What this lesson covers

Understanding how pushbuttons work as switches, and how pull-up and 
pull-down resistors give a circuit a defined default state.

## Key concepts

**Pushbutton basics**

Pressing the button closes the circuit (short circuit); releasing it 
opens the circuit (open circuit).

**Why we need pull-up/pull-down resistors**

Without a resistor, an unpressed button leaves the input pin "floating" 
- not connected firmly to either HIGH or LOW, causing unreliable, 
noisy readings. Pull-up and pull-down resistors fix this by giving 
the pin a defined default state.

**Pull-up resistor circuit**

- 10k ohm resistor connects the Arduino pin to 5V
- The button connects that same pin to ground
- Arduino reads the pin at the junction between the resistor and the button
- Button open: pin reads HIGH (1) - pulled up to 5V through the resistor
- Button pressed: pin reads LOW (0) - pulled down to ground through the button

**Pull-down resistor circuit**

- 10k ohm resistor connects the Arduino pin to ground
- The button connects that same pin to 5V
- Arduino reads the pin at the junction between the button and the resistor
- Button open: pin reads LOW (0) - pulled down to ground through the resistor
- Button pressed: pin reads HIGH (1) - pulled up to 5V through the button

## Circuit from this lesson

Paul's lesson uses:

- Pushbutton wired with a pull-up/pull-down resistor (as explained above)
- LED connected to pin 8, other leg to GND
- `digitalRead()` used to directly mirror the button's state to the 
  LED - button pressed leads to LED on, button released leads to LED off

This is a direct "hold to light" behavior, different from a toggle 
switch (covered in Lesson 28), where the LED's state persists after 
the button is released until pressed again.

## What I learned / friction points

Spent a long time debugging why my button readings weren't changing 
as expected. The issue was breadboard placement: the pushbutton should 
straddle only the single center gap of the breadboard, not span across 
two gaps. When placed across two gaps, each pair of legs on the same 
side landed in a shared connected row, which shorted the circuit 
internally regardless of whether the button was pressed, so the 
pin's state never actually changed with the button press.
