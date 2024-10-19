int ledPin = 13;    // پین مربوط به LED
int buttonPin = 2;  // پین مربوط به دکمه (پین 2)
int buttonState = 0; // وضعیت دکمه

void setup() {
  pinMode(ledPin, OUTPUT);    // تنظیم پین LED به عنوان خروجی
  pinMode(buttonPin, INPUT);  // تنظیم پین دکمه به عنوان ورودی
}

void loop() {
  buttonState = digitalRead(buttonPin);  // خواندن وضعیت دکمه

  if (buttonState == HIGH) {  // اگر دکمه فشرده شده باشد
    digitalWrite(ledPin, HIGH);  // LED روشن شود
  } else {
    digitalWrite(ledPin, LOW);   // LED خاموش شود
  }
}
