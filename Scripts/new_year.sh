current_year=$(date +%Y)
let 'current_year=current_year+1'
let 'last_year=current_year-1'

mkdir ~/Documentos/Training-for-Programming-Competitions/$current_year
mkdir ~/Documentos/Training-for-Programming-Competitions/$current_year/Neps
mkdir ~/Documentos/Training-for-Programming-Competitions/$current_year/Codeforces
mkdir ~/Documentos/Training-for-Programming-Competitions/$current_year/CodeJam
mkdir ~/Documentos/Training-for-Programming-Competitions/$current_year/KickStart

mv ~/Documentos/Training-for-Programming-Competitions/README.md ~/Documentos/Training-for-Programming-Competitions/$last_year/README-$last_year.md
cp ~/Documentos/Training-for-Programming-Competitions/$last_year/README-$last_year.md ~/Documentos/Training-for-Programming-Competitions/README.md
vim ~/Documentos/Training-for-Programming-Competitions/README.md
