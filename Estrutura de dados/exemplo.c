#include <stdio.h>
int main() {
  int numero =10;
  int *ponteiro = &numero;

  printf("Valor: %d\n", numero);
  printf("Endereço de memória: %p\n", ponteiro);

 return 0;
 }

 #include <stdio.h>

 struct Pessoa {
    char nome[50];
    int idade;
 };

 int main() {
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Joâo");
    pessoa1.idade = 25;

    printf("Nome: %s\nIdade: %d\n", pessoa1.nome, pessoa1.idade);

    return 0;
 }

 #include <stdio.h>
 #include <stdlib.h>

 typedef struct Node {
    int data;
    struct Node *next;
 } Node;
 
 Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
    }

    void insertAtBeginning(Node **head, int data) {
        Node *newNode = createNode(data);
        newNode->next = *head;
        *head = newNode;
    }
    void printlist(Node *head) {
        Node *current = head;
        printf("Lista: ");
        while (current != NULL) {
            printf("%d ->", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
    int main() {
        Node *head = NULL;

        insertAtBeginning(&head, 5);
        insertAtBeginning(&head, 10);
        insertAtBeginning(&head, 15);
        
        printlist(head);
        
        return 0;
    }
 