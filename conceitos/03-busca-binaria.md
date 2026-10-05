# Busca binária

## Ideia em uma frase
Se um predicado é monotônico (F F F T T T), dá para achar a primeira posição T em O(log n).

## Quando usar
- "Mínimo valor tal que..." / "máximo valor tal que..." → busca binária na resposta.
- Array ordenado + procurar posição → `lower_bound` / `upper_bound`.

## Complexidade
O(log(intervalo) · custo do check).

## Implementação (busca na resposta)
```cpp
// primeiro x em [lo, hi] com ok(x) == true (assume ok(hi) == true)
long long lo = 0, hi = 1e18;
while (lo < hi) {
    long long mid = lo + (hi - lo) / 2;
    if (ok(mid)) hi = mid;
    else lo = mid + 1;
}
```

## Armadilhas
- Loop infinito ao usar `mid = (lo + hi) / 2` com `lo = mid` → use `(lo + hi + 1) / 2` nesse caso.
- Overflow em `lo + hi` → `lo + (hi - lo) / 2`.
- Verificar se o predicado é realmente monotônico.

## Problemas resolvidos
| Problema | Plataforma | Dificuldade | Nota |
|---|---|---|---|
| | | | |
