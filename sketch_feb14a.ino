class LED
 {
 int ledPin; // ตําแหนงขาของบอรด Arduino ที่ LED ตออยู
 public:
 LED(int pin); // constructor จะทําหนาที่กําหนดขา MCU ที่ตอกับ LED ใหโดยอัตโนมัติทุกครั้งที่สรางวัตถุ
 LED(); // constructor ธรรมดา
 void Init(int pin); // กําหนดตําแหนงขา MCU ที่ตอกับ LED
 void On(); // สั่งให LED ติด
 void Off(); // สั่งให LED ดับ
 void Flash(); // สั่งให LED กระพริบ
 };
 LED::LED(int pin)
{
 ledPin = pin;
 pinMode(pin, OUTPUT); // set LED pin as OUTPUT
}
LED::LED()
{
}
void LED::On()
{
 digitalWrite(ledPin, HIGH);
}
void LED::Init(int pin)
{
 ledPin = pin;
 pinMode(pin, OUTPUT); // set LED pin as OUTPUT
}
void LED::Off()
{
 digitalWrite(ledPin, LOW);
}
void LED::Flash()
{ On();
 delay(10);
 Off();
 delay(100);
}
 LED led1; // สราง object ของ LED มาตัวหนึ่ง
void setup() {
 // put your setup code here, to run once:
 led1.Init(13); // กําหนดใหตอที่ขา 13 ของ Arduino
}
void loop() {
 // put your main code here, to run repeatedly:
 led1.Flash(); // สั่งใหกระพริบ ไมรูจบ โคดอยูใน void LED::Flash()
}
