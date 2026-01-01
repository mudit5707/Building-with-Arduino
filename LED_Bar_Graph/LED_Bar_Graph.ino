int potPin = A0;
int potValue = 0;
int numLeds = 9;
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup()
{
  for(int i = 0; i<numLeds; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  potValue = analogRead(potPin);
  int digValue = map(potValue, 0, 1023, 0, numLeds-1);
  for(int i = 0; i<numLeds; i++)
  {
    if (i<=digValue)
    {
      digitalWrite(ledPins[i], HIGH);
    }
    else
    {
      digitalWrite(ledPins[i], LOW);
    }
  }
  
}