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

}

// Anggota 3: Konversi Berat (Kilogram ke Gram/Pons)
void menuBerat() {
     float kilogram, gram;

    printf("=== Kalkulator Konversi Berat ===\n");
    printf("Konversi Kilogram (kg) ke Gram (g)\n\n");

    // Input
    printf("Masukkan berat dalam kilogram: ");
    scanf("%f", &kilogram);

    // Proses konversi
    gram = kilogram * 1000;

    printf("Hasil: %.2f kg = %.2f gram\n", kilogram, gram);
}


// Anggota 4: Konversi Waktu (Jam ke Menit/Detik)
void menuWaktu() {
  
}