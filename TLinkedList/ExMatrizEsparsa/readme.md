# Exercício: Representação de Matriz Esparsa com Lista Simplesmente Encadeada

## Objetivo
O objetivo deste exercício é praticar a implementação e manipulação de **listas simplesmente encadeadas** por meio da representação de uma **matriz esparsa**.

## Descrição

Uma **matriz esparsa** é uma matriz em que a maioria dos elementos são iguais a zero. Para otimizar o uso de memória, deseja-se armazenar apenas os elementos **não nulos** da matriz utilizando uma **lista simplesmente encadeada**.

## Entrada

O programa deverá ler os dados da matriz esparsa a partir de um arquivo de texto. A entrada terá o seguinte formato:

- A **primeira linha** contém dois inteiros `m` e `n`, representando, respectivamente, o número de linhas e colunas da matriz.
- As **linhas seguintes** contêm os valores inteiros da matriz (inclusive os nulos);

### Exemplo de entrada:
```
4 5
0 3 0 0 0
0 0 0 7 0
0 0 -1 0 0
5 0 0 0 0
```

## Saída Esperada

O programa deve construir uma **lista simplesmente encadeada**, onde cada nó representa um elemento não nulo da matriz. Cada nó deve conter:

- A linha `i`
- A coluna `j`
- O valor `valor`
- Um ponteiro para o próximo elemento

## Funções Obrigatórias

1. **Função de impressão da lista encadeada** no formato:
```
(i=0, j=1) -> 3
(i=1, j=3) -> 7
(i=2, j=2) -> -1
(i=3, j=0) -> 5
```

2. **Função que imprime a matriz completa**, com `m` linhas e `n` colunas, preenchendo os elementos não listados com zero. A saída para o exemplo seria:
```
0 3 0 0 0
0 0 0 7 0
0 0 -1 0 0
5 0 0 0 0
```

3. **Função que retorna o valor de uma posição específica `(i, j)`**. Se não houver elemento não nulo nesta posição, a função deve retornar `0`.

## Requisitos

- Utilize as estruturas de **lista simplesmente encadeada** vistas em aula.
- A inserção dos nós na lista pode ser feita ao final da lista ou em ordem de leitura.
- Documente o código com comentários que indiquem as principais partes da implementação.

# Entrega

Poste seu repositório git com o exercício, e alguns exemplos de entradas.