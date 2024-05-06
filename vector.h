#ifndef vector
#define vector
#include <math.h>

/**
 * @brief Vekt�r yap�s�d�r.
 *
 * ��erisinde vekt�re ait bilgileri bulunduran vekt�r yap�s�d�r.
 *
 */
struct Vector 
{
	int comps[3]; // Vekt�r�n bile�enleri(i,j,k)     
};

/**
 * @brief Vekt�rleri vekt�rel olarak �arpar.
 *
 * Parametre olarak verilen iki vekt�r� vekt�rel
 * olarak �arpar ve struct de�i�keni olarak d�nd�r�r.
 *
 * Not: Vekt�rel �arp�m�n sonucu vekt�rel bir say�d�r.
 *
 * @param first �lk vekt�r
 * @param second �kinci vekt�r 
 * @return Vekt�rlerin vekt�rel �arp�m�n�n sonucu
 */
struct Vector vector_product(struct Vector first, struct Vector second);

/**
 * @brief Vekt�rleri skaler olarak �arpar.
 *
 * Parametre olarak verilen iki vekt�r� skaler
 * olarak �arpar ve int tipinde bir de�er d�nd�r�r.
 * 
 * Not:Skaler �arp�m�n sonucu skaler bir say�d�r.
 *
 * @param first �lk vekt�r
 * @param second �kinci vekt�r 
 * @return Vekt�rlerin skalar �arp�m�n�n sonucu
 */
int scalar_product(struct Vector first, struct Vector second);

/**
 * @brief Vekt�rleri toplar.
 *
 * Parametre olarak verilen iki vekt�r� toplay�p
 * struct de�i�keni olarak d�nd�r�r.
 *
 * @param first �lk vekt�r
 * @param second �kinci vekt�r 
 * @return Vekt�rlerin toplam�
 */
struct Vector add(struct Vector first, struct Vector second);

/**
 * @brief Vekt�rleri ��kart�r.
 *
 * Parametre olarak verilen iki vekt�r� ��kart�p
 * struct de�i�keni olarak d�nd�r�r.
 *
 * @param first �lk vekt�r
 * @param second �kinci vekt�r 
 * @return Vekt�rlerin fark�
 */
struct Vector sub(struct Vector, struct Vector);

/**
 * @brief Vekt�r�n�n b�y�kl��� bulur.
 *
 * Vekt�r�n�n b�y�kl��� bulup float t�r�nde d�nd�r�r.
 * (�o�u vekt�r�n b�y�kl��� k�s�ratl� bir say�d�r.)
 *
 * @param vec vec vekt�r
 * @return Vekt�r�n b�y�kl���
 */
float find_amplitude(struct Vector vec);

/**
 * @brief Vekt�r� ekrana yazd�r�r.
 *
 * Vekt�r� bile�enleri i,j,k olacak �ekilde
 * ekrana yazd�r�r.
 *
 * @param vec vekt�r
 */
void print_vector(struct Vector vec);


#endif
