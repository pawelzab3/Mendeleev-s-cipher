PL::

Założenia projektu:
Napisz program, który będzie szyfrował podany tekst w taki sposób, że zamiast
kolejnych liter program wpisywał będzie liczbę atomową pierwiastka, którego symbolem chemicznym są szyfrowane litery 
(nie uwzględniając wielkości liter). Odstęp między literami zastępuje symbol gwiazdki *, a odstęp miedzy wyrazami – dwie gwiazdki
**.
Przykładowo, tekst SobOta rANo zaszyfrowany mógłby być ciągiem znaków
16*8*5*8*73**88*7*8 (siarka, tlen, bor, tlen tal; rad, azot, tlen).

Uwaga 1: niektóre teksty mogą być zaszyfrowane w ten sposób na różne sposoby,
np. wyraz nos zaszyfrowany może być na 7*8*16 (azot, tlen, siarka), 102*16 (nobel,
siarka) lub 7*76 (azot, osm). Program ma zwracać jedną z możliwości.

Uwaga 2: niektóre teksty nie mogą być zaszyfrowane w ten sposób, przykładem
takiego wyrazu może być algorytmion. W takim wypadku program ma wypisać stosowny komunikat.

Projekt szyfru Mendelejewa został wykonany jako projekt końcowo semestralny na studiach

Projekt został napisany w języku C aby go uruchomić zalecany jest VisualStudio Community 2019 i nowszy z doinstalowanym CLR

ENG::

Project assumptions:
Write a program that will encrypt the given text in such a way that instead of the
consecutive letters, the program will write the atomic number of the element whose chemical symbol is the encrypted letters 
(not taking into account the case of the letters). The space between letters is replaced by an asterisk symbol *, and the space between words is replaced by two asterisks.
**.
For example, the text SobOta rANo encrypted could be a string of characters
16*8*5*8*73**88*7*8 (sulfur, oxygen, boron, thallium oxygen; radium, nitrogen, oxygen).

Note 1: some texts can be encrypted in this way in different ways,
for example, the word nose encrypted can be 7*8*16 (nitrogen, oxygen, sulfur), 102*16 (nob,
sulfur) or 7*76 (nitrogen, osmium). The program is supposed to return one of the possibilities.

Note 2: some texts cannot be encrypted in this way, an example of
such a word could be algorithmion. In such a case, the program is supposed to print the appropriate message.

The Mendeleev cipher project was done as a final semester project in college

The project was written in C to run it VisualStudio Community 2019 and newer with CLR installed is recommended