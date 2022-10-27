const int ldr = A0;
const int buz = 14;
bool engage = false;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(buz, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int data = analogRead(ldr);
  Serial.println(data);

  if (!engage && data > 150) {
    engage = true;
  }

  if (engage && data < 150) {
    tone(buz, 1000);
    delay(1000*5);
  }

  digitalWrite(buz, 0);
}
