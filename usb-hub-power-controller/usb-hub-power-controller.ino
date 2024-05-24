const int numberOfPorts = 2;
const int ports[] = {10, 9};

void setup() {
  for (int i = 0; i < numberOfPorts; i++) {
    pinMode(ports[i], OUTPUT);
    // On as defualt state. USB power is controlled by
    // P-ch MOSFET so the state should be flipped.
    digitalWrite(ports[i], LOW);
  }
  Serial.begin(9600);
}

void loop() {
  while (!Serial.available());

  byte port = Serial.read();
  bool state = Serial.read();
  // Flush input buffer
  while (Serial.available()) Serial.read();

  digitalWrite(ports[port], !state);
}
