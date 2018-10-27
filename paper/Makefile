TITLE=paper

TEXFILES = ${TITLE}.tex
FIGURES =
GRAPHS =
BIB = ${TITLE}.bib

GENERATED_EXTS= .aux .log .nav .out .snm .toc .bbl .blg .ps .dvi

paper: $(TEXFILES) $(FIGURES) $(GRAPHS) $(BIB)
	texi2pdf ${TITLE}.tex

clean: clean-graphs clean-figures
	-rm -f $(foreach s,${GENERATED_EXTS},${TITLE}${s})

clean-graphs:
	rm -f $(GRAPHS)

clean-figures:
	rm -f $(FIGURES)

