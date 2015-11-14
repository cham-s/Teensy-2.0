int mode1 = 22; // interupteur 2 positions

void setup()
{
  int i = 0; //Déclaration du compteur à 0
  pinMode(mode1, INPUT); //Initialisation du pin 22 en mode input
  
  while (i <= 45)
  {
    pinMode(i, OUTPUT); //Initialisation des pins 0 à 21 en mode output
    i += 1; 
  }
}

void  constantVert(void)
{
  int i = 0;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 2;
  }
}

void  constantRouge(void)
{
  int i = 1;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 2;
  }
}

void constantOrange()
{
  int i = 0;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    i += 1;
  }
}

void chenillard(int tempo)
{
  int i = 0;
  while (i <= 21)
  {
    digitalWrite(i, HIGH);
    delay(tempo);
    digitalWrite(i, LOW);
    i += 1;
  }
}
void loop()
{
  if (digitalRead(mode1) == LOW)
  {
    chenillard(20);
    
  }
  else if (digitalRead(mode1) == HIGH)
  {
    constantRouge();
  }
}
