/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
Pin 3 - On signal from RF D0
Pin 4 - Off signal from RF D2
Pin 5 - Output to Relay

*/


const int onPin = 3;     // the number of the pushbutton pin
const int offPin = 4;
const int relPin =  5;      // the number of the LED pin

// variables will change:
int onState = 0;
int offState = 0; // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(relPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(onPin, INPUT);
  pinMode(offPin, INPUT);
  digitalWrite(relPin, HIGH);
  Serial.begin(115200);
  delay(10);
  Serial.println("Ready...");
}

void loop() {
  // read the state of the pushbutton value:
  onState = digitalRead(onPin);
  offState = digitalRead(offPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (onState == HIGH) {
    // turn LED on:
    digitalWrite(relPin, LOW);
    Serial.println("On");
  }
if (offState == HIGH) {
  digitalWrite(relPin, HIGH);
    Serial.println("Off");
}
  
}
