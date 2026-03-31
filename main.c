#include <stdio.h>
#include <stdlib.h>

void menuSuhu();    
void menuJarak();   
void menuBerat();   
void menuWaktu();   

int main() {
    int pilihan;

    while (1) {
        // Tampilan Menu Utama (Tugas: Ketua Kelompok & Anggota 5)
        printf("\n==================================\n");
        printf("   KALKULATOR KONVERSI SATUAN CLI \n");
        printf("==================================\n");
        printf("1. Konversi Suhu (Celcius)\n");
        printf("2. Konversi Jarak (Kilometer)\n");
        printf("3. Konversi Berat (Kilogram)\n");
        printf("4. Konversi Waktu (Jam)\n");
        printf("5. Keluar\n");
        printf("----------------------------------\n");
        printf("Pilih Menu (1-5): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                menuSuhu();
                break;
            case 2:
                menuJarak();
                break;
            case 3:
                menuBerat();
                break;
            case 4:
                menuWaktu();
                break;
            case 5:
                printf("Terima kasih telah menggunakan program ini!\n");
                exit(0);
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    return 0;
}

// --- IMPLEMENTASI FUNGSI ---

// Anggota 1: Konversi Suhu (Celcius ke Fahrenheit/Kelvin)
void menuSuhu() {

}

// Anggota 2: Konversi Jarak (Kilometer ke Meter/Centimeter)
void menuJarak() {
    double kilometer, meter;

    // Tampilan judul
    printf("=== Kalkulator Konversi Jarak (KM ke Meter) ===\n");

    // Input dari pengguna
    printf("Masukkan jarak dalam kilometer (km): ");
    scanf("%lf", &kilometer);

    // Proses konversi
    meter = kilometer * 1000;

    printf("Hasil: %.2f km = %.2f meter\n", kilometer, meter);
}

// Anggota 3: Konversi Berat (Kilogram ke Gram/Pons)
void menuBerat() {

}

// Anggota 4: Konversi Waktu (Jam ke Menit/Detik)
void menuWaktu() {

}