# Roadmap — jornada para dominar Competitive Programming

Marque `[x]` quando dominar o tópico (= resolveu pelo menos 5 problemas sem olhar a solução).
Cada tópico concluído deve ter uma nota em `conceitos/`.

**Objetivo final: ICPC.**

## Como treinar (as três listas)
| Lista | Papel | Uso |
|---|---|---|
| **CP-31** | base do treino diário | ~70% do tempo, no nível atual → `problemas/cp31/` |
| **Rokba Park** (por tema, 800→2000) | reforçar pontos fracos | ~30% do tempo, tema da semana |
| **YouKnowWho** (tópicos por faixa) | mapa do que estudar | consultar ao subir de faixa; essencial a partir de ~1600 |

- Tentar cada problema 30–45 min antes da dica/editorial
- Subir de nível no CP-31 com ~70–80% resolvidos sem ajuda
- 1 contest por semana + upsolving → `contests/`

## Etapas rumo ao ICPC
1. **Individual (até ~1400–1600 no CF):** CP-31 + temas + contests. Fases 0–2 abaixo.
2. **Amplitude (1600+):** cobrir os tópicos do YouKnowWho que o ICPC cobra e o CF Div. 2 quase não cobra — geometria, fluxo, strings, teoria dos números, DP avançada. Fases 3–4.
3. **Time:** simulado semanal de 5h com provas antigas no Codeforces Gym, um computador, divisão de especialidades → `icpc/`

## Fase 0 — Fundamentos de C++ e plataforma
- [ ] Entrada/saída rápida, `long long`, overflow
- [ ] STL: `vector`, `pair`, `sort`, `map`, `set`, `priority_queue`, `deque`
- [ ] Complexidade e limites de tempo → `conceitos/01-complexidade.md`
- [ ] Criar conta: Codeforces, AtCoder, CSES
- **Meta:** 30 problemas Codeforces 800–1000

## Fase 1 — Técnicas básicas (Codeforces ~1000–1300)
- [ ] Simulação e implementação
- [ ] Ordenação + guloso (greedy)
- [ ] Prefix sums / difference array → `conceitos/02-prefix-sums.md`
- [ ] Two pointers / sliding window
- [ ] Busca binária (no array e na resposta) → `conceitos/03-busca-binaria.md`
- [ ] Brute force e backtracking
- [ ] Matemática básica: paridade, MDC/MMC, divisores
- **Meta:** CSES "Introductory Problems" + "Sorting and Searching" (metade)

## Fase 2 — Grafos e DP introdutória (~1300–1600)
- [ ] Representação de grafos, DFS, BFS
- [ ] Componentes conexas, grid BFS
- [ ] DSU (Union-Find)
- [ ] Dijkstra, Bellman-Ford, Floyd-Warshall
- [ ] Ordenação topológica
- [ ] DP clássica: mochila, LIS, LCS, coin change
- [ ] Bitmask básico
- **Meta:** CSES "Graph Algorithms" e "Dynamic Programming" (metade)

## Fase 3 — Estruturas de dados (~1600–1900)
- [ ] Fenwick Tree (BIT)
- [ ] Segment Tree (+ lazy propagation)
- [ ] Sparse Table (RMQ)
- [ ] MST: Kruskal / Prim
- [ ] Árvores: LCA (binary lifting), DP em árvore, Euler tour
- [ ] Aritmética modular, exponenciação rápida, combinatória
- [ ] Crivo, fatoração
- **Meta:** CSES "Range Queries" + "Tree Algorithms"

## Fase 4 — Avançado (~1900–2200)
- [ ] Strings: KMP, Z-function, hashing
- [ ] DP: bitmask, dígitos, intervalos, otimizações
- [ ] SCC, pontes e articulações
- [ ] Fluxo máximo / matching
- [ ] Geometria: produto vetorial, orientação, interseção de segmentos, convex hull, área de polígono
- [ ] Teoria dos números: Euclides estendido, CRT

## Fase 5 — Especialista (2200+)
- [ ] Trie, Aho-Corasick, Suffix Array
- [ ] Convex Hull Trick, Divide & Conquer DP
- [ ] Mo's algorithm, sqrt decomposition
- [ ] HLD / Centroid decomposition
- [ ] FFT / NTT

## Hábitos
- Participar de 1 contest por semana (Codeforces Div. 2/3/4 ou AtCoder ABC) → registrar em `contests/`
- Fazer **upsolving**: resolver depois os problemas que não saíram no contest
- Ao ler um editorial, anotar a ideia-chave no topo do arquivo do problema

## Recursos
- [CSES Problem Set](https://cses.fi/problemset/) + [CP Handbook](https://cses.fi/book/book.pdf)
- [cp-algorithms](https://cp-algorithms.com/)
- [USACO Guide](https://usaco.guide/)
- [Codeforces](https://codeforces.com/) / [AtCoder](https://atcoder.jp/) / [beecrowd](https://www.beecrowd.com.br/)
