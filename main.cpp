#include <iostream>
#include "remidi.h"
using namespace std;

int main() {
    list L;
    createList(L);

    infotype p1, p2, p3;

    p1.namaTanaman = "Padi";
    p1.bulanPanen = "Maret";
    p1.jumlahPanen = 500;

    p2.namaTanaman = "Jagung";
    p2.bulanPanen = "Maret";
    p2.jumlahPanen = 350;

    p3.namaTanaman = "Labu";
    p3.bulanPanen = "April";
    p3.jumlahPanen = 200;

    tambahData(L, p1);
    tambahData(L, p2);
    tambahData(L, p3);

    address max = panenTerbanyak(L);
    if (max != NULL) {
        cout << "Panen terbanyak: "
             << max->info.namaTanaman << " ("
             << max->info.jumlahPanen << " kg)" << endl;
    }

    cout << "Panen bulan Maret: ";
    panenBulanan(L, "Maret");

    return 0;
}
