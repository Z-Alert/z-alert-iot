#define SOLO_ANALOGICO A0
int buttonPin = 7;
int ledPin = 10;
bool buttonWasPressed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(SOLO_ANALOGICO, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool buttonPressed = digitalRead(buttonPin) == LOW;

  if (buttonPressed && !buttonWasPressed) {
    digitalWrite(ledPin, HIGH);

    int valorSolo = analogRead(SOLO_ANALOGICO);

    Serial.print("Umidade do solo: ");
    Serial.println(valorSolo);

    if (valorSolo > 800) {
      Serial.println("Nenhuma chuva detectada na localizacao.");
    } else if (valorSolo > 400) {
      Serial.println("Chovendo na localizacao.");
    } else {
      Serial.println("ALAGAMENTO DETECTADO NA LOCALIZACAO!");
    }

    Serial.println("Z-ALERT: Pedido de socorro enviado!");
    Serial.println("Localizacao: -23.123, -46.567");
    Serial.println("Equipe Z-Alert a caminho!");
    buttonWasPressed = true;

  } else if (!buttonPressed && buttonWasPressed) {
    digitalWrite(ledPin, LOW);
    buttonWasPressed = false;
  }
}