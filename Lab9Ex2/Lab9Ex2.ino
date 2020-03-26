#define ENA 2
#define ENB 3

int count = 0;

void setup()
{
  pinMode(ENB, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("TestEncoder");
  
  attachInterrupt(digitalPinToInterrupt(ENB),
                  ISR_Ext, RISING);
}

void loop()
{
  Serial.println(count);
}

void ISR_Ext()
{
   count++;
}
