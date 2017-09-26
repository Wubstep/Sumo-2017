int MotorLF = 12;
int MotorLB = 11;
int MotorRF = 9;
int MotorRB = 8;
int Sensor1 = 6;

void setup()
{
  pinMode(MotorLF, OUTPUT);
  pinMode(MotorLB, OUTPUT);
  pinMode(MotorRF, OUTPUT);
  pinMode(MotorRB, OUTPUT);
}
void loop()
{
  digitalWrite(MotorLF, HIGH);
  digitalWrite(MotorLB, LOW);
  digitalWrite(MotorRF, HIGH);
  digitalWrite(MotorRB, LOW);
}
