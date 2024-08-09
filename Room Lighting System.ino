// Define pin numbers for photoresistor and LED
const int lightPin = A0;  // Analog pin for photoresistor
const int ledPin = 3;    // Digital pin for LED

// Define threshold for light detection
const int lightThreshold = 500; // Adjust based on ambient light conditions

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize LED pin as output
  pinMode(ledPin, OUTPUT);

  // Turn off the LED initially
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Read the value from the photoresistor
  int lightValue = analogRead(lightPin);

  // Print the sensor value to the serial monitor
  Serial.print("Light Sensor Value: ");
  Serial.println(lightValue);

  // Check if the light value is below the threshold
  if (lightValue < lightThreshold) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }

  // Delay for a short period
  delay(500);
}
