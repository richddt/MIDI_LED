# MIDI_LED
 11.15.16 code by Rich DDT
     www.richddt.com
       adapted from
     MIDI CC Light Show
    by Notes and Volts
    www.notesandvolts.com

Arduino_MIDI_LED Listens to 16 MIDI notes in the MIDI Note Range 36 (C1) to 51 (D#2)
and lights up 16 corresponding LED (LEDs 1 thru 16) configured on Digital Pins 23-53

Arduino_MIDI_LED is compatible with an Arduino Mega
It is also compatible with other Arduino boards if you update the Digital Pins to an appropriate range
(suggested Arduino Uno Digital Pins: 2-13)
It is compatible with MIDI over Serial and has been tested with Hairless MIDI running on Mac OS X at 115200 baud

Instructions:
Use Arduino's Library Manager to install MIDI Library: https://github.com/FortySevenEffects/arduino_midi_library
Wire up LEDs and resistors to Digital Pins 36 - 51 (odd numbered pins only).
These 16 pins were selected on the outermost edge of the Arduino Mega for easy wiring access.
Open Arduino_MIDI_LED.ino in the Arduino IDE and upload to your Arduino Mega.
Send MIDI via Hairless MIDI https://projectgus.github.io/hairless-midiserial/ or any other Serial MIDI client.
MIDI can be easily routed from Ableton -> Hairless MIDI using the built-in IAC driver on Mac OS X.
Play notes 36 (C1) to 51 (D#2) and enjoy the light show!

Note: LEDs will stay on during the duration of the Note On message, and shut off upon Note Off, so it works well with momentary MIDI controller messages sent from piano keys and momentary buttons.

Video demo here: https://youtu.be/DFHLbINKMNg
