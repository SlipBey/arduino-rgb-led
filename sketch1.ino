//RGB ledinin bacaklarını arduinomuzun hangi girişine bağladığımızı yazıyoruz.
int R=9; //En soldaki bacak
int G=10; //Soldakinin yanındaki bacak
int B=11; //En sağdaki bacak
//Yani 1 bacağımızı boşta bırakıyoruz

void setup() {
pinMode(R && G && B,OUTPUT); //Ledler çıkış olarak geştiği için bacakları direkt çıkışa yazıyoruz.
}
 
void loop() {
//Kırmızı ışığımızın renk kodları
analogWrite(R,191);
analogWrite(G,42);
analogWrite(B,151);
delay(500); //500 Milisaniye sonra yeni renge geçiyoruz.
//Mavi ışığımızın renk kodları
analogWrite(R,44);
analogWrite(G,191);
analogWrite(B,42);
delay(500); //500 Milisaniye sonra yeni renge geçiyoruz.
//Yeşil ışığımızın renk kodları
analogWrite(R,42);
analogWrite(G,169);
analogWrite(B,191);
delay(500); //500 Milisaniye sonra tekrar kırmızı ışığa dönerek bir denge oluşturuyoruz.
}
