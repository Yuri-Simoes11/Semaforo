int LEDVermelho = 13;
int LEDAmarelo = 12;
int LEDVerde = 11;
int TempoVerde = 1000;

void setup() {
  // put your setup code here, to run once:
    pinMode(LEDVermelho, OUTPUT);
    pinMode(LEDAmarelo, OUTPUT);
    pinMode(LEDVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LEDVerde, HIGH);
    digitalWrite(LEDAmarelo, LOW);
    digitalWrite(LEDVermelho, LOW);
    delay(TempoVerde);
    digitalWrite(LEDVerde, LOW);
    digitalWrite(LEDAmarelo, HIGH);
    digitalWrite(LEDVermelho, LOW);
    delay(TempoVerde * 2);
    digitalWrite(LEDVerde, LOW);
    digitalWrite(LEDAmarelo, LOW);
    digitalWrite(LEDVermelho, HIGH);
    delay(TempoVerde * 5);    
}
