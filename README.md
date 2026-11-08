# Домашнее задание к работе 9

## Условие задачи
Написать программу, выводящую на экран заданную геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа:

<img width="265" height="256" alt="image" src="https://github.com/user-attachments/assets/ef013fff-63a0-403a-877a-834576ce6fa6" />


## 1. Алгоритм и блок-схема

1. Начало.
2. Объявить символьную переменную `symbol`.
3. Ввести символ, из которого будет построена фигура.
4. Вывести заголовок «Вывод фигуры в координатной сетке».
5. Присвоить переменной y начальное значение 7.
6. Проверить условие `y >= -3`.
- Если условие выполняется, перейти к следующему шагу.
- Если не выполняется, завершить программу.
7. Проверить условие `y >= 2`.
- Если да, присвоить `x_max = -1`.
- Если нет, присвоить `x_max = -3`.
8. Присвоить переменной x начальное значение `-6`.
9. Проверить условие `x < x_max`.
- Если да, вывести символ `symbol` и увеличить ` x` на `1`.
- Если нет, перейти к следующему шагу.
10. Перейти на новую строку.
11. Уменьшить `y` на `1`.
12. Вернуться к проверке условия `y >= -3`.
13. Конец.

### Блок-схема

<img width="851" height="816" alt="{1EC65CA8-4D58-4372-8A10-EF8609896107}" src="https://github.com/user-attachments/assets/eeac19bc-c3c8-4f54-a62d-6be447d4b18d" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22triangle-flowchart%22%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7Vxbc5s4FP41nmkf7AHE9TG243Zns9t2023afcnIRrHZYOQFnOD%2B%2BpVAYBAYAwZfUiczNghJGJ3v3I%2FogdEy%2BODC1eIPbCK7Jwlm0APjniSJhgjIF23ZsBZBEKOWuWuZrG3bcG%2F9RHFH1rq2TORlOvoY2761yjbOsOOgmZ9pg66LX7PdnrCdvesKzlGu4X4G7Xzrg2X6i6hVl7Rt%2B0dkzRfxnUXViK4sYdyZPYm3gCZ%2BTTWB2x4YuRj70dEyGCGbrl68LtG4yY6ryQ9zkeNXGeD50PXzg9g8nr%2BJH5kMI6tLToavC8tH9ys4o1deCYVJ28Jf2uRMJIfQW0VL%2FmQFiNxl%2BGTZ9gjb2CVtNl2Uvgnd53c9CUzCv540So7fk%2F6e7%2BJnVDxCCP%2BiEdExHfGEHX8Cl5ZN8fTVWhJoSMKf6JV8%2FoWX0GFdGI7IikTndW4RrccLtNdsPXpjoWeM6edQ6JEH17X4mHwOw89bNgi5PgpS68oo8QHhJfLdDemySIFFYch43QJLlFkbmwXE55ssW0AG63ky85by5IARvxgIUl8C3%2B4eb6aipG3kn2tvLn7py9G8yMyxQx4qeO3OWC%2B89pGbRxCZ5Z6dYtdf4Dl2oH27bR26eO2YFDNjSqJtnzuMVwxd%2FyLf3zBCwrWPs9gz0RNc2%2F4dnCJ7CGfP83DGmM4RVw9DyN9QKUDaZjb0PGsWN08sO54LOWbcycEOilrYdeGtwJpQ0d18p080UOLTH8kCkJNxwB43Otuwszw7FOLaRTb0rZcseIpQyoZ%2BxhaBVYJzWeRwrnJAJySbI5%2BN4rCe%2FIzm8BfVC8M%2FCiz%2Fe0wwcvxjS1lytqUlPdmkCVsAAWEPBCrx2oUxyW34x%2F8oZmCEWGOkdMwDAX%2BQWBa1jHkDpzHEhDw8S4HNoTOkJafNyQI5VE6SCQmmwZBqM4tYQjfswtIyzQi8yLN%2Bsp9CV3lFuTJ8cmXYU8akxXIWyLX8rygIzQNKlfD%2B0ojoR%2F8TsSgsnyzOyA4hhV0TuRGZMk2RwRU3ccCTRmWwZIM%2BQ9O0nHkz8FSDfYvWhRJaF1JlW6IQgmxIn%2FC4oOgZodoHlcVy3AU%2FPXnoUImbEpLllqe7wMvp2ttveZYIG20Czk7YVIQCIYQKl%2FRR5z69DsaEYmDSyLY06tuW3RmXotFMu1pE6F21K%2BoKwHltV0w9%2FZQaUJIO1YDGmWhACjZpdA7KsBPNVhlwGV9CtX02NkMi9b81ji%2F0vZBNb0gHUV8F4TzxdXIUycoCLRpNTUAXzc46tqRcgSQrWY%2BltsuTHdCKpk0JzO41bdqsv6H%2Fl6NpY3B4KzJ%2FEe5m0ewUc6kbuPPpu2hyIf56H30XXXlfiNQgUfLhLwgelzAIlXwC1%2BhH1YTrgbpfkVrQ%2FZYze7QqoS%2Bjn9tB4IXZensRyEs%2BaYfkowQlmBqKbSKoKDKpZBGkqFkEqW1Yj8zbvkaoG%2FiQNywSTT%2FTmlBtDQG8DOFEiNwGAMRmnkIquXFkT2EbO57aePbcSweP34z4aurbVPUwCsRjk4CHWtsG48LOPITbizoj%2FdJc4DrAJmBBoqkg7VwBXOg1JemenOcFxsxF2iltZZYDPEYyROsQlnUiM1f8Haiy04IwZSx3nlzTOTyp2kDJThKJnO7Sa1VA5S3gih6SXtC2kY3nLlzS4ApyCU3CiEz22ufthX2GYDj3b45nmSiBD7EIGUnL9fStOFZutYvQ0zk8eZvlFNtht8g7MK2X2DOgP0NLeQ2pS62ZjBpnMkpc0EToKuSsVUFcF37ohUVCKBHDI4Ee9amn2Yj46n7iq1zMAXSWb2hoa5VEv7Pab6uatkUlKaRkYVUp2JoysGXVyJjYA8PQ9pjZF6UKk9xKkk9JylDKcyspcV%2FHudAqKtkiUVaoeFMQ52Ii5JFEdV%2BSlUAHblIdWO5gp%2FaWOJmpy1ydH9dfE42BBuoNkbKcqQq1byErmSHkIHrOihYuEAcS573tMElyc6ncXMBQeOum4%2BKhhtnNMrR2LG0KWVAoZcG3mXLvTBTQFJEmczmeg2WBxttPRjmjqkrN%2Fpwg2NdfAaX990gBheNciS%2F6qyoCctWDBjdR19WDUhVr81z9m0s2X2P%2FpiWLVVcyTAzExFHeFYppr0ZGaaZFUnGEE9XI1FAiiZkrDgSRM3MVAewxcwutwNrFqWdvIOft2iQIfLIyVP0q4E5koCijvaliWkbUN9EMuwQK2OnbFo1q06wxq0IKJxamCXf0U%2BUNvgsdL6ZrQX7ZaTOvXEHmikDiZW4bcYIZNr798xAIrw%2Falw3QwdcP4O%2B%2B1KLhfv5B8l8u%2B9gk0pAXvqnq5UMTlLoOqpdgx7atYPD80JaVzNf8tGclT4Ib79Pjl%2B8v3yYB%2FHg3%2Bn1qWzG3XUvAS8OxZKamNd9aXroa%2BkDjbFpVGKjZ2A0ALQjYQpKDZgL2dLuq3lTSsTzpfVqpWiYhDs%2B1p2pCKsvb3YW4eUnKhT1ymYzKIpmfSD%2BuSG6467eMeFeG7YxhGeOJKbarsylFyDjchDcEQW7icVdkZr0DZhYEvRN%2BzqUQGvKzwsVPZV4wdMzPDWNIZ8TPDTZe%2FTrbk9PcLCpH5WajEcMCRW89HWrw%2FhBQFY6XSlOPXDGUzJegVOV1IJyW11m6tMq%2BuDJZcfJtcdeN4UffGC5rGeSeal94mdlwmZHmSy4VjHaixdVgSU1%2BvRCEnA9BiCAbgIgrRXbKzdaiD8YVSmcBJdAVlPgtSN1BKZ64rmWdbGg7rhkdJgxp7we4SZTwLvu6QuldZHOS9U3bnOJAkPa9PeqAlG2T9xcc7209xSips3utsMKLufqHlXd1%2BLKITkunqidFJEPOMj4fN6vssIM9E3VsxMeVQ6147AUvujg5sppEiy8NjTlPsGn4SDL4eqOj47FOxuaKs%2BPiTAECDw9%2BkupyTzgtzupEKs83o3ABkcQd7NLahu7UBuVDyyPE6sm6Xfu3m9oB%2FEQKX2TRmB%2FI6fYdz1H37auywe3%2F%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

Программа написана на языке **C++**.

```cpp
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    printf("Введите символ, из которого будет построена фигура: ");
    scanf("%c", &symbol);

    printf("\nВывод фигуры в координатной сетке:\n\n");
    for (int y = 7; y >= -3; y--) {
        int x_max;
        if (y >= 2) {
            x_max = -1; 
        }
        else {
            x_max = -3; 
        for (int x = -6; x < x_max; x++) {
            printf("%c", symbol);
        }

        printf("\n");
    }

    return 0;
}
```
## 3. Результаты работы программы
```text
Введите символ, из которого будет построена фигура: *

Вывод фигуры в координатной сетке:

*****
*****
*****
*****
*****
*****
***
***
***
***
***

```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
