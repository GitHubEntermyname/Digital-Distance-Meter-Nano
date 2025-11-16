#include <Wire.h>
#include <LiquidCrystal_I2C.h>  // Add this library

// Define the trigger and echo pin numbers
#define trig 3
#define echo 2

// Create an instance of the LiquidCrystal_I2C class
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Variables to store time taken, distance in inches, centimeters, and feet
float time_taken, inches, cm, ft;

void setup()
{
  // Set the pin modes
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  // Initialize the LCD display
  lcd.begin();
  
  // Print initial messages on the LCD
  lcd.print("Rajj Engineering");
  lcd.setCursor(0, 1);
  lcd.print("Like & Subscribe");
  
  // Wait for 2 seconds
  delay(2000);
  
  // Reset the cursor position to the beginning of the first line
  lcd.setCursor(0, 0);
}

void loop()
{
  // Trigger the ultrasonic sensor
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  // Measure the time taken for the ultrasonic pulse to return
  time_taken = pulseIn(echo, HIGH);
  
  // Calculate the distance in centimeters, inches, and feet
  cm = time_taken / 58;
  inches = time_taken / 148;
  ft = inches / 12;
  
  // Clear the LCD display
  lcd.clear();
  
  // Display the distance on the LCD screen
  if (inches <= 12)
  {
    lcd.print("Inches = ");         // Print on Screen
    lcd.print(inches);
    lcd.setCursor(0, 1);
    lcd.print("cm = ");             // Print on Screen
    lcd.print(cm);
  }
  else
  {
    lcd.print("Ft = ");             // Print on Screen
    lcd.print(ft);
    lcd.setCursor(0, 1);
    lcd.print("Inches = ");         // Print on Screen
    lcd.print(inches);
  }
  
  // Delay before the next measurement
  delay(300);
}
