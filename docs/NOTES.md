## M.I. Sistemas Digitais - Problema 1

### Ideias

- Utilizar os botões para seleção de opções em menus/contextos.

- Exibir o placar do jogo no display.

- Usar a biblioteca padrão do C (Linux):

> ```c
> // Captura dos eventos emitidos por dispositivos de entrada.
> // Ver :: https://chat.openai.com/share/56a5fb37-decc-47e1-9622-2c0206eda6c0
> #include <linux/input.h>
> ```

### Fatos

- Projeto em `C`, utilizando `Makefile` para facilitar o processo de compilação.

- Jogo da Velha.

- Interface em modo texto.

- Interação feita através do mouse e/ou da placa.

### Questões

- Distinguir a marcação da confirmação das casas?

- Como capturar/registrar as informações do dispositivo?