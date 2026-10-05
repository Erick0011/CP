#!/usr/bin/env bash
# Cria um arquivo de problema a partir do template.
# Uso: ./scripts/novo.sh <plataforma> <id-nome>
# Ex.: ./scripts/novo.sh codeforces 1850A-to-my-critics
set -e
cd "$(dirname "$0")/.."
[ $# -lt 2 ] && { echo "uso: $0 <plataforma> <id-nome>"; exit 1; }
dir="problemas/$1"
file="$dir/$2.cpp"
mkdir -p "$dir"
[ -e "$file" ] && { echo "já existe: $file"; exit 1; }
{
  echo "// Problema: $2"
  echo "// Link: "
  echo "// Ideia: "
  echo "// Complexidade: "
  echo "// Data: $(date +%Y-%m-%d)"
  echo
  cat templates/template.cpp
} > "$file"
echo "criado: $file"
