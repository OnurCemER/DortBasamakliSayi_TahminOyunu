# DortBasamakliSayi_TahminOyunu
Kodlar C dilinde yazılmıştır.
Öncelikle kullanıcıdan ismi istenir rastgele bir sayı üretilir.
Bu sayının her bir hanesi 0 ile 9 arasındadır ve her bir hane diğerlerinden farklıdır. (0 ≤ a,b,c,d ≤ 9 ve a  ≠ b ≠ c ≠ d)
Oyuncunun 10 hakkı vardır ve her hakkında ona yardımcı olması için bilgiler verilir.

Bilgiler şu şekildedir:
*	9086  ->   0 -0 girilen rakamlardan hiçbiri sayıda yok.
*	0134  ->  -1, +2 girilenlerden 3 ’ü var; ikisi doğru, birisi yanlış yerde.
*	4132  ->  -4, +0 girilen rakamların 4 tanesi de var; birisi doğru yerde.
*	2143  ->  -4, +0 girilen rakamların 4 tanesi de var; ancak yanlış yerdeler.
*	1843  ->  -0, +3girilen rakamların 3 tanesi de var; üçü de doğru yerdeler.
*	1234  ->  -0, +4 girilen rakamların 4 tanesi de var; doğru yerdeler (Bildiniz!).




Oyunun puanlama sistemi aşağıdaki gibidir:




puan ( artı, eksi, hak) = 10.arti+ 5.eksi+(1000/hak)-[(artı.eksi)/(artı+eksi)]


