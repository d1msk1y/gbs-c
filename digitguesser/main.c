/*
Lorin Frei
18.09.2024
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    int zufallszahl, benutzereingabe, versuche;
    char weitermachen;
 
    do {
        // Initialisiere den Zufallsgenerator basierend auf der aktuellen Zeit
        srand(time(0));
        zufallszahl = rand() % 100 + 1;  // Zufallszahl zwischen 1 und 100
        versuche = 0;
 
        printf("Willkommen zum Zahlenraten-Spiel!\n");
        printf("Ich habe eine Zahl zwischen 1 und 100 gewählt. Versuche sie zu erraten!\n");
 
        // Hauptspiel-Schleife
        do {
            printf("Gib eine Zahl ein: ");
            scanf("%d", &benutzereingabe);
            versuche++;
 
            if (benutzereingabe > zufallszahl) {
                printf("Zu hoch! Versuche es noch einmal.\n");
            } else if (benutzereingabe < zufallszahl) {
                printf("Zu niedrig! Versuche es noch einmal.\n");
            } else {
                printf("Glückwunsch! Du hast die Zahl in %d Versuchen erraten!\n", versuche);
            }
        } while (benutzereingabe != zufallszahl);
 
        // Den Benutzer fragen, ob er weitermachen möchte
        printf("Möchtest du noch einmal spielen? (j/n): ");
         system("pause");
        getchar(); // Diese Zeile fängt den verbleibenden "Enter"-Tastendruck ab
        scanf("%c", &weitermachen);
 
    } while (weitermachen == 'j' || weitermachen == 'J');  // Spiel wiederholen, wenn der Benutzer 'j' eingibt
   
    printf("Drücke Enter, um das Program zu beenden\n");
    getchar();
    getchar();
 
    system("pause");
    printf("Danke fürs Spielen! Auf Wiedersehen!\n");
   
    return 0;
   
}
