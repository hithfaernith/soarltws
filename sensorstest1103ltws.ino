int motor11 = 5;
int motor12 = 6;
int motor21 = 9;
int motor22 = 10;
int IR1 = 11;
int IR2 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor11, OUTPUT);
  pinMode(motor12, OUTPUT);  
  pinMode(motor21, OUTPUT);
  pinMode(motor22, OUTPUT);
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int IR1val = digitalRead(IR1);
  int IR2val = digitalRead(IR2);
  digitalWrite(motor11, HIGH);
  digitalWrite(motor11, LOW);
  digitalWrite(motor22, HIGH);
  digitalWrite(motor22, LOW);
  Serial.print("IR1: ");
  Serial.println(IR1val);
  delay(1000);
  Serial.print("IR2: ");
  Serial.println(IR2val);
  delay(1000);
}
