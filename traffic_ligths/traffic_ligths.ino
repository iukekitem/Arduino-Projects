int ledRed = 5;
int ledYellow = 4;
int ledGreen = 3;


void setup() {
  // put your setup code here, to run once:
pinMode(ledRed, OUTPUT);
pinMode(ledYellow, OUTPUT);
pinMode(ledGreen, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRed, HIGH);
  delay(5000);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(5000);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);
  delay(2000);
  digitalWrite(ledYellow, LOW);
  

}
