int x = A0, rd_x;
int led = 11, led_value;

void setup() {
  pinMode(x, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  rd_x = analogRead(x);

  led_value = map(rd_x, 0, 1023, 0, 255);
  analogWrite(led, led_value);

  Serial.print("X = ");
  Serial.println(rd_x);
}
