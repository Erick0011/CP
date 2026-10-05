# Complexidade e limites

## Ideia em uma frase
Um computador de juiz faz ~10^8 operações simples por segundo — use o tamanho de `n` para adivinhar a complexidade esperada.

## Tabela de referência (1 segundo)
| n | Complexidade aceitável | Exemplos |
|---|---|---|
| ≤ 10 | O(n!) | permutações |
| ≤ 20 | O(2^n · n) | bitmask, subconjuntos |
| ≤ 500 | O(n³) | Floyd-Warshall, DP cúbica |
| ≤ 5000 | O(n²) | DP quadrática |
| ≤ 10^6 | O(n log n) | ordenação, busca binária, segtree |
| ≤ 10^8 | O(n) | prefix sums, two pointers |
| > 10^9 | O(log n) / O(1) | fórmula, binpow |

## Armadilhas
- `int` vai até ~2·10^9. Produtos de dois valores até 10^5 já estouram → use `long long`.
- `endl` faz flush: use `'\n'`.
- Sem `ios::sync_with_stdio(false); cin.tie(nullptr);` a leitura pode dar TLE.
