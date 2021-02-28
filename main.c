#include <stdio.h>
#include <stdlib.h>
int dizi[6][5] = {0};

void ciz(){
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            printf("%d ",dizi[i+1][j+1]);
        }
        printf("\n");
    }
}
void rota(){
     printf("Robotun baslangic satir ve sutunlerini giriniz...\n");
    int a,b;
    scanf("%d%d",&a,&b);
    dizi[a][b] =! dizi[a][b];
    printf("-----------------------------\n");

   printf("(programi sonlandirmek icin 0 giriniz...)\n");
   printf("(1:sag , 2:sol , 3:asagi , 4:yukari...)");
   printf("Komutlari giriniz = ");
   //printf("-----------------------------\n");
   int t;
   int sayac1=1;
   scanf("%d",&t);
   while(t != 0){

        if(t==1){
                b += sayac1;
             dizi[a][b] =! dizi[a][b];

        }else if(t==2){
              b -= sayac1;
             dizi[a][b] =! dizi[a][b];

        }else if(t==3){
             a += sayac1;
             dizi[a][b] =! dizi[a][b];

        }else if(t==4){
            a -= sayac1;
             dizi[a][b] =! dizi[a][b];

        }

    scanf("%d",&t);

            }

}

int main()
{
    int dizi[6][5]={0};

    printf("Robotun rotasi...\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }

    rota();
    ciz();
    return 0;
}
