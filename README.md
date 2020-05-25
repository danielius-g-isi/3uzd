# Procedūrinio programavimo 3 užduotis

## Funkcijų paaiškinimas

- constructor() (Vector())
Deklaruoja int* arr, kuris saugo vektoriaus adresą
int cap, kuris saugo vektoriaus maksimalų dydį
int c_index, kuris saugo vektoriaus elementų skaičių

- push_back(int n)
Jeigu vektoriaus elementų skaičius lygus vektoriaus maksimaliam dydžiui, sukuriamas naujas adresas temp, kurio maksimalus dydis yra 2 daugiau nei arr dydis. Iš arr į temp nukopijuojami visi arr elementai, arr yra ištrinamas ir prie vektoriaus galo pridedamas naujas elementas n
Jeigu vektoriaus elementų skaičius nėra lygus vektoriaus maksimaliam dydžiui, prie vektoriaus galo pridedamas elementas n

- insert(int n, int index)
Jeigu index lygus maksimaliam vektoriaus elementų skaičiui, šaukiama funkcija push_back(n)
Kitu atveju kintamasis n įrašomas prie indekso index

- clear()
Išstinami arr elementai ir deklaruojamas naujas arr, cap ir c_index

- get (int index)
Grąžinamas elementas prie indekso index

## Veiksmų atlikimo laikas
elements: 10000
std::vector: 1 ms
vector class: 25 ms

elements: 100000
std::vector: 20 ms
vector class: 1999 ms (1.99 sec)

elements: 1000000
std::vector: 215 ms
vector class: 339290 ms (339.29 sec)

elements: 10000000
std::vector: 2057 ms (2.057 sec)
vector class: 30391684 ms (8 h, 26 min, 31 sec)
