void liberamapa();
void lemapa();
void alocamapa();
void move(char direcao);
void imprimemapa();
int acabou();

struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};
