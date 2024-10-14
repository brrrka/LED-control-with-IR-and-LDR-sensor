#define IR_SENSOR_PIN1 2
#define IR_SENSOR_PIN2 4
#define IR_SENSOR_PIN3 7
#define LDR_SENSOR_PIN 3
#define LED_PIN1 9
#define LED_PIN2 10
#define LED_PIN3 11

void setup() {
  pinMode(IR_SENSOR_PIN1, INPUT);
  pinMode(IR_SENSOR_PIN2, INPUT);
  pinMode(IR_SENSOR_PIN3, INPUT);
  pinMode(LDR_SENSOR_PIN, INPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int irValue1 = digitalRead(IR_SENSOR_PIN1);
  int irValue2 = digitalRead(IR_SENSOR_PIN2);
  int irValue3 = digitalRead(IR_SENSOR_PIN3);
  int ldrValue = digitalRead(LDR_SENSOR_PIN);

  if (ldrValue == LOW) {
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
  } else {
    int kecerahanLED1 = 16;
    int kecerahanLED2 = 16;
    int kecerahanLED3 = 16;

    if (irValue1 == LOW) {
      kecerahanLED1 = 255;
      Serial.println("Ada mobil lewat di 1");
    } 
    if (irValue2 == LOW) {
      kecerahanLED2 = 255;
      Serial.println("Ada mobil lewat di 2");
    } 
    if (irValue3 == LOW) {
      kecerahanLED3 = 255;
      Serial.println("Ada mobil lewat di 3");
    }
    analogWrite(LED_PIN1, kecerahanLED1);
    analogWrite(LED_PIN2, kecerahanLED2);
    analogWrite(LED_PIN3, kecerahanLED3);
  }
}
