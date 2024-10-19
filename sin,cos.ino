void setup() {
  // آغاز ارتباط سریال با سرعت 9600
  Serial.begin(9600);
}

void loop() {
  // از 0 تا 360 درجه یک چرخه کامل سینوسی و کسینوسی ایجاد می‌کنیم
  for (int i = 0; i < 360; i++) {
    // تبدیل درجه به رادیان
    float rad = i * (PI / 180.0);
    
    // محاسبه مقدار سینوسی و کسینوسی
    float sinValue = sin(rad);
    float cosValue = cos(rad) + 2;  // اضافه کردن مقدار ثابت به موج کسینوسی
    
    // نمایش مقادیر سینوسی و کسینوسی در سریال پلاتر
    Serial.print(sinValue);
    Serial.print(",");
    Serial.println(cosValue);
    
    // تاخیر برای اینکه شکل موج‌ها در پلاتر قابل مشاهده باشند
    delay(10);
  }
}
