NAME=dokumentace

$(NAME).pdf: $(NAME).tex title.tex
	rsvg-convert -f eps scanner.svg -o scanner.eps
	# Double-pass compiling
	pdflatex $(NAME).tex
	pdflatex $(NAME).tex

clean:
	-rm *.tdo $(NAME).dvi $(NAME).aux $(NAME).toc $(NAME).log $(NAME).out $(NAME).pdf
