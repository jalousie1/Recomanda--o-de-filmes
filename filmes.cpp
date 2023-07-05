#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_FILMES 5
#define MAX_GENEROS 6

int main() {
    char generos[MAX_GENEROS][30] = {"Ação", "Comédia", "Drama", "Terror", "Romance", "Ficção Científica"};
    char filmes[MAX_GENEROS][MAX_FILMES][50] = {
        {"Vingadores: Ultimato", "John Wick 3", "Missão Impossível: Efeito Fallout", "Mad Max: Estrada da Fúria", "Duro de Matar"},
        {"Superbad", "O Âncora", "O Grande Lebowski", "A Vida de Brian", "Todo Mundo Quase Morto"},
        {"Um Sonho de Liberdade", "O Poderoso Chefão", "Cidade de Deus", "Forrest Gump", "A Lista de Schindler"},
        {"O Exorcista", "Halloween", "O Iluminado", "Psicose", "Sexta-Feira 13"},
        {"Titanic", "Um Lugar Chamado Notting Hill", "Diário de uma Paixão", "Orgulho e Preconceito", "Amor Além da Vida"},
        {"Blade Runner","Matrix","2001: Uma Odisseia no Espaço","Star Wars: Episódio IV - Uma Nova Esperança","O Exterminador do Futuro 2: O Julgamento Final"}
    };
    int opcao, i;
    char continuar;
    char novo_filme[50];
    bool adicionado = false;

    do {
        printf("---------------------------\n");
        printf("Escolha um gênero:\n");
        printf("---------------------------\n");
        for (i = 0; i < MAX_GENEROS; i++) {
            printf("%d - %s\n", i + 1, generos[i]);
        }
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= MAX_GENEROS) {
            printf("---------------------------\n");
            printf("Filmes do gênero %s:\n", generos[opcao - 1]);
            printf("---------------------------\n");
            for (i = 0; i < MAX_FILMES; i++) {
                printf("%s\n", filmes[opcao - 1][i]);
            }
            if (adicionado) {
                printf("Filme adicionado: %s\n", novo_filme);
            }
            printf("---------------------------\n");
            printf("Deseja adicionar mais um filme? (S/N)\n");
            printf("---------------------------\n");
            scanf(" %c", &continuar);
            if (continuar == 'S' || continuar == 's') {
                printf("Digite o nome do filme:\n");
                scanf(" %[^\n]", novo_filme);
                adicionado = true;
            }
            printf("---------------------------\n");
            printf("Deseja ver mais filmes? (S/N)\n");
            printf("---------------------------\n");
            scanf(" %c", &continuar);
        } else {
            printf("Opção inválida.\n");
            continuar = 'N';
        }
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
