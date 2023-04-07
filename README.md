# C-Course-Exercise-6


/*****exercise6.1*****/

:pushpin:Sınıfta üç basamaklı bir sayıyı char türden bir dizi içerisine yazı biçiminde yazdıran num2text isimli bir fonksiyon yazmıştık. Aslında üç basamaklı bir sayıyı yazdırabilten sonra bunun genelleştirilmesi kolaydır. Her türlü sayıyı bu biçimde yazıya dönüştüren fonksiyonu num2text ismiyle yazınız. Fonksiyonun parametrik yapısı şöyle olmalıdır:

char *num2text(unsigned long long number, char *buf, size_t bufsize);

unsigned long long türünün katrilyar mertebesinde bir sayı olduğuna dikkat ediniz. Bu türün üst sınırı şöyledir:

18,446,744,073,709,551,615

Fonksiyonun ikinci parametresi yazının yerleştirileceği char türden dizinin adresini almaktadır. Üçüncü parametre ikinci parametredeki dizinin uzunluğunu belirtir. Bu tür parametreler "güvenlik parametresi" olarak kullanılmaktadır. Yani diziyi taşırmayı engellemktedir. Fonksiyon en fazla bufsize – 1 tane karakteri diziye yerleştirip null karakteri ekleyerek işlemini sonlandırmalıdır. Böylece programcı diziyi küçük açmış olsa bile dizi taşırılmayacaktır. Fonksiyonun geri dönüş değeri birinci parametresiyle belirtilen adresin aynısıdır. 

/*****exercise6.2*****/

:pushpin:Bir rasyonel sayıyı a / b biçiminde ekrana (stdout dosyasına) yazdıran disp_rational isimli fonksiyonu yazınız. Fonksiyonun prototipi şöyledir:

void disp_ratio(int num, int denom);

Yazırma işleminde sadelştirme yapılmalıdır. 

Bazı rasyonel değerlerin nasıl yazdırılma örnekleri şöyledir:

disp_ratio(1, 3) 	=> 1 / 3
disp_ratio(2, 4) 	=> 1 / 2
disp_ratio(2, 0) 	=> infinite
disp_ratio(3, 1)	=> 3
disp_ratio(0, 5)	=> 0
disp_ratio(-1, 5)	=> -1/5
disp_ratio(1, -5)	=> -1/5
dispratio(-1, -5)	=> 1/5

/*****exercise6.3*****/

:pushpin:Bir karmaşık sayıyı ekrana (stdout dosyasına) yazdıran disp_complex isimli fonksiyonu yazınız. Fonksiyonun prototipi şöyledir:

void disp_complex(int real, int imag);

Fonksiyonun örnek çağrımlarına karşı çıktıları şöyle olmalıdır:

disp_complex(1, 3)		=> 1 + 3i
disp_complex(5, 1)		=> 1 + i
disp_complex(-1, -3)	=> -1 - 3i
disp_complex(3, 0)		=> 3
disp_complex(0, 3)	=> 3i
disp_complex(0, 1)	=> i




