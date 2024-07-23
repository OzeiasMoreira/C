# Complexidade

## Tabelinha monstra
| **Algoritmo de Sort** | **Complexidade**                |
|-----------------------|---------------------------------|
| **Bubble Sort**       | O(n²)                           |
| **Insertion Sort**    | O(n²)                           |
| **Selection Sort**    | O(n²)                           |
| **Merge Sort**        | O(n log n)                      |
| **Quick Sort**        | Caso médio: O(n log n), Pior caso: O(n²) |
| **Busca Binária**     | Melhor caso: O(1), Pior e médio caso: O(log n)                            |
| **Busca Linear**      | Melhor caso: O(1), Pior caso: O(n), Caso médio: O(n/2)                            |
| **Busca Linear Ordenada**     | Melhor caso: O(1), Pior caso: O(n), Caso médio: O(n/2)                            |

# Observações

- O pior caso do bubble, insertion e selection sort é quando a sequência está ordenada em ordem decrescente.

- O pior caso do merge sort ocorre sempre, mas o fato de ele ter a mesma complexidade para ambos os casos o torna estável.

- O pior caso do quick sort é quando todos os elementos são menores ou maiores do que o pivo.