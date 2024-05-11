all: keygen pdf

pdf:
	pandoc --resource-path=assets --from=markdown+wikilinks_title_after_pipe --variable papersize=a4paper -o lab-1-marcos-nicolau.pdf readme.md

keygen:
	gcc ./keygen.c -o ./keygen.out