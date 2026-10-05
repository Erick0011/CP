# Prefix Sums (somas de prefixo)

## Ideia em uma frase
Pré-compute `p[i] = a[0] + ... + a[i-1]` para responder soma de qualquer intervalo em O(1).

## Quando usar
- Muitas consultas de soma em intervalo, array sem updates.
- "Quantos elementos com propriedade X entre l e r".

## Complexidade
O(n) para montar, O(1) por consulta.

## Implementação
```cpp
vector<long long> p(n + 1, 0);
for (int i = 0; i < n; i++) p[i + 1] = p[i] + a[i];
// soma de [l, r] (0-based, inclusivo) = p[r + 1] - p[l]
```

## Variações
- **Prefix 2D**: `p[i][j] = a + p[i-1][j] + p[i][j-1] - p[i-1][j-1]`.
- **Difference array**: somar v em [l, r] → `d[l] += v; d[r+1] -= v;` e depois prefix.
- Com updates → use Fenwick (`templates/estruturas/fenwick.cpp`).

## Problemas resolvidos
| Problema | Plataforma | Dificuldade | Nota |
|---|---|---|---|
| | | | |
