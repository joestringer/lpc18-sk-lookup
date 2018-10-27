TITLE=paper

TEXFILES = ${TITLE}.tex
FIGURES =
GRAPHS =
BIB = ${TITLE}.bib
INCLUDES = sk-lookup-api.c sk-lookup-structures.c

GENERATED_EXTS= .aux .log .nav .out .snm .toc .bbl .blg .ps .dvi

paper: $(TEXFILES) $(FIGURES) $(GRAPHS) $(BIB)
	texi2pdf ${TITLE}.tex

clean: clean-graphs clean-figures
	-rm -f $(foreach s,${GENERATED_EXTS},${TITLE}${s})

clean-graphs:
	rm -f $(GRAPHS)

clean-figures:
	rm -f $(FIGURES)

