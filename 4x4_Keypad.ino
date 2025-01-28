#include <Keypad.h>

// Define the number of rows and columns in the keypad
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns

// Define the characters on each key of the 4x4 keypad
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Connect the row and column pins of the keypad to the Arduino
byte rowPins[ROWS] = {2,3,4,5}; // R1, R2, R3, R4
byte colPins[COLS] = {6,7,8,9}; // C1, C2, C3, C4


// Create the Keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  Serial.println("4x4 Keypad Test: Press keys to see output");
}

void loop() {
  // Check if a key is pressed
  char key = keypad.getKey();

  // If a key is pressed, print it
  if (key) {
    Serial.print("Key Pressed: ");
    Serial.println(key);
  }
}
