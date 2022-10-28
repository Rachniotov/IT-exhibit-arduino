const int ldr = A0;
const int buz = 14;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(buz, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int data = analogRead(ldr);
  Serial.println(data);

  if (data < 100) {
    tone(buz, 1000, 500);
  }
}
