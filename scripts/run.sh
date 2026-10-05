#!/usr/bin/env bash
# Compila com flags de debug e roda.
# Uso: ./scripts/run.sh arquivo.cpp [entrada.txt]
set -e
[ $# -lt 1 ] && { echo "uso: $0 arquivo.cpp [entrada]"; exit 1; }
out="/tmp/cp_$(basename "${1%.cpp}")"
g++ -std=c++17 -O2 -Wall -Wextra -Wshadow -fsanitize=address,undefined -D_GLIBCXX_DEBUG -o "$out" "$1"
if [ -n "$2" ]; then "$out" < "$2"; else "$out"; fi
