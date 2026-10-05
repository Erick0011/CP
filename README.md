# CP — Competitive Programming

Minha jornada organizada para dominar programação competitiva (C++).
O plano de estudo está em **[ROADMAP.md](ROADMAP.md)**.

## Estrutura

```
CP/
├── ROADMAP.md          # fases, tópicos e metas (checklist)
├── templates/          # códigos prontos para copiar
│   ├── template.cpp    # template base de todo problema
│   ├── estruturas/     # DSU, Fenwick, Segment Tree...
│   ├── grafos/         # BFS, Dijkstra...
│   ├── matematica/     # modular, crivo...
│   └── strings/        # KMP...
├── conceitos/          # notas teóricas por tópico (use _MODELO.md)
├── problemas/          # soluções separadas por plataforma
│   ├── cp31/           # treino diário por nível: 800/, 900/, ..., 1900/
│   ├── codeforces/
│   ├── atcoder/
│   ├── cses/
│   ├── beecrowd/
│   └── outros/
├── contests/           # registro de contests (resultado + upsolving)
├── icpc/               # time, simulados de 5h e checklist da prova
└── scripts/
    ├── novo.sh         # cria problema a partir do template
    └── run.sh          # compila com flags de debug e roda
```

## Como usar

```bash
# criar um problema novo
./scripts/novo.sh codeforces 1850A-to-my-critics
./scripts/novo.sh cp31/800 1850A-to-my-critics   # treino CP-31

# compilar e testar (ou no VS Code: botão ▷ / Ctrl+Alt+N, ou Ctrl+Shift+B com input.txt)
./scripts/run.sh problemas/codeforces/1850A-to-my-critics.cpp entrada.txt
```

## Convenções
- **Nome do arquivo:** `<id>-<nome-curto>.cpp` (ex.: `1850A-to-my-critics.cpp`, `cses-1068-weird-algorithm.cpp`)
- **Cabeçalho:** link, ideia-chave, complexidade e data (o `novo.sh` já gera)
- **Commits:** `cf: 1850A to my critics`, `template: segtree lazy`, `conceito: busca binaria`
- Problema resolvido com ajuda do editorial → escrever `// Editorial:` na ideia
