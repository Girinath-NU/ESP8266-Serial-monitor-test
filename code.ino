void setup() {
  Serial.begin(9600);  // Start Serial communication
}

void loop() {
  Serial.println("Serial monitor test");  // Print test message
  delay(1000);  // Wait 1 second
}
