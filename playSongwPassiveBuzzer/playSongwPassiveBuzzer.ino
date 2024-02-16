#include "pitches.h"

#define BUZZER_PIN 8

// Define the melody notes (you can adjust these)
int melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_G5,
  NOTE_G4, NOTE_C5, NOTE_G4, NOTE_E4, NOTE_A4, NOTE_B4,
  NOTE_AS4, NOTE_A4, 0
};

// Define the corresponding note durations (adjust as needed)
int durations[] = {
  8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8,
  8, 8, 4
};

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int size = sizeof(durations) / sizeof(int);
  for (int note = 0; note < size; note++) {
    // Calculate the note duration (in milliseconds)
    int duration = 1000 / durations[note];
    tone(BUZZER_PIN, melody[note], duration);
    
    // Add a pause between notes (30% longer than the note duration)
    int pauseBetweenNotes = duration * 1.30;
    delay(pauseBetweenNotes);
    
    // Stop the buzzer
    noTone(BUZZER_PIN);
  }
}
