# Digispark Mouse Wiggler

This project allows a Digispark Rev3 board to function as a mouse that wiggles randomly when connected to a USB port on a PC. 

## Table of Contents
- [Requirements](#requirements)
- [Setup Instructions](#setup-instructions)
- [Usage](#usage)
- [License](#license)

## Requirements
- Digispark Rev3 board
- Arduino IDE
- Mouse library for Arduino

## Setup Instructions
1. Install the Arduino IDE if you haven't already.
2. Install the Digispark board definitions in the Arduino IDE:
   - Go to `File` -> `Preferences`.
   - In the "Additional Board Manager URLs" field, add the following URL: `http://digistump.com/package_digistump_index.json`
   - Open the Board Manager from `Tools` -> `Board` -> `Boards Manager`, search for "Digistump" and install it.
3. Connect your Digispark board to your computer.
4. Open the `src/main.ino` file in the Arduino IDE.
5. Upload the sketch to your Digispark board.

## Usage
Once the sketch is uploaded, connect the Digispark board to a USB port on your PC. The mouse will start wiggling randomly. You can adjust the parameters in the `main.ino` file to change the frequency and range of the mouse movements.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.