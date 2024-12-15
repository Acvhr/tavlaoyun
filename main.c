#include <stdio.h>
#include <stdlib.h>

int main()
{
int puan1=0,puan2=0;
int oyuncu;
int elsayisi=0;
int mars;
printf("tavla oyununa hosgeldiniz\n");
printf("ilk 5 e ulasan kazanir");
printf("basliyor...\n");


while(puan1<5 && puan2<5){
        elsayisi++;
        printf("el sayisi=%d\n",elsayisi);
        printf("oyunu kim kazandi (1 veya 2 ):");
        scanf("%d",&oyuncu);
        printf("mars oldumu(evet=1,hayir=2):");
        scanf("%d",&mars);

        if(oyuncu==1){
            if(mars==1){
                puan1=puan1+2;
            }
            else  {
                puan1=puan1+1;
            }
           } else if(oyuncu==2){
                if(mars==1){
                    puan2=puan2+2;
                }
                else{
                    puan2=puan2+1;
                }

            }

        printf("puan durumu oyuncu 1=%d , oyuncu 2=%d ",puan1,puan2);
        printf("\n");}
        if(puan1>=5){
            printf("oyunu oyuncu 1 kazandi");
        }
        else if(puan2>=5){
            printf("oyunu oyuncu 2 kazandi");
        }
    return 0;
}
