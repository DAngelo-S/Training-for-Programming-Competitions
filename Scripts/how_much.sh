contador=0
ano=$(date +%Y)

for arq in $(ls "/home/deborass/Documentos/Training-for-Programming-Competitions/$ano/KickStart"); do
	let "contador=contador+1"
done

for arq in $(ls "/home/deborass/Documentos/Training-for-Programming-Competitions/$ano/CodeJam"); do
	let "contador=contador+1"
done

for arq in $(ls "/home/deborass/Documentos/Training-for-Programming-Competitions/$ano/Neps"); do
	let "contador=contador+1"
done

for arq in $(ls "/home/deborass/Documentos/Training-for-Programming-Competitions/$ano/Codeforces"); do
	let "contador=contador+1"
done

echo "Já fizemos pelo menos" $contador "exercícios neste ano"

ini=$(date +%s --date="2021-03-29")
hj=$(date +%s)

let "aux1=hj-ini"
let "dias=aux1/86400"
let "aux2=dias*86400"

if [ $aux2 -ne $aux1 ]
then
	let "dias++"
fi

echo "E estamos em foco há" $dias "dias!! :D"
