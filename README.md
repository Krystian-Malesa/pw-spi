# pw-spi
# pw-spi
# dodanie usera i mail
it config --local user.name "FIRST_NAME LAST_NAME"
git config --local user.email "MY_NAME@example.com"

# zapis w katalogu systemowym/globalnie
git config --global user.name "John Doe"
git config --global user.email johndoe@example.com
git config --global core.editro emacs


# ustawienie brancha default 
git config --global init.defaultBranch main
git config --global init.defaultBranch master



# gdzie jest .gitconfig
git config --list --show-origi


# nowe repo
gi init


# klonowanie repo
git clone 
tworzy nowy katalog "pw-spi"
git clone https://github.com/Krystian-Malesa/pw-spi 


# klon do aktualnego katalogu
git clone https://github.com/Krystian-Malesa/pw-spi .

git clone https://github.com/Krystian-Malesa/pw-spi /nowy-katalog


# dodanie plilu/plików do staging 
git add -h
git add nazwa-pliku
git add .
git add * .py
git add readme.md index.html

# komitowanie zmian 
git commit -m "zmiany"


# status zmian
git status
git status -s

# git diff
git diff --staged
git diff

# popranie wszystkich zmian z repo
git fetch 

# pobierz zmiany
git pull

# utwórz branch 
git checkout -b nazwa-brancha 
git branch nazwa-brancha

# lista branchy
git branch
 
# usuwanie brancha
git branch -d nazwa-brancha


# folders
feature, refactor, bugfix, hotfix, release


# po uzyciu komendy add - cofniecie zmian 
git reset HEAD przykladowy.txt
 

# add, mod, delete remote url
git remote -v
git remote show origin
git remote rename test test2
git remote remove test2
