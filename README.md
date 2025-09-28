# ♟️ Simulação de Movimentos de Peças de Xadrez

Este programa em C simula os movimentos básicos de quatro peças: **Torre, Bispo, Rainha e Cavalo**.
Cada peça tem sua lógica de movimento própria e utiliza diferentes estruturas de repetição.
As direções são exibidas no console com o comando `printf`.

---

## 🏰 Torre

A Torre é a peça da **reta infinita**.
No nosso programa, ela marcha firme e confiante, movendo-se **5 casas para a direita**.

### Como ela se move:

* Só anda em linha reta (horizontal ou vertical).
* Neste caso, escolhemos a rota **horizontal para a direita**.
* Saída no console:

  ```
  Direita (casa 1)
  Direita (casa 2)
  ...
  ```

### Estrutura usada:

* **for** → ideal para movimentos diretos e repetidos.

➡️ É como se fosse um **soldado disciplinado**, sempre andando certinho na mesma direção.

---

## ⛪ Bispo

O Bispo é o **guardião das diagonais**.
No nosso programa, ele desliza com elegância **5 casas na diagonal para cima e à direita**.

### Como ele se move:

* Só anda em diagonais (sempre na mesma cor do tabuleiro).
* Aqui ele combina **duas direções a cada passo**: `Cima, Direita`.
* Saída no console:

  ```
  Cima, Direita (casa 1)
  Cima, Direita (casa 2)
  ...
  ```

### Estrutura usada:

* **while** → repetição controlada até atingir o número de casas.

✝️ É como se fosse um **padre correndo na diagonal do tabuleiro da igreja**.

---

## 👑 Rainha

A Rainha é a **soberana absoluta**.
Pode ir para qualquer lado, mas aqui ela avança **8 casas para a esquerda**.

### Como ela se move:

* Anda em qualquer direção: horizontal, vertical ou diagonal.
* No programa, segue em linha reta **para a esquerda**.
* Saída no console:

  ```
  Esquerda (casa 1)
  Esquerda (casa 2)
  ...
  ```

### Estrutura usada:

* **do-while** → garante ao menos um movimento.

💃 A Rainha dança pelo tabuleiro com liberdade e poder.

---

## 🐴 Cavalo

O Cavalo é o **truqueiro do xadrez**, mestre do movimento em **L**.
Aqui ele se move:

* **Duas casas para baixo**
* **Uma casa para a esquerda**

### Como ele se move:

* Primeiro 2 passos para **baixo**.
* Depois 1 passo para **esquerda**.
* Saída no console:

  ```
  Baixo
  Baixo
  Esquerda
  ```

### Estrutura usada:

* **for + while** (loops aninhados) → perfeito para movimentos combinados.

🐎 É como um **cavaleiro galopando reto e depois virando bruscamente para surpreender o inimigo**.

---

## 📌 Observação

* Cada peça utiliza **um tipo diferente de loop**.
* Movimentos são fixos no código como variáveis.
* Saídas são simples e focadas apenas na direção percorrida.

---

## 📜 Licença

Este projeto é distribuído sob a licença **MIT**.
Você pode usar, modificar e compartilhar livremente, desde que mantenha os créditos originais no código e neste README.
