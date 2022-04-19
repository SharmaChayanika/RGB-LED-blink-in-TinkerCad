int r=3;
int g=6;
int b=5;
void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}
void loop() {
  RGB_color(255, 0, 0); // Red
  delay(1000);
  RGB_color(0, 255, 0); // Green
  delay(1000);
  RGB_color(0, 0, 255); // Blue
  delay(1000);
  RGB_color(255, 255, 125); // Raspberry
  delay(1000);
  RGB_color(0, 255, 255); // Cyan
  delay(1000);
  RGB_color(255, 0, 255); // Magenta
  delay(1000);
  RGB_color(255, 255, 0); // Yellow
  delay(1000);
  RGB_color(255, 255, 255); // White
  delay(1000);
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(r, red_light_value);
  analogWrite(g, green_light_value);
  analogWrite(b, blue_light_value);
}
