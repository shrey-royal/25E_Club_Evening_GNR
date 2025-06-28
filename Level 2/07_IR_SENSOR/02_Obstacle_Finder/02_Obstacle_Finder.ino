int ir = 2;

void setup() {
  Serial.begin(9600);
  pinMode(ir, INPUT);
}

void loop() {
  int state = digitalRead(ir);

  if (state == LOW) Serial.println("The Obstacle is not Present");
  else Serial.println("The Obstacle is Present");

  delay(100);
}
