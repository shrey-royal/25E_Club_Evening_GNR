int sw = 7, cs, ls = HIGH;
int x = A0, rd_x;
int y = A1, rd_y;
int led = 13;

void setup() {
  pinMode(sw, INPUT_PULLUP);
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  cs = digitalRead(sw);
  rd_x = analogRead(x);
  rd_y = analogRead(y);

  if (ls == HIGH && cs == LOW) digitalWrite(led, HIGH);
  else digitalWrite(led, LOW);

  Serial.print("X = ");
  Serial.print(rd_x);
  Serial.print(",\tY = ");
  Serial.print(rd_y);
  Serial.print(",\tsw = ");
  Serial.println(cs);
} 
