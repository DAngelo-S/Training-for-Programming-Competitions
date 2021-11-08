// Busca Binária

é um bool !

binary_search(v.begin(), v.end(), constant value);

// Verifica se eh potencia de dois

bool eh_potencia_de_dois (long long n) {
	if(n == 0) return 0;
	return ((n&(n-1)) == 0);
}
