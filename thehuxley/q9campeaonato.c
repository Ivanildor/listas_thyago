#include <stdio.h>
int main(){
int cv, ce, cs, fv, fe, fs;
int pontosC, pontosF;
scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);

    pontosC = cv * 3 + ce;
    pontosF = fv * 3 + fe;

    if (pontosC > pontosF) {
        printf("C");
    }
    else if (pontosF > pontosC) {
        printf("F");
    }
    else {
        if (cs > fs) {
            printf("C");
        }
        else if (fs > cs) {
            printf("F");
        }
        else {
            printf("=");
        }
    }

    return 0;
  }