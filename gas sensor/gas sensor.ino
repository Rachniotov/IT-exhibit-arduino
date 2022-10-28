const int gas = A0;

void setup() {
  pinMode(gas, INPUT);
  
  Serial.begin(9600);
  Serial.println("HI from 8266");
}

void loop() {
  int data = analogRead(gas);
  Serial.println(data);

  if (data < 400) {
    Serial.println("GOOD");
  } else if (data < 650) {
    Serial.println("BAD");
  } else {
    Serial.println("VERY BAD");
  }

  Serial.println("\n");
  delay(750);
}
