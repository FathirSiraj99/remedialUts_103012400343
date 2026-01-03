#include <iostream>
#include "remidi.h"
using namespace std;

int main() {
    list L;
    createList(L);

    infotype p1, p2, p3, p4, p5;

    p1.namaTanaman = "Padi";
    p1.bulanPanen = "Maret";
    p1.jumlahPanen = 1000;

    p2.namaTanaman = "Jagung";
    p2.bulanPanen = "Maret";
    p2.jumlahPanen = 790;

    p3.namaTanaman = "Labu";
    p3.bulanPanen = "Maret";
    p3.jumlahPanen = 550;

    p4.namaTanaman = "Padi";
    p4.bulanPanen = "Februari";
    p4.jumlahPanen = 850;

    p5.namaTanaman = "Wortel";
    p5.bulanPanen = "Januari";
    p5.jumlahPanen = 500;

    tambahData(L, p1);
    tambahData(L, p2);
    tambahData(L, p3);
    tambahData(L, p4);
    tambahData(L, p5);

    address max = panenTerbanyak(L);
    if (max != NULL) {
        cout << "Panen terbanyak: "
             << max->info.namaTanaman << " ("
             << max->info.jumlahPanen << " kg)" << endl;
    }

    cout << "Data panen" << endl;
    panenBulanan(L);

    return 0;
}
