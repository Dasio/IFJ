NAME=doc

$(NAME).pdf: $(NAME).tex title.tex
	# Double-pass compiling
	pdflatex $(NAME).tex
	pdflatex $(NAME).tex

clean:
	-rm $(NAME).dvi $(NAME).aux $(NAME).toc $(NAME).log $(NAME).out
