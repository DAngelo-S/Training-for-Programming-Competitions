cp ./bash_aliases ~/.bash_aliases
source ~/.bash_aliases

for arq in $(ls); do
	chmod +x $arq
done

echo "Please, edit the dates and paths in bash_aliases and then init the enviroment again"
echo "If already have edited, then ignore this message"
