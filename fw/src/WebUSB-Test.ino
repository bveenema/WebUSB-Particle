/*
 * Project WebUSB-Test
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(9600);

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  static int count = 0;
  Serial.printlnf("test %i", count);
  count++;
  delay(1000);
}
