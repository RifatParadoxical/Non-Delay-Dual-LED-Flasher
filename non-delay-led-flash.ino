const int one = 12;
const int two = 13;
int status1 = LOW;
int status2 = LOW;

unsigned long one_t = 0;
unsigned long two_t = 0;

void setup()
{
  pinMode(one, OUTPUT);
  pinMode(two, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  unsigned long time = millis();
  if(time-one_t >= 500)
  {
    one_t = time;
    status1 = !status1;
    digitalWrite(one, status1);
  }
  if(time-two_t >= 200)
  {
    two_t = time;
    status2 = !status2;
    digitalWrite(two, status2);
  }
}
