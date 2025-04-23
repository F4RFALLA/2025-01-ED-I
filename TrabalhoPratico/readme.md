
# 🧬 Projeto: Resolução de Labirintos com Algoritmos Genéticos

## 🎯 Objetivo

Utilizar um **algoritmo genético (AG)** para encontrar automaticamente um caminho da **entrada até a saída de um labirinto**, representado em formato ASCII. O projeto simula a **evolução de sequências de movimentos** que buscam a melhor rota possível.

---

## 📌 O que é um Algoritmo Genético?

Um **algoritmo genético (AG)** é uma técnica inspirada na **evolução natural** para resolver problemas de otimização. A ideia central é simular o processo de seleção natural, onde **indivíduos com maior fitness** têm mais chance de se reproduzir e gerar **descendentes melhores**.

---

## ⚙️ Estrutura Básica de um Algoritmo Genético

```
1. Inicialize uma população de indivíduos com soluções aleatórias.
2. Avalie o fitness (aptidão) de cada indivíduo.
3. Enquanto o critério de parada não for atingido:
    a. Selecione os indivíduos mais aptos.
    b. Realize cruzamento (crossover) entre eles.
    c. Aplique mutações aleatórias.
    d. Avalie os novos indivíduos.
    e. Substitua parte da população antiga pela nova.
```

---

## 🧩 Aplicação ao Labirinto

### 🗺️ Representação do Labirinto (ASCII)

```
Legenda:
# = parede
S = início
E = saída
' ' = espaço livre

Exemplo:
##########
#S     # #
# ## #   #
# ## ### #
#      #E#
##########
```

---

### 🧬 Genótipo (Representação da Solução)

Cada indivíduo da população é representado por um **vetor fixo de movimentos**, por exemplo:

```
['D', 'D', 'B', 'B', 'D', 'C', 'C', 'D']
```

Codificação possível:

- `C` = Cima
- `B` = Baixo
- `E` = Esquerda
- `D` = Direita

---

## 📐 Função de Fitness

A função de fitness mede o **quão perto** o caminho chega da saída e penaliza erros:

```
fitness = 1000 - distância_euclidiana(saída) - penalidade_por_colisões
```

Regras:
- Caminhos que colidem com parede param imediatamente.
- Quanto mais próximo da saída, melhor.
- Chegar exatamente na saída = fitness máximo.

---

## 🏗️ Etapas do Projeto

### 1. Modelar o Mapa
- Representar o labirinto como matriz ou vetor de strings.

### 2. Criar População Inicial
- Cada indivíduo com uma sequência aleatória de movimentos de comprimento fixo (ex: 50).

### 3. Simular Caminhos
- A partir da posição `S`, aplicar os movimentos e registrar a posição final.

### 4. Calcular Fitness
- Usar distância até `E` e penalizações.

### 5. Seleção
- Usar seleção por torneio binário ou roleta.

### 6. Crossover
- Cruzar pares de caminhos selecionados (1 ponto de corte).

### 7. Mutação
- Alterar aleatoriamente uma direção do caminho com baixa probabilidade (ex: 5%).

### 8. Substituição
- Substituir os piores indivíduos por novos.

### 9. Critério de Parada
- Número máximo de gerações
- Ou: Encontrou um caminho válido

---

## 💻 Estruturas de Dados Sugeridas

| Estrutura            | Uso no Projeto                                        |
|----------------------|--------------------------------------------------------|
| Lista Estática       | Genótipo (movimentos)                                 |
| Lista Encadeada      | População de indivíduos                               |
| Fila (opcional)      | Organização da simulação ou execução de turnos       |
| Pilha (opcional)     | Registro reverso das ações de um caminho              |

---

## 📊 Exemplo de Evolução

Geração 0:
```
Melhor fitness: 820
Melhor caminho: [D, D, B, B, D, E, E, B, C]
```

Geração 50:
```
Melhor fitness: 999
Melhor caminho: [D, D, D, B, B, B, B, D, D]
(Solução encontrada)
```

---


## 📝 Entregáveis

- Código-fonte bem documentado
- Relatório explicando:
  - Representação do indivíduo
  - Como o fitness foi calculado
  - Número de gerações, população, taxa de mutação
  - Consolidar em um gráfico de linha mostrando a evolução da função fitness por geração (após as simulações)
- Execução demonstrando a evolução
- Para cada população, mostrar simulação do melhor indivíduo (tentativa).
- Logs ou prints das melhores soluções
