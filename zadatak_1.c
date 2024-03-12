#include<stdio.h>
int main(void) {
    char *mjeseci[] = { "sijecanj", "veljaca", "ozujak", "travanj", "svibanj",
                        "lipanj", "srpanj", "kolovoz", "rujan", "listopad",
                        "studeni", "prosinac" };
    int a = 0;

    printf("Unesi broj izmedu 1 i 12: ");
    scanf("%d", &a);
    printf("REZULTATI:\n");
    if (a < 1 || a > 12){
        printf("Nekorektan broj mjeseca");
    }else{
        printf("%s", *(mjeseci + a-1));
    }
    return 0;
}
