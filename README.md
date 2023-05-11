# Greedy-Path
### Trabalho 1 de AEDs
#### O código foi criado com base nas instruções da atividade de Caminho Guloso

O programa recebe dados do arquivo 'dataset/input.data'. O formato de recebimento de dados do arquivo segue a seguinte ordem:
Os 2 primeiros valores são referentes a quantidade K de matrizes e ao tamanho NxN da matriz. Os outros 2 valores a serem recebidos são os do ponto de início para a comparação entre os elementos da matriz. Os demais dados a serem recebidos são as matrizes, respeitado a quantidade K e o tamanho NxN. Sendo assim:

3 4 --> o **3** representa a quantidade **K** e o **4** representa o tamanho **NxN**.

1 0 --> o **0** representa a posição no eixo **x** e o **1** representa a posição no eixo **y**.

100 300 40 20</br>
***20*** 50 10 10</br>
30 50 100 200</br>
120 140 300 999</br>

10 10 10 10</br>
***10*** 50 10 10</br>
10 10 10 10</br>
10 10 10 10</br>

1 2 3 4</br>
***10*** 20 30 40</br>
100 200 300 400</br>
200 300 400 500</br>

Seguindo esse exemplo, o início da comparação de cada matriz seria na casa [0, 1] (previamente marcada nas matrizes);

### Caminhamento  </br>
O caminhamento guloso no código acontece de modo que o programa compara os valores adjacentes do ponto de partida e parte para o maior valor entre eles, sem visitar a casa pela qual ele já passou e sem retornar a linha de cima. O caminhamento acontece até o momento que o 'ponto de partida' não tem mais lugares para percorrer, podendo ser na última linha e última coluna da matriz ou quando ele se encontra cercado por valores já percorridos ou iguais a ele. *Vide a segunda matriz do exemplo*

Ao executar o código, a saída esperada é o caminho percorrido e a soma dos valores das posições percorridas.
Seguindo o exemploda primeira matriz, teremos como saída:
</br>20</br>50</br>300</br>999</br>soma:1369</br>

## Compilação e Execução
Comando -	Função</br>
make - Executa a compilação do programa utilizando o gcc</br>
make - run	Executa o programaapós a realização da compilação</br>
make clean -	Apaga a última compilação realizada</br>
