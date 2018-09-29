#!/usr/bin/env bash

# baixando peda do github se já não estiver instalado
echo "[*] Se você tiver acabado de baixar o PEDA, o comando locate não irá encontrá-lo."
echo "[*] Para achá-lo, rode o script com -f como argumento (./peda.sh -f)"

if [[ $1 = "-f" ]]; then
    peda_path=$(find / -iname "peda.py" 2> /dev/null)
else
    peda_path=$(locate peda.py)
fi

if [[ $peda_path = "" ]]; then
    git clone https://github.com/longld/peda.git
    $peda_path="$(pwd)/peda/peda.py"
fi

echo "source $peda_path" > .gdbinit
echo "set disassembly-flavor att" >> .gdbinit