#include <stdio.h>

void gerbang(int izin, int radiasi, int jam, float suhu){

    if(radiasi >= 6){
        printf("TOLAK\n");
    }
    else if(suhu >= 390){
        printf("KARANTINA\n");
    }
    else if(izin == 1 && (jam < 6 || jam > 20)){
        printf("TOLAK\n");
    }
    else if(izin == 1){
        printf("MASUK\n");
    }
    else if(izin == 2 && radiasi <= 2 && (jam >= 8 || jam <= 18)){
        printf("MASUK\n");
    }
    else if(izin == 2){
        printf("PEMERIKSAAN\n");
    }
    else if(izin == 3 && radiasi == 0 && suhu < 380){
        printf("MASUK\n");
    }
    else{
        printf("TOLAK\n");
    }
    return;
}

int main(){
    int izin, radiasi, jam;
    float suhu;

    scanf("%d", &izin);
    scanf("%f", &suhu);
    scanf("%d", &radiasi);
    scanf("%d", &jam);

    gerbang(izin, radiasi, jam, suhu);

    return 0;
}
