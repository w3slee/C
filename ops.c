/*
 *
 * Why not just "|" and "&"?
 *
 * We can use "&" and "|" if we like but the operators will always evaluate both conditions
 * but double && and || will often skip the second condition 
 * 
 * So why does the "&" and "|" operators exist ?
 *
 * Because they do more than simply evaluate logical conditions. They perform
 * bitwise operations on the individua; bits of numbers.
 *
 * 6 & 4 == 4b
 *
 * because if we checked which binary digits are common to 6 -> 110 in b
 * and 4 -> 100 in binary we get 4 (100)
 *
 *
 *
 * */ 


