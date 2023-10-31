#include <stdio.h>

// Estrutura para o usuário colocar seus dados para efetuar seu registro
struct Registro {
    char nome[60];
    int idade;
    char telefone[16];
    char endereco[70];
};

int main() {
    struct Registro registros[100]; // Array para armazenar os registros
    int num_registros = 0; // Contador de registros cadastrados
    int opcao;

    do {
        // Exibir o menu principal
        printf("Menu Principal:\n");
        printf("1. Adicionar novo Registro\n");
        printf("2. Listar todos os registros\n");
        printf("3. Sair do programa\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Adicionar um novo registro
                if (num_registros < 100) {
                    // Condição verifica se o valor da variável num_registros é menor que 100.
                    printf("Digite o nome: ");
                    scanf(" %[^\n]", registros[num_registros].nome); // Lê nome com espaços ao usar scanf %[^\n], permite que leia uma linha de texto que pode conter espaços e a armazene na variável string.
                    printf("Digite a idade: ");
                    scanf("%d", &registros[num_registros].idade);
                    printf("Digite o telefone: ");
                    scanf(" %[^\n]", registros[num_registros].telefone); // Lê o telefone com espaços
                    printf("Digite o endereco: ");
                    scanf(" %[^\n]", registros[num_registros].endereco); // Lê com espaços

                    num_registros++;
                    printf("Seu registro foi adicionado com sucesso.\n");
                } else {
                    printf("Limite de registro atingido!\n");
                }
                break;

            case 2:
                // Listar todos os registros
                if (num_registros > 0) {
                    printf("Registros cadastrados:\n");
                    for (int i = 0; i < num_registros; i++) {
                        printf("Nome: %s\n", registros[i].nome);
                        printf("Idade: %d\n", registros[i].idade);
                        printf("Telefone: %s\n", registros[i].telefone);
                        printf("Endereço: %s\n", registros[i].endereco);
                        printf("\n");
                    }
                } else {
                    printf("Nenhum registro cadastrado.\n");
                }
                break;

            case 3:
                // Sair do programa
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
