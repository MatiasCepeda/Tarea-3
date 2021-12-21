//[a]

// a) int* ip;  es correcto.

// b) string s, *sp = 0;  es correcto.

// c) int i; double* dp = &i;  no es correcto debido a que i es una variable int por lo que la codificacion es
//distinta a una variable tipo double.

// d) int* ip, ip2;  es correcta.

// e) const int i=0, *p=i;  es incorrecto, el puntero debe asociarce a la direccion de la variable no al argumento de esta.

// f) string* p = NULL;  es corecta.


// [b]


// [c] el primer puntero es legal debido que la vodificacion void se adapta a la codificacion de la variable, mientras
// que el segundo puntero tiene codificacion distinta a la variable i.