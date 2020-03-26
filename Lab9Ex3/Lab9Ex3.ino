#define ENA 2
#define ENB 3

int previous_A = 0;
int enA = 0;
int enB = 0;

void setup()
{
  pinMode(ENA, INPUT_PULLUP);
  pinMode(ENB, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  enA = digitalRead(ENA);
  enB = digitalRead(ENB);
  
  if(previous_A == 0 && enA == 1)
  {
    if(enB == 1)
    {
      Serial.println("Counter-Clockwise");
    } 
    if(enB == 0)
    {
      Serial.println("Clockwise");
    }
  }
  
  previous_A = enA;
}
