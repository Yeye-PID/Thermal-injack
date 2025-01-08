#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void shell(const char *message) {
    // Simulating a notification, this is the same as your cmd notification
    char command[512];
    snprintf(command, sizeof(command), "cmd notification post -S bigtext -t '🍃 Thermal Injack ' 'Tag' '%s' > /dev/null 2>&1", message);
    system(command);
}

int main() {   
    // main tweak
    system("eval \"$(seq 32 | sed 's/^/service call thermalservice /g' | sed 's/$/ f 1/g')\" > /dev/null 2>&1 ");
    system("cmd thermalservice override-status 0");
    system("settings put global activity_manager_constants power_check_max_cpu_1=100,power_check_max_cpu_2=100,power_check_max_cpu_3=100,power_check_max_cpu_4=100");
    system("settings put secure thermal_limit_refresh_rate 100");
    printf ("\n.");
    printf ("\n.");
    printf ("\n.");
    printf ("\n.");
    printf ("\n.");
    printf ("\n.");
    sleep(1);
    printf ("\nDisable thermalservice Succcesfully");
    // Note documentasi
    printf("\n\n");
    printf(" ⚠️ Module ini dilindungi oleh hak cipta dan hanya\n");
    printf(" dapat digunakan oleh pengguna biasa Penggunaan ini\n");
    printf(" tidak diperbolehkan untuk pengembang lain, termasuk\n");
    printf(" penggunaan kode, desain, atau fitur lain dalam module\n");
    printf(" tanpa izin tertulis dari pemilik hak cipta module.\n");
    printf("______________________________________________(+)\n");
    printf("\n");
    sleep(5);
    shell("Succesfully");
    return 0;
}