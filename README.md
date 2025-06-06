# 🧠 Análise de Complexidade – Fibonacci Recursivo
Analisar o desempenho de diferentes implementações da função recursiva:

``` c
x (n) = 1, se n <= 1  
x(n) = x(n−1) + x(n−2), caso contrário
```
## 📁 Estrutura
- `src/` – Códigos-fonte:
  - `original.c`: implementação recursiva pura
  - `memoization.c`: recursiva com memorização
  - `iterative.c`: versão iterativa (de baixo para cima)
  - `binet.c`: fórmula fechada (Binet)
  - `tempo.c`: medidor de tempo médio (para qualquer versão)
---
## Cronometragem e Análise
### 4(a) – Tempo Médio de Execução
O programa `tempo.c` executa `x(n)` repetidamente com `clock()` da `time.h` para medir o tempo
### 4(b) – Testes para Diferentes `n`
Tempos transmitidos com a versão original (recursiva pura):
| n | Tempo médio (segundos) |
|----|------------------------|
| 10 | ~0,000002 |
| 20 | ~0,0004 |
| 25 | ~0,003 |
| 30 | ~0,03 |
| 35 | ~0,3 |
| 40 | ~3,2 |
| 45 | >30 segundos |
O tempo cresce rapidamente, tornando-se impraticável para `n > 45`.
---
### 4(c) – Comparação com a Análise Teórica
- A função recursiva tem complexidade **exponencial**:  
  \[
  T(n) = T(n−1) + T(n−2) \Seta Direita O(2^n)
  \]
- O comportamento observado nos testes está de acordo com a complexidade prevista:
  - O número de chamadas dobra a cada incremento de `n`.
  - Os tempos crescendo de forma explosiva, confirmando uma análise teórica.
---
## 🚀 Versões Otimizadas
| Versão | Complexidade | Memória |
|--------------|--------------|-----------|
| Recursiva | O(2^n) | O(n) |
| Memorização | Sobre(n) | Sobre(n) |
| Iterativa | O(n) | O(1) |
| Binet | O(1) | O(1) |
Cada versão resolve o problema de forma mais eficiente, sendo uma fórmula fechada a mais rápida, embora menos precisa para `n` muito altos.
---
