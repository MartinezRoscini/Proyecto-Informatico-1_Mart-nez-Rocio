int escribir[] = {2, 3, 4, 5, 6, 7, 8};
int leer[] = {9, 10, 11, 12};
int ESW[] = {1, 2, 3, 4};
int cero[] = {2, 3, 4, 6, 7, 8};
int uno[] = {2, 6};
int dos[] = {2, 3, 5, 7, 8};
int tres[] = {2, 3, 5, 6, 7};
int cuatro[] = {2, 4, 5, 6};
int cinco[] = {3, 4, 5, 6, 7};
int seis[] = {3, 4, 5, 6, 7, 8};
int siete[] = {2, 3, 6};
int ocho[] = {2, 3, 4, 5, 6, 7, 8};
int nueve[] = {2, 3, 4, 5, 6};
int a[] = {2, 3, 4, 5, 6, 8};
int c[] = {3, 4, 7, 8};
int d[] = {6, 5, 7, 8, 2};
int e[] = {3, 4, 5, 7, 8};
int f[] = {3, 4, 5, 8};
int h[] = {2, 4, 5, 6, 8};
void setup()
{
 for(int pos = 0; pos < (sizeof(escribir) / sizeof( int )); pos++)
 {
 pinMode(escribir[pos], OUTPUT);
 }
 for(int pos = 0; pos < (sizeof(leer) / sizeof(int)); pos++)
 {
 pinMode(leer[pos], INPUT);
 }
}
void loop()
{
 for(int pos = 0; pos < (sizeof(escribir) / sizeof( int )); pos++)
 {
 digitalWrite(escribir[pos], LOW);
 }
 bool ESW1 = digitalRead(leer[0]);
 bool ESW2 = digitalRead(leer[1]);
 bool ESW3 = digitalRead(leer[2]);
 bool ESW4 = digitalRead(leer[3]);
 if(ESW1 == false & ESW2 == false & ESW3 == false & ESW4 == false)
 {
 for(int i = 0 ; i < (sizeof(cero) / sizeof(cero[0])) ; i++ )
 {
 digitalWrite( cero[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == false & ESW3 == false & ESW4 == true){
 for(int i = 0 ; i < (sizeof(uno) / sizeof(uno[0])) ; i++ )
 {
 digitalWrite( uno[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == false & ESW3 == true & ESW4 == false){
 for(int i = 0 ; i < (sizeof(dos) / sizeof(dos[0])) ; i++ )
 {
 digitalWrite( dos[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == false & ESW3 == true & ESW4 == true)
 {
 for(int i = 0 ; i < (sizeof(tres) / sizeof(tres[0])) ; i++ )
 {
 digitalWrite( tres[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == true & ESW3 == false & ESW4 == false){
 for(int i = 0 ; i < (sizeof(cuatro) / sizeof(cuatro[0])) ; i++ )
 {
 digitalWrite( cuatro[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == true & ESW3 == false & ESW4 == true){
 for(int i = 0 ; i < (sizeof(cinco) / sizeof(cinco[0])) ; i++ )
 {
 digitalWrite( cinco[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == true & ESW3 == true & ESW4 == false){
 for(int i = 0 ; i < (sizeof(seis) / sizeof(seis[0])) ; i++ )
 {
 digitalWrite( seis[i] , HIGH );
 }
 }else if(ESW1 == false & ESW2 == true & ESW3 == true & ESW4 == true){
 for(int i = 0 ; i < (sizeof(siete) / sizeof(siete[0])) ; i++ )
 {
 digitalWrite( siete[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == false & ESW3 == false & ESW4 == false){
 for(int i = 0 ; i < (sizeof(ocho) / sizeof(ocho[0])) ; i++ )
 {
 digitalWrite( ocho[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == false & ESW3 == false & ESW4 == true){
 for(int i = 0 ; i < (sizeof(nueve) / sizeof(nueve[0])) ; i++ )
 {
 digitalWrite( nueve[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == false & ESW3 == true & ESW4 == false){
 for(int i = 0 ; i < (sizeof(a) / sizeof(a[0])) ; i++ )
 {
 digitalWrite( a[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == false & ESW3 == true & ESW4 == true){
 for(int i = 0 ; i < (sizeof(c) / sizeof(c[0])) ; i++ )
 {
 digitalWrite( c[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == true & ESW3 == false & ESW4 == false){
 for(int i = 0 ; i < (sizeof(d) / sizeof(d[0])) ; i++ )
 {
 digitalWrite( d[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == true & ESW3 == false & ESW4 == true){
 for(int i = 0 ; i < (sizeof(e) / sizeof(e[0])) ; i++ )
 {
 digitalWrite( e[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == true & ESW3 == true & ESW4 == false){
 for(int i = 0 ; i < (sizeof(f) / sizeof(f[0])) ; i++ )
 {
 digitalWrite( f[i] , HIGH );
 }
 }else if(ESW1 == true & ESW2 == true & ESW3 == true & ESW4 == true){
 for(int i = 0 ; i < (sizeof(h) / sizeof(h[0])) ; i++ )
 {
 digitalWrite( h[i] , HIGH );
 }
 }
}