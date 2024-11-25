#include <stdio.h>

int main()
{
    printf("Vitej v soutezi Chcete byt milionarem.\n");

    int money = 0;
    char answer;
    char question;
    printf("1. otazka (1 000 Kc)\n");
    printf("Ktery svetadil je nejmensi rozlohou?\n A) Evropa\n B) Australie\n C) Jizni Amerika\n D) Antarktida\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);

    switch (answer)
    {
    case 'B':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 0;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 0;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 1000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }

    printf("2. otazka (2 000 Kc)\n");
    printf("Kolik minut ma jeden den?\n A) 1440\n B) 1600\n C) 1200\n D) 2000\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'A':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 1000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 0;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 2000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }

    printf("3. otazka (3 000 Kc)\n");
    printf("Ktery rok probehla bitva na Bile hore?\n A) 1526\n B) 1648\n C) 1620\n D) 1781\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'C':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 2000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 0;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 3000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }

    printf("4. otazka (5 000 Kc)\n");
    printf("Ktery cesky prezident byl zvolen jako prvni po roce 1989?\n A) Vaclav Klaus\n B) Milos Zeman\n C) Ludvik Svoboda\n D) Vaclav Havel\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'D':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 3000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 0;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stiskněte Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 5000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("5. otazka (10 000 Kc)\n");
    printf("Ktery ocean je nejvetsi na svete?\n A) Indicky\n B) Atlantsky\n C) Severni ledovy\n D) Tichý\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'D':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 5000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 0;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 10000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("6. otazka (20 000 Kc)\n");
    printf("Jake je hlavni mesto Kanady?\n A) Toronto\n B) Montreal\n C) Ottawa\n D) Vancouver\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'C':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 10000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 10000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 20000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("7. otazka (40 000 Kc)\n");
    printf("Kolik je v lidskem tele kosti?\n A) 206\n B) 208\n C) 204\n D) 210\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'A':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 20000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 10000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 40000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("8. otazka (80 000 Kc)\n");
    printf("Kdo napsal hru Romeo a Julie?\n A) Charles Dickens\n B) William Shakespeare\n C) Victor Hugo\n D) Molière\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'B':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 40000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 10000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 80000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("9. otazka (160 000 Kc)\n");
    printf("Ktery prvek je v periodicke tabulce oznacen znackou Fe?\n A) Zinek\n B) Zelezo\n C) Fluor\n D) Fosfor\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'B':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 80000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 10000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 160000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("10. otazka (320 000 Kc)\n");
    printf("Kolik prstenu bylo vytvoreno v pribeh Pan prstenu?\n A) 5\n B) 7\n C) 9\n D) 20\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'D':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 160000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 10000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 320000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("11. otazka (640 000 Kc)\n");
    printf("Ktera zeme ma nejvice sousednich statu?\n A) Cina\n B) Rusko\n C) Brazilie\n D) Indie\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'B':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 320000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 320000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 640000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("12. otazka (1 250 000 Kc)\n");
    printf("Ktery jazyk ma nejvice rodilych mluvcu?\n A) Anglictina\n B) Spanelscina\n C) Hindstina\n D) Cinstina\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'D':
        money += 1250000;
        printf("Spravne\n");
        break;
    case 'Q':
        money = 640000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 320000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 1250000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("13. otazka (2 500 000 Kc)");
    printf("Ktery cesky kral byl nazyvan Otec vlasti?\n A) Premysl Otakar II.\n B) Vaclav IV.\n C) Karel IV.\n D) Jiri z Podebrad\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'C':
        printf("Spravne\n");
        break;

    case 'Q':
        money = 1250000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 320000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 2500000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("14. otazka (5 000 000 Kc)\n");
    printf("Ktery rok pristala prvni lidska posadka na Mesici?\n A) 1967\n B) 1969\n C) 1970\n D) 1972\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'B':
        money += 5000000;
        printf("Spravne\n");
        break;

    case 'Q':
        money = 2500000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 320000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }

    printf("Chcete pokracovat dal?\n Pokud chcete stisknete Y\n Pokud nechcete stisknete N\n");
    scanf(" %c", &question);
    switch (question)
    {
    case 'Y':
        break;

    case 'N':
        money = 5000000;
        printf("Konec hry. Vyhrali jste %d Kc", money);
        return 0;
        break;
    }
    printf("15. otazka (10 000 000 Kc)");
    printf("Jak se jmenuje nejvyssi hora Evropy?\n A) Mont Blanc\n B) Mount Elbrus\n C) Dufourspitze\n D) Matterhorn\n Pokud chcete skoncit stisknete Q\n");
    scanf(" %c", &answer);
    switch (answer)
    {
    case 'B':
        money = 10000000;
        printf("Spravne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        break;
    case 'Q':
        money = 5000000;
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
        break;

    default:
        money = 320000;
        printf("Spatne\n");
        printf("Gratuluji, vyhral jste: %d Kc\n", money);
        return 0;
    }
    return 0;
}