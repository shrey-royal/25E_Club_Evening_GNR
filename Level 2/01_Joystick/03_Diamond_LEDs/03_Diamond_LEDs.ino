int in_x, in_y, in_sw;
int r = 4, b = 6, l = 3, f = 5;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(7, INPUT_PULLUP);
  pinMode(l, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);

  digitalWrite(l, LOW);
  digitalWrite(f, LOW);
  digitalWrite(r, LOW);
  digitalWrite(b, LOW);
}

void loop() {
  in_x = analogRead(A0);
  in_y = analogRead(A1);
  in_sw = digitalRead(7);

  Serial.print("X: ");
  Serial.print(in_x);
  Serial.print(", Y: ");
  Serial.print(in_y);
  Serial.print(", SW: ");
  Serial.print(in_sw);
  Serial.println();

  if (!in_sw) {
    digitalWrite(l, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(r, HIGH);
    digitalWrite(b, HIGH);
  } else {
    if (in_x <= 255) {
      digitalWrite(f, HIGH);
    } else if (in_x >= 768) {
      digitalWrite(b, HIGH);
    }

    if (in_y <= 255) {
      digitalWrite(r, HIGH);
    } else if (in_y >= 768) {
      digitalWrite(l, HIGH);
    }
  }

  if ((in_x >= 450 && in_x <= 550) && (in_y >= 450 && in_y <= 550) && in_sw) {
    digitalWrite(l, LOW);
    digitalWrite(f, LOW);
    digitalWrite(r, LOW);
    digitalWrite(b, LOW);
  }
}