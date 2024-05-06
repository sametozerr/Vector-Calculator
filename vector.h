#ifndef vector
#define vector
#include <math.h>

/**
 * @brief Vektör yapýsýdýr.
 *
 * Ýçerisinde vektöre ait bilgileri bulunduran vektör yapýsýdýr.
 *
 */
struct Vector 
{
	int comps[3]; // Vektörün bileþenleri(i,j,k)     
};

/**
 * @brief Vektörleri vektörel olarak çarpar.
 *
 * Parametre olarak verilen iki vektörü vektörel
 * olarak çarpar ve struct deðiþkeni olarak döndürür.
 *
 * Not: Vektörel çarpýmýn sonucu vektörel bir sayýdýr.
 *
 * @param first Ýlk vektör
 * @param second Ýkinci vektör 
 * @return Vektörlerin vektörel çarpýmýnýn sonucu
 */
struct Vector vector_product(struct Vector first, struct Vector second);

/**
 * @brief Vektörleri skaler olarak çarpar.
 *
 * Parametre olarak verilen iki vektörü skaler
 * olarak çarpar ve int tipinde bir deðer döndürür.
 * 
 * Not:Skaler çarpýmýn sonucu skaler bir sayýdýr.
 *
 * @param first Ýlk vektör
 * @param second Ýkinci vektör 
 * @return Vektörlerin skalar çarpýmýnýn sonucu
 */
int scalar_product(struct Vector first, struct Vector second);

/**
 * @brief Vektörleri toplar.
 *
 * Parametre olarak verilen iki vektörü toplayýp
 * struct deðiþkeni olarak döndürür.
 *
 * @param first Ýlk vektör
 * @param second Ýkinci vektör 
 * @return Vektörlerin toplamý
 */
struct Vector add(struct Vector first, struct Vector second);

/**
 * @brief Vektörleri çýkartýr.
 *
 * Parametre olarak verilen iki vektörü çýkartýp
 * struct deðiþkeni olarak döndürür.
 *
 * @param first Ýlk vektör
 * @param second Ýkinci vektör 
 * @return Vektörlerin farký
 */
struct Vector sub(struct Vector, struct Vector);

/**
 * @brief Vektörünün büyüklüðü bulur.
 *
 * Vektörünün büyüklüðü bulup float türünde döndürür.
 * (Çoðu vektörün büyüklüðü küsüratlý bir sayýdýr.)
 *
 * @param vec vec vektör
 * @return Vektörün büyüklüðü
 */
float find_amplitude(struct Vector vec);

/**
 * @brief Vektörü ekrana yazdýrýr.
 *
 * Vektörü bileþenleri i,j,k olacak þekilde
 * ekrana yazdýrýr.
 *
 * @param vec vektör
 */
void print_vector(struct Vector vec);


#endif
