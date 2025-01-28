# 4x4 Keypad Module - Arduino Code

## Overview
This repository contains the Arduino code to interface with a **4x4 Keypad Module**. The code enables capturing keypresses from the keypad and can be used in projects like password entry systems, calculators, and interactive menus.

## Features
- Supports 4x4 matrix keypads.
- Detects individual keypresses and performs custom actions.
- Can be easily modified for different keypad layouts.

## Requirements
### Hardware:
- Arduino Uno or compatible board.
- 4x4 Keypad Module.
- Jumper wires.

### Software:
- Arduino IDE (version 1.8 or higher).
- Keypad library (`Keypad.h`).

## Wiring
| Keypad Pins | Arduino Pins |
|-------------|--------------|
| R1          | D2           |
| R2          | D3           |
| R3          | D4           |
| R4          | D5           |
| C1          | D6           |
| C2          | D7           |
| C3          | D8           |
| C4          | D9           |

## Installation
1. Clone this repository:
   ```bash
   git clone https://github.com/macliszt/4x4-keypad-module.git
