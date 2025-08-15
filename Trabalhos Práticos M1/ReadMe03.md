# Gustavo Strelow Kopereck M1

# 1569. Number of Ways to Reorder Array to Get Same BST

Dado um array `nums` que representa uma **permutação de inteiros de 1 até n**, vamos construir uma **árvore de busca binária  (BST)** inserindo os elementos de `nums` **na ordem** em que aparecem.

A tarefa é **determinar quantas outras reordenações** de `nums` resultam **na mesma BST** gerada originalmente.

---

## Conceito

- O problema exige **contar o número de permutações *adicionais*** de `nums` que, ao serem inseridas em uma BST vazia, **produzam a mesma estrutura** de árvore.
- O resultado deve ser retornado **módulo `10⁹ + 7`** devido ao tamanho potencialmente grande.

---

## Exemplo 1

**Entrada:**
```text
nums = [2, 1, 3]
```

**Saída:**
```text
1
```

**Explicação:**

As seguintes ordens geram a **mesma BST**:

- [2, 1, 3] 
- [2, 3, 1] 

Portanto, existe **1 outra forma** (além da original), totalizando **1** reordenação válida.

---

## Exemplo 2

**Entrada:**
```text
nums = [3, 4, 5, 1, 2]
```

**Saída:**
```text
5
```

**Explicação:**

As seguintes 5 reordenações geram a **mesma BST**:

- [3, 1, 2, 4, 5]  
- [3, 1, 4, 2, 5]  
- [3, 1, 4, 5, 2]  
- [3, 4, 1, 2, 5]  
- [3, 4, 1, 5, 2]  

---

## Exemplo 3

**Entrada:**
```text
nums = [1, 2, 3]
```

**Saída:**
```text
0
```

**Explicação:**

Todas as reordenações diferentes de `[1, 2, 3]` geram **outra estrutura de árvore**, portanto **nenhuma** é válida.

---

## Restrições

- `1 <= nums.length <= 1000`  
- `1 <= nums[i] <= nums.length`  
- Todos os valores de `nums` são **distintos**

---

## Observações Técnicas

- Você precisará calcular **coeficientes binomiais** (combinações) para distribuir os elementos à esquerda e à direita da raiz de forma válida.
- A melhor abordagem envolve:
  - Recursão para dividir o problema em subárvores.
  - Programação dinâmica para pré-computar a **matriz de Pascal**.
  - Modulação com `1_000_000_007` em todas as operações.

---
