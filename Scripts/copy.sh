#!/bin/bash

#  Este programa lê dados de um arquivo ou da entrada
#+ primária e os carrega para a área de transferência

if ! [[ -t 0 ]]  #  Testa se o file descriptor 0 (entrada
                 #+ primária) está aberto no terminal
then
    echo -n "$(< /dev/stdin)" | 
        xclip -selection c && \
            echo "Copiado para a área de transferência"
else
    if [[ -z "$@" ]]  # Se não recebeu nenhum parâmetro
    then
        echo "    Uso:
        $0  - Copia ARQUIVO p/ área de transferência
            Exemplo: $0 /caminho/do/arquivo

        COMANDO | $0 - Copia saída de COMANDO p/ área de transf.
            Exemplo: echo A B C | $0

        Um +V exibirá o conteúdo copiado"
        exit 1
    fi
    # Então parâmetro passado foi um arquivo.
    if [[ ! -f "$@" ]]
    then
        echo  Arquivo $@ não existe
        exit 1
    else
        xclip -i -selection clipboard "$@"
        echo " Arquivo "$@" copiado para área de transf."
    fi
fi
