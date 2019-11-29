#include <Stepper.h>

const int stepsPerRevolution = 200;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);


// defines pins numbers
const int trigPin = 7;
const int echoPin = 6;

// defines variables
long duration;
int distance;

void setup() {

   pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
   pinMode(echoPin, INPUT); // Sets the echoPin as an Input
   Serial.begin(9600); // Starts the serial communication
   myStepper.setSpeed(130);
    // initialize the serial port:  (again??)
   Serial.begin(9600);
}

void loop() {
   digitalWrite(trigPin, LOW);
   delayMicroseconds(5000);

// Sets the trigPin on HIGH state for 10 micro seconds
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(5000);
   digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
   duration = pulseIn(echoPin, HIGH);

// Calculating the distance
   distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
   Serial.print("Distance: ");
   Serial.println(distance);

   if (distance < 18) {
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       myStepper.step(stepsPerRevolution);
       delay(2);
   
       //if (distance > 10) {
          // myStepper.step(stepsPerRevolution);
          // delay(10000);
       //}
   }
}
