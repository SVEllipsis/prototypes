
/*
  Temperature Sensor Example Code
  This code takes a voltage in mv and coverts it to celcius via kelvin

  Wiring (left to right):
  
  Pin 1 -> Nothing
  Pin 2 -> A0 In -> 1K Resistor -> 5V
  Pin 3 -> GND

*/

void setup() {
  Serial.begin(9600);
}

void loop() {

  float analog_read = analogRead(0);
  float celsius = read_to_celsius(analog_read);
  
  Serial.println(celsius);
  delay(1000);
}

//
// read_to_celsius
//

float read_to_celsius(float analog_read){
  float kelvin = ((analog_read * 4.90) / 10);
  float celsius = kelvin - 273.15;
  return celsius;
}
