if test -f ./$1.cpp; then
	echo "$1.cpp already exists!"
	echo "Do you want to edit it? (y/n)"
	read option
	if [ $option == "y" ] ; then
		vim ./$1.cpp
	fi
else
	cp ~/Documentos/Training-for-Programming-Competitions/'Algorithms, Data Strututes and Others'/Modelo.cpp ./$1.cpp
	vim $1.cpp
fi
