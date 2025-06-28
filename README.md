# MorseCalc

This repository provides a C-based program for encoding plain text into Morse code and decoding Morse code back to text.  
MorseCalc offers an intuitive, menu-driven interface, making Morse code translation accessible for communication and learning.

## Code Overview

MorseCalc is a robust Morse code translator designed for both educational and practical use.  
It features modular functions, comprehensive error handling, and a user-friendly interface.

- Encode text (A–Z, 0–9, and special symbols) into Morse code
- Decode Morse code sequences (with spaces between characters) back to readable text
- Handles input case insensitively for reliable encoding and decoding
- Detects and reports invalid text or Morse code with clear error messages
- Simple, menu-based navigation for encoding, decoding, and exiting
- Modular code structure for encoding, decoding, input validation, and user interaction
- Supports a wide range of special characters (.,?!'/()&:;=+-_"$@)
- Guides users step-by-step through the process for ease of use

## Set-up Instructions

1. Compile the program using GCC or any standard C compiler:
 ```bash
gcc morse_code_calculator.c -o morse_code_calculator
   ```
2. Run the executable:
 ```bash
./morse_code_calculator
   ```
3. Follow the on-screen menu to encode or decode text and Morse code.

## Course Project

This project was built as a course project for CSL1010.

