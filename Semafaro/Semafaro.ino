// C++ code
//
const int INTERVALO_VERDE = 10000;
const int INTERVALO_AMARELO = 2000;
int buzzer = 13; 
int v_semaforo1 = 0;
int a_semaforo1 = 1;
int vm_semaforo1 = 2;
int v_semaforo2 = 3;
int a_semaforo2 = 4;
int vm_semaforo2 = 5;
int v_semaforo3 = 6;
int a_semaforo3 = 7;
int vm_semaforo3 = 8;
int v_semaforo4 = 9;
int a_semaforo4 = 10;
int vm_semaforo4 = 11;
void setup()
{
  tone(buzzer, OUTPUT);
 digitalWrite(v_semaforo1,LOW);
digitalWrite(vm_semaforo1,HIGH);
digitalWrite(a_semaforo1,LOW);
digitalWrite(v_semaforo2,LOW);
digitalWrite(vm_semaforo2,HIGH);
digitalWrite(a_semaforo2,LOW);
digitalWrite(v_semaforo3,LOW);
digitalWrite(vm_semaforo3,HIGH);
digitalWrite(a_semaforo3,LOW);
digitalWrite(v_semaforo4,LOW);
digitalWrite(vm_semaforo4,HIGH);
digitalWrite(a_semaforo4,LOW);
  
pinMode(v_semaforo1,OUTPUT);
pinMode(a_semaforo1,OUTPUT);
pinMode(vm_semaforo1,OUTPUT);
pinMode(v_semaforo2,OUTPUT);
pinMode(a_semaforo2,OUTPUT);
pinMode(vm_semaforo2,OUTPUT);
pinMode(v_semaforo3,OUTPUT);
pinMode(a_semaforo3,OUTPUT);
pinMode(vm_semaforo3,OUTPUT);
pinMode(v_semaforo4,OUTPUT);
pinMode(a_semaforo4,OUTPUT);
pinMode(vm_semaforo4,OUTPUT);

}

void loop() {
// semaforo 1 e 3
  
   tone(buzzer, 1500, 1000);
digitalWrite(v_semaforo1,HIGH);
digitalWrite(a_semaforo1,LOW);
digitalWrite(vm_semaforo1,LOW);
  digitalWrite(v_semaforo3,HIGH);
digitalWrite(a_semaforo3,LOW);
digitalWrite(vm_semaforo3,LOW);
delay(INTERVALO_VERDE);
  
digitalWrite(v_semaforo1,LOW);
digitalWrite(a_semaforo1,HIGH);
  digitalWrite(v_semaforo3,LOW);
digitalWrite(a_semaforo3,HIGH);
delay(INTERVALO_AMARELO);
digitalWrite(a_semaforo1,LOW);
digitalWrite(vm_semaforo1,HIGH);
digitalWrite(a_semaforo3,LOW);
digitalWrite(vm_semaforo3,HIGH);

 
// semaforo 2 e 4
   tone(buzzer, 1500, 1000);
digitalWrite(v_semaforo2,HIGH);
digitalWrite(a_semaforo2,LOW);
digitalWrite(vm_semaforo2,LOW);
digitalWrite(v_semaforo4,HIGH);
digitalWrite(a_semaforo4,LOW);
digitalWrite(vm_semaforo4,LOW);
delay(INTERVALO_VERDE);
 
digitalWrite(v_semaforo2,LOW);
digitalWrite(a_semaforo2,HIGH);
   digitalWrite(v_semaforo4,LOW);
digitalWrite(a_semaforo4,HIGH);
delay(INTERVALO_AMARELO);
digitalWrite(a_semaforo2,LOW);
digitalWrite(vm_semaforo2,HIGH);
digitalWrite(a_semaforo4,LOW);
digitalWrite(vm_semaforo4,HIGH);

 

}
