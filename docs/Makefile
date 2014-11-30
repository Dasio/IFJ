NAME=dokumentace

$(NAME).pdf: $(NAME).tex title.tex
	# Double-pass compiling
	pdflatex $(NAME).tex
	pdflatex $(NAME).tex

clean:
	-rm *.tdo $(NAME).dvi $(NAME).aux $(NAME).toc $(NAME).log $(NAME).out $(NAME).pdf
