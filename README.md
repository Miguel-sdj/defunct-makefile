# Defunct Makefile

Atividade proposta pelo professor Erico Souza Teixeira e seu tutor Michael Alves

Feito pelo aluno Miguel Cabral de Carvalho da turma A

## Sobre o Projeto
Decidi utilizar uma abordagem diferente para demostrar a solução. Utilizei da biblioteca <pthread.h> para realizar duas funções ao mesmo tempo com o intuito de mostrar na própria aplicação a comprovação de que o PID está funcionando como zumbi, com intervalos de 2 segundos a cada printf como mostra a imagem a seguir e na segunda a função que coloca o child como defunct.





![code_print](/images/pid_example.png)




## Installation

clone o projeto.

```bash
git clone https://github.com/Miguel-sdj/defunct-makefile.git
```

## Usage

Utilize o "make" para fazer a build do projeto

```bash
make
```
E para rodar a aplicação utilize
```bash
make run
```
Para fazer a limpeza dos arquivos utilize

```bash
make clean
```

## Contributing


Certificar de testar a aplicação corretamente.

## License
[MIT](https://choosealicense.com/licenses/mit/)
