/*
 11.15.16 code by Rich DDT
     www.richddt.com
       adapted from
     MIDI CC Light Show
    by Notes and Volts
    www.notesandvolts.com

MIDI_LED Listens to 16 MIDI notes in the MIDI Note Range 36 (C1) to 51 (D#2)
and lights up 16 corresponding LED (LEDs 1 thru 16) configured on Digital Pins 23-53

MIDI_LED is compatible with an Arduino Mega
It is also compatible with other Arduino boards if you update the Digital Pins to an appropriate range
(suggested Arduino Uno Digital Pins: 2-13)
It is compatible with MIDI over Serial and has been tested with Hairless MIDI running on Mac OS X at 115200 baud
 
 */
 
#include <MIDI.h>  // Add Midi Library

#define LED1 23
#define LED2 25
#define LED3 27
#define LED4 29
#define LED5 31
#define LED6 33
#define LED7 35
#define LED8 37
#define LED9 39
#define LED10 41
#define LED11 43
#define LED12 45
#define LED13 47
#define LED14 49
#define LED15 51
#define LED16 53


//Create an instance of the library with default name, serial port and settings
MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
  
  pinMode (LED1, OUTPUT); // Set Arduino board pin to output
  pinMode (LED2, OUTPUT); // Set Arduino board pin to output
  pinMode (LED3, OUTPUT); // Set Arduino board pin to output
  pinMode (LED4, OUTPUT); // Set Arduino board pin to output
  pinMode (LED5, OUTPUT); // Set Arduino board pin to output
  pinMode (LED6, OUTPUT); // Set Arduino board pin to output
  pinMode (LED7, OUTPUT); // Set Arduino board pin to output
  pinMode (LED8, OUTPUT); // Set Arduino board pin to output
  pinMode (LED9, OUTPUT); // Set Arduino board pin to output
  pinMode (LED10, OUTPUT); // Set Arduino board pin to output
  pinMode (LED11, OUTPUT); // Set Arduino board pin to output
  pinMode (LED12, OUTPUT); // Set Arduino board pin to output
  pinMode (LED13, OUTPUT); // Set Arduino board pin to output
  pinMode (LED14, OUTPUT); // Set Arduino board pin to output
  pinMode (LED15, OUTPUT); // Set Arduino board pin to output
  pinMode (LED16, OUTPUT); // Set Arduino board pin to output
 
  
  MIDI.begin(1); // Initialize the Midi Library on channel 1
  Serial.begin(115200);  // Hairless MIDI speed

  MIDI.setHandleNoteOn(MyHandleNoteOn); // This is important!! This command
  // tells the Midi Library which function you want to call when a NOTE ON command
  // is received. In this case it's "MyHandleNoteOn".
  MIDI.setHandleNoteOff(MyHandleNoteOff); // This command tells the Midi Library 
  // to call "MyHandleNoteOff" when a NOTE OFF command is received.
}

void loop() { // Main loop
  MIDI.read(); // Continuously check if Midi data has been received.   
}


// MyHandleNoteOn/Off are the functions that will be called by the Midi Library
// when a MIDI Note message is received.
// It will be passed bytes for Channel, Pitch, and Value
// It checks if the MIDI Note Pitch is within the Note Range 36 (C1) to 51 (D#2)
// If it is, it lights up the corresponding LED (LEDs 1 thru 16)
void MyHandleNoteOn(byte channel, byte pitch, byte velocity) {
  switch (pitch) {
    case 36:
      digitalWrite(LED1,HIGH);
      break;
    case 37:
      digitalWrite(LED2,HIGH);
      break;
    case 38:
      digitalWrite(LED3,HIGH);
      break;
    case 39:
      digitalWrite(LED4,HIGH);
      break;
    case 40:
      digitalWrite(LED5,HIGH);
      break;
    case 41:
      digitalWrite(LED6,HIGH);
      break;
    case 42:
      digitalWrite(LED7,HIGH);
      break;
    case 43:
      digitalWrite(LED8,HIGH);
      break;
    case 44:
      digitalWrite(LED9,HIGH);
      break;
    case 45:
      digitalWrite(LED10,HIGH);
      break;
    case 46:
      digitalWrite(LED11,HIGH);
      break;
    case 47:
      digitalWrite(LED12,HIGH);
      break;
    case 48:
      digitalWrite(LED13,HIGH);
      break;
    case 49:
      digitalWrite(LED14,HIGH);
      break;
    case 50:
      digitalWrite(LED15,HIGH);
      break;
    case 51:
      digitalWrite(LED16,HIGH);
      break;      
  }
}

void MyHandleNoteOff(byte channel, byte pitch, byte velocity) {
  switch (pitch) {
    case 36:
      digitalWrite(LED1,LOW);
      break;
    case 37:
      digitalWrite(LED2,LOW);
      break;
    case 38:
      digitalWrite(LED3,LOW);
      break;
    case 39:
      digitalWrite(LED4,LOW);
      break;
    case 40:
      digitalWrite(LED5,LOW);
      break;
    case 41:
      digitalWrite(LED6,LOW);
       break;
    case 42:
      digitalWrite(LED7,LOW);
      break;
    case 43:
      digitalWrite(LED8,LOW);
      break;
    case 44:
      digitalWrite(LED9,LOW);
      break;
    case 45:
      digitalWrite(LED10,LOW);
      break;
    case 46:
      digitalWrite(LED11,LOW);
      break;
    case 47:
      digitalWrite(LED12,LOW);
      break;
    case 48:
      digitalWrite(LED13,LOW);
      break;
    case 49:
      digitalWrite(LED14,LOW);
      break;
    case 50:
      digitalWrite(LED15,LOW);
      break;
    case 51:
      digitalWrite(LED16,LOW);
      break;      
  }
}

