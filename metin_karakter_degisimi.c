#include <stdio.h>
// klavyeden metin girilecek,hangi karakterin hangi karakterle değiştirileceği kullanıcıya sorulacak ve yeni metin ekrana yazdırılacak
// input: bilgisayar bilimi  değişecek karakter: i  değiştirilecek karakter: *
// output: b*lg*sayar b*l*m* 5 adet i karakteri* ile değiştirildi

int main()

{
  
 int KarakterSayisi = 0;  
   
 int i = 0;  
   
 char input[30];  
   
 char DegisecekKarakter;
 
 char DegistirilecekKarakter;
 
 puts("metin girin:");
 gets(input);
 
 puts("hangi karakteri degistirmek istiyorsunuz?:");
 scanf("%c",&DegisecekKarakter);
 
 puts("hangi karakter ile degistirmek istiyorsunuz?:");
 
//Buffer her hangi bir hafıza alanında geçici bir kayıt alanıdır(tampon saha),verilerin I/O işlemlerinden sonra belleğe yazılmadan önce uğradıkları bir sahadır.
 fflush(stdin);  // buffer(arabellek)'i temezledik
 
 scanf(" %c",&DegistirilecekKarakter);
  
 while(input[i] != '\0') 
 {
    
   if(input[i] == DegisecekKarakter) 
   {
    KarakterSayisi++;
    
    input[i] = DegistirilecekKarakter;
   }
    
   i++; 
 } 
  
  puts(input);
  
  printf("metinde %d adet %c karakteri %c ile degistirildi.",KarakterSayisi,DegisecekKarakter,DegistirilecekKarakter);
 
  return 0;
  
}
